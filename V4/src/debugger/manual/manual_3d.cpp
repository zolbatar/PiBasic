#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_3d()
{
    keywords.push_back(ManualKeyword(
        "DELETEOBJECT",
        "DELETEOBJECT",
        KeywordCategory::GRAPHICS_3D,
        "Statement for deletion of objects from 3D scene.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
        },
        "<numeric_expression1> is an integer handle obtained through a previous call to OBJECT.",
        "Once deleted, the object will no longer appear in the 3D scene.",
        "DELETEOBJECT cube1%"));
    keywords.push_back(ManualKeyword(
        "FACE",
        "FACE",
        KeywordCategory::GRAPHICS_3D,
        "Statement for the creation of a 3D triangle face.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(5),
        },
        "<expression1> is an index entry into an array of Triangle3D structured types.\r<numeric_expression2>,<numeric_expression3> and <numeric_expression4> are integers, the index values of the vertices for each corner of the 3D triangle face.\r<numeric_expression5> is an expression representing the colour of the face for solid filled faces.",
        "The face is created at the specified index.",
        "FACE V!(0),v1%,v2%,v3%,&FF0000"));
    keywords.push_back(ManualKeyword(
        "OBJECT",
        "OBJECT",
        KeywordCategory::GRAPHICS_3D,
        "Function for creation of 3D object.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(5),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(6),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(7),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(8),
            new ManualSyntaxComma(),
            new ManualSyntaxOptional("SOLID or SHADED or WIREFRAME or WIREFRAME"),
        },
        "This function creates a 3D object and adds to the 3D scene for rendering.\r\r<numeric_expression1> is an integer shape handle previously returned from SHAPE.\r<numeric_expression2>,<numeric_expression3> and <numeric_expression4> are real expressions specifying the x,y,z position of the object in 3D space.\r<numeric_expression5>,<numeric_expression6> and <numeric_expression7> are real expressions specifying the x,y,z rotation of the object in degrees.\r<expression8> is a real expression specifying the scale (i.e. size) of the object.\r\rThe final keyword specifies the rendering type:\r  SOLID is flat filled\r  SHADED is smooth shading\r  WIREFRAME shows the outline in the current foreground colour\r  FILLEDWIREFRAME is flat filled with the outline rendered in the current foreground colour.",
        "An integer handle is returned.",
        "obj%=OBJECT shape%,x,y,z,0,90,180,25,SOLID"));
    keywords.push_back(ManualKeyword(
        "RENDER",
        "RENDER",
        KeywordCategory::GRAPHICS_3D,
        "Statement for rendering the 3D scene.",
        {},
        "",
        "The 3D scene is rendered to the backbuffer. Normal 2D drawing operations can be performed before and after RENDER.",
        "RENDER"));
    keywords.push_back(ManualKeyword(
        "ROTATE",
        "ROTATE",
        KeywordCategory::GRAPHICS_3D,
        "Statement for rotating a 3D object.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
        },
        "<numeric_expression1> is an integer object handle previously returned from OBJECT. <numeric_expression2>,<numeric_expression3> and <numeric_expression4> are real expressions specifying the x,y,z rotation of the object in degrees.",
        "The object's rotation is set as specified.",
        "ROTATE ship1%,30,y,60"));
    keywords.push_back(ManualKeyword(
        "SCALE",
        "SCALE",
        KeywordCategory::GRAPHICS_3D,
        "Statement for scaling (sizing) a 3D object.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
        },
        "<numeric_expression1> is an integer object handle previously returned from OBJECT. <numeric_expression2> is a real expressions specifying the scale factor of the object.",
        "The object is scaled as specified.",
        "SCALE enemy10%,size"));
    keywords.push_back(ManualKeyword(
        "SHAPE",
        "SHAPE",
        KeywordCategory::GRAPHICS_3D,
        "Function for creating a 3D shape.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxExpression(2),
        },
        "<expression1> is an array of Vertex3D structured types. <expression2> is an array of Triangle3D structured types.",
        "The shape is created, and an integer handle returned.",
        "DIM V!(8, Vertex3D)\rDIM F!(12, Triangle3D)\r...\rcube_shape%=SHAPE V!, F!"));
    keywords.push_back(ManualKeyword(
        "TRANSLATE",
        "TRANSLATE",
        KeywordCategory::GRAPHICS_3D,
        "Statement for translating (moving) a 3D object.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
        },
        "<numeric_expression1> is an integer object handle previously returned from OBJECT. <numeric_expression2>,<numeric_expression3> and <numeric_expression4> are real expressions specifying the x,y,z position of the 3D object.",
        "The object's position is set as specified.",
        "TRANSLATE enemy%,0,100,-50"));
    keywords.push_back(ManualKeyword(
        "VERTEX",
        "VERTEX",
        KeywordCategory::GRAPHICS_3D,
        "Statement for creation of a 3D vertex (corner).",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(5),
        },
        "<expression1> is an index entry into an array of Vertex3D structured types. <expression2>,<expression3> and <expression4> are integers, the index values of the vertices for each corner of the 3D triangle face. <expression5> is an expression representing the colour of the face for solid filled faces.",
        "An integer handle is returned.",
        "VERTEX V!(7), -0.5, -0.5, -0.5, &FF0000"));
}
