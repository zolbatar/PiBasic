#include "compiler.h"
#include <cassert>
#include <chrono>

void Compiler::reset()
{
    type_list.empty();
    vm->helper_bytecodes().clear();
    line_number = 0;
    char_position = 0;
}

Compiler::Compiler()
{
    // Set up the 3D stuff
    setup_3d_types();
}

void Compiler::compile(VM* vm, DARICParser::ProgContext* tree, std::string filename)
{
    using namespace std::chrono;

    this->vm = vm;
    reset();
    if_statements.clear();
    functions.clear();

    // Parse
    auto t1 = high_resolution_clock::now();
    phase = CompilerPhase::LOOKAHEAD;
    auto daric = visitProg(tree);

    // Lookahead, figure out function definitions and types
    assert(vm->helper_bytecodes().get_size() == 0);
    assert(stack_size() == 0);
    reset();

    // Size, figure out sizing for jumps etc.
    t1 = high_resolution_clock::now();
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::SIZE;
    daric = visitProg(tree);
    assert(stack_size() == 0);
    reset();

    // Compile! Build the VM
    t1 = high_resolution_clock::now();
    vm->helper_bytecodes().pc = 0;
    phase = CompilerPhase::COMPILE;
    daric = visitProg(tree);
    assert(stack_size() == 0);
    auto t2 = high_resolution_clock::now();
    auto time_span = duration_cast<duration<double>>(t2 - t1);
    g_env.log << "Parsing and compilation took " << time_span.count() << " seconds." << std::endl;

    insert_bytecode_notype(Bytecodes::HALT);

    // Now we MOVE the variables into the VM class
    vm->helper_variables().set_variables_size(global_var_index);
    for (auto g = globals.begin(); g != globals.end(); ++g) {
        auto glob = (*g).second;
        if (vm->helper_variables().get_variable_by_int_checkless(glob.index)->get_type() == Type::NOTYPE) {
            vm->helper_variables().add_variable((*g).second, glob.index);
        }
    }
    for (auto g = constants.begin(); g != constants.end(); ++g) {
        auto glob = (*g);
        if (vm->helper_variables().get_variable_by_int_checkless(glob.index)->get_type() == Type::NOTYPE) {
            vm->helper_variables().add_variable(glob, glob.index);
        }
    }

    // Size to number of functions
    vm->functions.resize(functions.size());

    // Setup each function locals now
    for (auto g = functions.begin(); g != functions.end(); ++g) {
        auto func = (*g).second;

        // Create VM func reference
        VMFunction b;
        b.pc_start = func.pc_start;
        b.pc_end = func.pc_end;

        // Now create locals for debugger lookup of name and type
        for (auto l = func.locals.begin(); l != func.locals.end(); ++l) {
            auto ll = (*l).second;
            Boxed b2;
            b2.name = ll.name;
            b2.set_type_nodefault(ll.get_type());
            b.locals.push_back(std::move(b2));
        }
        b.locals_count = static_cast<UINT32>(b.locals.size());
        vm->functions[func.index] = std::move(b);
    }
}

void Compiler::setup_3d_types()
{
    // Pi3D_Vertex
    CustomType custom_type;
    custom_type.id = custom_type_index++;
    custom_type.members.insert(std::pair<std::string, Boxed>("x", std::move(Boxed("x", Type::FLOAT, 0))));
    custom_type.members.insert(std::pair<std::string, Boxed>("y", std::move(Boxed("y", Type::FLOAT, 1))));
    custom_type.members.insert(std::pair<std::string, Boxed>("z", std::move(Boxed("z", Type::FLOAT, 2))));
    custom_type.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::INTEGER, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Vertex3D", std::move(custom_type)));

    // Pi3D_Vertex
    CustomType custom_type2;
    custom_type2.id = custom_type_index++;
    custom_type2.members.insert(std::pair<std::string, Boxed>("v1", std::move(Boxed("v1", Type::INTEGER, 0))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v2", std::move(Boxed("v2", Type::INTEGER, 1))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v3", std::move(Boxed("v3", Type::INTEGER, 2))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::INTEGER, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Triangle3D", std::move(custom_type2)));
}
