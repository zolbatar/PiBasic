#define _GLIBCXX_USE_C99 1
#include "manual/manual.h"
#include "../graphics/graphics.h"
#include "vm.h"

void create_manual_2d();
void create_manual_3d();
void create_manual_keyboardmouse();
void create_manual_io();
void create_manual_looping();
void create_manual_maths();
void create_manual_fn_proc();
void create_manual_variables_types();
void create_manual_string();
void create_manual_debugging();
void create_manual_boolean();
void create_manual_operators();

int column = 0;
std::vector<ManualKeyword> keywords;
void initialise_manual()
{
    create_manual_2d();
    create_manual_3d();
    create_manual_keyboardmouse();
    create_manual_maths();
    create_manual_io();
    create_manual_looping();
    create_manual_fn_proc();
    create_manual_variables_types();
    create_manual_string();
    create_manual_debugging();
    create_manual_boolean();
    create_manual_operators();
}

int VM::debugger_manual_keyword_section(KeywordCategory category, int *index, int selected, std::string *selected_keyword)
{
    graphics->colour(0, 128, 255);
    graphics->print_text(fixed_font, "   ", column * 300, -1);
    switch (category)
    {
    case KeywordCategory::OPERATORS:
        graphics->print_text(manual_font, "Operators\r", -1, -1);
        break;
    case KeywordCategory::KEYBOARD_AND_MOUSE:
        graphics->print_text(manual_font, "Keyboard & Mouse\r", -1, -1);
        break;
    case KeywordCategory::MATHS_AND_NUMBERS:
        graphics->print_text(manual_font, "Maths & Numbers\r", -1, -1);
        break;
    case KeywordCategory::FILE_IO:
        graphics->print_text(manual_font, "File I/O\r", -1, -1);
        break;
    case KeywordCategory::GRAPHICS_2D:
        graphics->print_text(manual_font, "2D Graphics\r", -1, -1);
        break;
    case KeywordCategory::GRAPHICS_3D:
        graphics->print_text(manual_font, "3D Graphics\r", -1, -1);
        break;
    case KeywordCategory::CONDITIONAL_LOOPING:
        graphics->print_text(manual_font, "Conditional & Looping\r", -1, -1);
        break;
    case KeywordCategory::FN_AND_PROC:
        graphics->print_text(manual_font, "Functions, Procedures and Subroutines\r", -1, -1);
        break;
    case KeywordCategory::VARIABLES_TYPES:
        graphics->print_text(manual_font, "Variables, Structured Types and Data\r", -1, -1);
        break;
    case KeywordCategory::STRING:
        graphics->print_text(manual_font, "Strings & Text Output\r", -1, -1);
        break;
    case KeywordCategory::DEBUGGING:
        graphics->print_text(manual_font, "Debugging & Execution\r", -1, -1);
        break;
    case KeywordCategory::BOOLEAN:
        graphics->print_text(manual_font, "Boolean Logic\r", -1, -1);
        break;
    }

    int section_count = 0;
    for (auto it = keywords.begin(); it != keywords.end(); ++it)
    {
        if ((*it).category == category)
        {
            section_count++;
            if (*index == selected)
            {
                *selected_keyword = (*it).keywordLong;
                graphics->colour(255, 255, 0);
                graphics->print_text(fixed_font, "->", column * 300, -1);
            }
            else
            {
                graphics->print_text(fixed_font, "  ", column * 300, -1);
            }
            if ((*it).description.length() == 0)
            {
                graphics->colour(255, 0, 0);
                graphics->print_text(fixed_font, "*", -1, -1);
            }
            else
            {
                graphics->print_text(fixed_font, " ", -1, -1);
            }
            graphics->colour(255, 255, 255);
            auto kw = (*it).keywordLong;
            graphics->print_text(fixed_font, kw, -1, -1);
            int a = 15 - static_cast<int>(kw.length());
            for (int i = 0; i < a; i++)
            {
                kw = " " + kw;
            }
            graphics->print_text(fixed_font, "\r", -1, -1);

            // Are we out of space?
            if (graphics->get_cursor_y() > graphics->get_actual_height() - 100)
            {
                column++;
                graphics->print_text(fixed_font, "", column * 100, 50);
            }

            (*index)++;
        }
    }
    graphics->print_text(fixed_font, "\r", -1, -1);
    return section_count;
}

void VM::debugger_manual()
{
    // Init manual?
    if (keywords.size() == 0)
    {
        initialise_manual();
    }
    int selected = 0;
    int max_sections = 13;
    int sections_indexes[100];
    std::string selected_keyword = "";
    int max = static_cast<int>(keywords.size());
    bool updated = true;
    while (true)
    {
        int selected_section = 0;
        if (updated)
        {
            debugger_options(8, 2);

            graphics->colour(255, 0, 0);
            graphics->print_text(fixed_font, "* ", 20, graphics->get_actual_height() - 30);
            graphics->colour(255, 255, 0);
            graphics->print_text(manual_font, "No help available yet", -1, -1);

            graphics->print_text(manual_font, "", -1, 40);
            int index = 0;
            column = 0;
            graphics->print_text(fixed_font, "", 0, 50);

            sections_indexes[0] = 0;
            int c = debugger_manual_keyword_section(KeywordCategory::BOOLEAN, &index, selected, &selected_keyword);
            sections_indexes[1] = c;
            c += debugger_manual_keyword_section(KeywordCategory::CONDITIONAL_LOOPING, &index, selected, &selected_keyword);
            sections_indexes[2] = c;
            c += debugger_manual_keyword_section(KeywordCategory::DEBUGGING, &index, selected, &selected_keyword);
            sections_indexes[3] = c;
            c += debugger_manual_keyword_section(KeywordCategory::FILE_IO, &index, selected, &selected_keyword);
            sections_indexes[4] = c;
            c += debugger_manual_keyword_section(KeywordCategory::FN_AND_PROC, &index, selected, &selected_keyword);
            sections_indexes[5] = c;
            c += debugger_manual_keyword_section(KeywordCategory::GRAPHICS_2D, &index, selected, &selected_keyword);
            sections_indexes[6] = c;
            c += debugger_manual_keyword_section(KeywordCategory::GRAPHICS_3D, &index, selected, &selected_keyword);
            sections_indexes[7] = c;
            c += debugger_manual_keyword_section(KeywordCategory::KEYBOARD_AND_MOUSE, &index, selected, &selected_keyword);
            sections_indexes[8] = c;
            c += debugger_manual_keyword_section(KeywordCategory::MATHS_AND_NUMBERS, &index, selected, &selected_keyword);
            sections_indexes[9] = c;
            c += debugger_manual_keyword_section(KeywordCategory::STRING, &index, selected, &selected_keyword);
            sections_indexes[10] = c;
            c += debugger_manual_keyword_section(KeywordCategory::VARIABLES_TYPES, &index, selected, &selected_keyword);
            sections_indexes[11] = c;
            c += debugger_manual_keyword_section(KeywordCategory::OPERATORS, &index, selected, &selected_keyword);
            sections_indexes[12] = c;

            // What section?
            selected_section = 0;
            for (int i = 0; i < max_sections; i++)
            {
                if (selected >= sections_indexes[i])
                {
                    selected_section = i;
                }
            }
            updated=false;
        }

        graphics->flip();
        graphics->poll();
        if (graphics->inkey(-17))
        {
            exit(0);
        }
        else if (graphics->inkey(-58))
        {
            while (graphics->inkey(-58))
                graphics->poll();
            selected--;
            updated = true;
        }
        else if (graphics->inkey(-42))
        {
            while (graphics->inkey(-42))
                graphics->poll();
            selected++;
            updated = true;
        }
        else if (graphics->inkey(-64))
        {
            while (graphics->inkey(-64))
                graphics->poll();
            if (selected_section > 0)
            {
                selected_section--;
                selected = sections_indexes[selected_section];
                updated = true;
            }
        }
        else if (graphics->inkey(-79))
        {
            while (graphics->inkey(-79))
                graphics->poll();
            if (selected_section < (max_sections - 2))
            {
                selected_section++;
                selected = sections_indexes[selected_section];
                updated = true;
            }
        }
        else if (graphics->inkey(-74))
        {
            // RETURN
            debugger_manual_keyword(selected_keyword);
            updated=true;
        }
        else if (graphics->inkey(-114) || graphics->inkey(-115) || graphics->inkey(-31))
        {
            graphics->restore();
            return;
        }
        if (selected < 0)
            selected = 0;
        if (selected >= max)
            selected = max - 1;
    }
}

void VM::debugger_manual_keyword(std::string keyword)
{
    // Find keyword
    ManualKeyword *kw = &keywords[0];
    for (auto it = keywords.begin(); it != keywords.end(); ++it)
    {
        if ((*it).keywordLong.compare(keyword) == 0)
        {
            kw = &(*it);
        }
    }

    while (true)
    {
        debugger_options(8, 2);
        graphics->print_text(manual_font, "\r\r", -1, -1);
        graphics->set_margin(20);

        // Keyword
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font + 2, kw->keywordLong + " ", -1, -1);

        // Category
        graphics->colour(255, 80, 0);
        switch (kw->category)
        {
        case KeywordCategory::KEYBOARD_AND_MOUSE:
            graphics->print_text(manual_font + 2, "(Keyboard & Mouse)\r\r", -1, -1);
            break;
        case KeywordCategory::MATHS_AND_NUMBERS:
            graphics->print_text(manual_font + 2, "(Maths & Numbers)\r\r", -1, -1);
            break;
        case KeywordCategory::GRAPHICS_2D:
            graphics->print_text(manual_font + 2, "(2D Graphics)\r\r", -1, -1);
            break;
        case KeywordCategory::GRAPHICS_3D:
            graphics->print_text(manual_font + 2, "(3D Graphics)\r\r", -1, -1);
            break;
        case KeywordCategory::OPERATORS:
            graphics->print_text(manual_font + 2, "(Operators)\r\r", -1, -1);
            break;
        case KeywordCategory::FILE_IO:
            graphics->print_text(manual_font + 2, "(File I/O)\r\r", -1, -1);
            break;
        case KeywordCategory::CONDITIONAL_LOOPING:
            graphics->print_text(manual_font + 2, "(Conditional & Looping)\r\r", -1, -1);
            break;
        case KeywordCategory::FN_AND_PROC:
            graphics->print_text(manual_font + 2, "(Functions, Procedures and Subroutines)\r\r", -1, -1);
            break;
        case KeywordCategory::VARIABLES_TYPES:
            graphics->print_text(manual_font + 2, "(Variables, Structured Types and Data)\r\r", -1, -1);
            break;
        case KeywordCategory::STRING:
            graphics->print_text(manual_font + 2, "(Strings & Text Output)\r\r", -1, -1);
            break;
        case KeywordCategory::DEBUGGING:
            graphics->print_text(manual_font + 2, "(Debugging & Execution)\r\r", -1, -1);
            break;
        case KeywordCategory::BOOLEAN:
            graphics->print_text(manual_font + 2, "(Boolean Logic)\r\r", -1, -1);
            break;
        }

        // Description
        if (kw->description.length() > 0)
        {
            graphics->colour(128, 128, 128);
            graphics->print_text(manual_font, "Description:\r\r", -1, -1);
            graphics->colour(255, 255, 255);
            graphics->print_text(manual_font, kw->description, -1, -1);
            graphics->print_text(manual_font, "\r\r", -1, -1);
        }

        // Syntax
        graphics->colour(128, 128, 128);
        graphics->print_text(manual_font, "Syntax:\r\r", -1, -1);
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font, kw->keyword, -1, -1);
        for (auto its = kw->syntax.begin(); its != kw->syntax.end(); ++its)
        {
            (*its)->render(graphics);
        }
        graphics->print_text(manual_font, "\r\r", -1, -1);

        // Arguments
        if (kw->arguments.length() > 0)
        {
            graphics->colour(128, 128, 128);
            graphics->print_text(manual_font, "Arguments:\r\r", -1, -1);
            graphics->colour(255, 255, 255);
            graphics->print_text(manual_font, kw->arguments, -1, -1);
            graphics->print_text(manual_font, "\r\r", -1, -1);
        }

        // Result
        if (kw->result.length() > 0)
        {
            graphics->colour(128, 128, 128);
            graphics->print_text(manual_font, "Result:\r\r", -1, -1);
            graphics->colour(255, 255, 255);
            graphics->print_text(manual_font, kw->result, -1, -1);
            graphics->print_text(manual_font, "\r\r", -1, -1);
        }

        // Example
        if (kw->examples.length() > 0)
        {
            graphics->colour(128, 128, 128);
            graphics->print_text(manual_font, "Examples:\r\r", -1, -1);
            graphics->colour(255, 255, 255);
            graphics->print_text(fixed_font, kw->examples, -1, -1);
        }

        graphics->colour(255, 255, 0);
        graphics->print_text(10, "\r\r(Hit Space to return)", -1, -1);

        graphics->flip();
        graphics->poll();
        graphics->set_margin(0);
        if (graphics->inkey(-17))
        {
            exit(0);
        }
        else if (graphics->inkey(-99) || graphics->inkey(-114) || graphics->inkey(-115) || graphics->inkey(-31))
        {
            return;
        }
    }
}
