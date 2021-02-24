#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_2d()
{
    keywords.push_back(ManualKeyword(
        "CIRCLE",
        "CIRCLE",
        KeywordCategory::GRAPHICS_2D,
        "Statement generating an outline or filled circle.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxOptional("FILL"),
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
        },
        "<numeric_expression1> and <numeric_expression2> are the x,y coordinates of the centre of the circle. <numeric_expression3> is the radius in pixels.",
        "If FILL is specified then it will be a filled circle, otherwise just the outline.",
        "CIRCLE FILL 100,100,r%"));
    keywords.push_back(ManualKeyword(
        "CLIPON",
        "CLIPON",
        KeywordCategory::GRAPHICS_2D,
        "Statement enabling clipping of graphics drawing.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
        },
        "The four expressions specify the top-left and bottom-right x,y coordinates of the area to clip all drawing to (including 3D).",
        "All graphics operations are clipped to the specified area.",
        "CLIPON 100,100,200,200"));
    keywords.push_back(ManualKeyword(
        "CLIPOFF",
        "CLIPOFF",
        KeywordCategory::GRAPHICS_2D,
        "Statement disabling clipping of graphics drawing.",
        {},
        "",
        "Graphics operations are no longer clipped to a specified area, but to these limits of the graphics mode.",
        "CLIPOFF"));
    keywords.push_back(ManualKeyword(
        "CLS",
        "CLS",
        KeywordCategory::GRAPHICS_2D,
        "Statement clearing the screen.",
        {},
        "",
        "The graphics screen is cleared to the currently selected background colour. The cursor position is reset to the top left.",
        "CLS"));
    keywords.push_back(ManualKeyword(
        "CURSORON",
        "CURSORON",
        KeywordCategory::GRAPHICS_2D,
        "Statement enabling the text cursor.",
        {},
        "",
        "The text cursor is displayed at the current text position. Not shown in BANKED mode.",
        "CURSORON"));
    keywords.push_back(ManualKeyword(
        "CURSOROFF",
        "CURSOROFF",
        KeywordCategory::GRAPHICS_2D,
        "Statement disabling the text cursor.",
        {},
        "",
        "The text cursor is disabled.",
        "CURSOROFF"));
    keywords.push_back(ManualKeyword(
        "COLOUR",
        "COLOUR (RGB)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the foreground colour.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
        },
        "The three numeric expressions specify the red, green and blue values to create the colour. Each has a value of 0 to 255.",
        "The foreground colour for all text & graphics operations is changed.",
        "COLOUR 150,200,250"));
    keywords.push_back(ManualKeyword(
        "COLOUR",
        "COLOUR (HEX)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the foreground colour.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
        },
        "The expression is a combined integer value for all the RGB components. Often defined as a hexadecimal value.",
        "The foreground colour for all text & graphics operations is changed.",
        "COLOUR &806040"));
    keywords.push_back(ManualKeyword(
        "COLOUR",
        "COLOUR (NAMED)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the foreground colour using one of 8 named colours.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxValue("BLACK or RED or GREEN or YELLOW or BLUE or MAGENTA or CYAN or WHITE"),
        },
        "These are inbuilt colours, inspired by the BBC Micro!",
        "The foreground colour for all text & graphics operations is changed.",
        "COLOUR RED"));
    keywords.push_back(ManualKeyword(
        "COLOUR",
        "COLOUR (EXPRESSION)",
        KeywordCategory::GRAPHICS_2D,
        "Function returning the colour as an integer.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxParensClose(),
        },
        "The three numeric expressions specify the red, green and blue values to create the colour. Each has a value of 0 to 255.",
        "An integer expression is returned that can be used in calls to COLOUR and COLOURBG.",
        "LET a%=COLOUR(r%,g%,b%)"));
    keywords.push_back(ManualKeyword(
        "COLOURBG",
        "COLOURBG (RGB)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the background colour.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
        },
        "The three numeric expressions specify the red, green and blue values to create the colour. Each has a value of 0 to 255.",
        "The background colour for CLS is changed.",
        "COLOURBG 64,64,64"));
    keywords.push_back(ManualKeyword(
        "COLOURBG",
        "COLOURBG (HEX)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the background colour.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
        },
        "The expression is a combined integer value for all the RGB components. Often defined as a hexadecimal value.",
        "The background colour for CLS is changed.",
        "COLOURBG &202020"));
    keywords.push_back(ManualKeyword(
        "COLOURBG",
        "COLOURBG (NAMED)",
        KeywordCategory::GRAPHICS_2D,
        "Statement changing the background colour using one of 8 named colours.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxValue("BLACK or RED or GREEN or YELLOW or BLUE or MAGENTA or CYAN or WHITE"),
        },
        "These are inbuilt colours, inspired by the BBC Micro!",
        "The background colour for CLS is changed.",
        "COLOURBG YELLOW"));
    keywords.push_back(ManualKeyword(
        "CREATEFONT",
        "CREATEFONT",
        KeywordCategory::GRAPHICS_2D,
        "Function creating a font of a specific size and returning a handle to it.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
        },
        "<numeric_expression1> is a typeface handle returned by LOADTYPEFACE, <numeric_expression2> is the size of the font.",
        "The integer handle to the font is returned.",
        "font1%=CREATEFONT typefaceid%,20"));
    keywords.push_back(ManualKeyword(
        "FLIP",
        "FLIP",
        KeywordCategory::GRAPHICS_2D,
        "Statement flipping the back buffer for display.",
        {},
        "",
        "All 2D and 3D rendering is done to the back buffer. The FLIP statement shows the back buffer and marks the current front buffer as back. Typically CLS will be needed to clear before drawing.",
        "FLIP"));
    keywords.push_back(ManualKeyword(
        "GRAPHICS",
        "GRAPHICS",
        KeywordCategory::GRAPHICS_2D,
        "Statement starting graphics mode or changing graphics mode options.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxOptional("BANKED"),
            new ManualSyntaxComma(),
            new ManualSyntaxOptional("<numeric_expression1>,<numeric_expression2>"),
        },
        "If no arguments are specified, then this statement will default to full screen compatibility mode, otherwise\r  <expression1> and <expression2> are the width and height of the requested screen mode.\r  If BANKED is specified then the graphics engine runs in high performance banked mode where FLIP is needed to flip rendering buffers, this is mostly for games and 3D.",
        "The graphics mode is changed.",
        "GRAPHICS BANKED 800,600\rGRAPHICS"));
    keywords.push_back(ManualKeyword(
        "LINE",
        "LINE",
        KeywordCategory::GRAPHICS_2D,
        "Statement drawing a 1px wide line in the current foreground colour.",
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
        "The four expressions specify the start x, y and end x,y coordinates of the line.",
        "The requested line is drawn.",
        "LINE 100,100,200,200"));
    keywords.push_back(ManualKeyword(
        "LOADTYPEFACE",
        "LOADTYPEFACE",
        KeywordCategory::GRAPHICS_2D,
        "Function loading a truetype (TTF) typeface from a file and returning a handle to it.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxStringExpression(1),
        },
        "<expression1> is a string expression giving the TTF filename.",
        "The TTF typeface is loaded and the integer handle to the typeface is returned.",
        "handle%=LOADTYPEFACE filename$"));
    keywords.push_back(ManualKeyword(
        "PLOT",
        "PLOT",
        KeywordCategory::GRAPHICS_2D,
        "Statement plotting a pixel in the current foreground colour.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxStringExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxStringExpression(2),
        },
        "The two expressions specify the x, y coordinates of the pixel.",
        "The requested pixel is plotted in the current foreground colour.",
        "PLOT 150,150"));
    keywords.push_back(ManualKeyword(
        "POINT",
        "POINT",
        KeywordCategory::GRAPHICS_2D,
        "Function returning the colour of a pixel.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxStringExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxStringExpression(2),
            new ManualSyntaxParensClose(),
        },
        "The two expressions specify the x, y coordinates of the pixel.",
        "An integer with the RGB value of the selected pixel.",
        "col%=POINT(150,150)"));
    keywords.push_back(ManualKeyword(
        "RECTANGLE",
        "RECTANGLE",
        KeywordCategory::GRAPHICS_2D,
        "Statement generating an outline or filled rectangle.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxOptional("FILL"),
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(4),
        },
        "The four expressions specify the top-left x, y and bottom-right x,y coordinates of the rectangle.",
        "If FILL is specified then it will be a filled rectangle, otherwise just the outline.",
        "RECTANGLE FILL x1%,x2%,x2%,y2%"));
    keywords.push_back(ManualKeyword(
        "SCREENWIDTH",
        "SCREENWIDTH",
        KeywordCategory::GRAPHICS_2D,
        "Function returning the desktop resolution width.",
        {},
        "",
        "This function returns as an integer the desktop resolution width.",
        "GRAPHICS SCREENWIDTH/2,SCREENHEIGH/2,0"));
    keywords.push_back(ManualKeyword(
        "SCREENHEIGHT",
        "SCREENHEIGHT",
        KeywordCategory::GRAPHICS_2D,
        "Function returning the desktop resolution height.",
        {},
        "",
        "This function returns as an integer the desktop resolution height.",
        "LINE 0, 0, SCREENWIDTH/2,SCREENHEIGH/2"));
    keywords.push_back(ManualKeyword(
        "SHOWFPS",
        "SHOWFPS",
        KeywordCategory::GRAPHICS_2D,
        "Show the current approximate FPS.",
        {},
        "",
        "This statement shows the FPS (frames per second) being achieved. It updates every 10 FLIPs. This only makes sense when constantly updating the screens, such as in 3D rendering.",
        "SHOWFPS"));
    keywords.push_back(ManualKeyword(
        "TEXT",
        "TEXT",
        KeywordCategory::GRAPHICS_2D,
        "Statement writing left aligned text to the back buffer.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxStringExpression(4),
        },
        "The first expression is a font index, either one of the built-in ones:\r  PROP15/PROP20/PROP25/PROP30/PROP40/PROP50/PROP75/PROP100 - for proportional sans-serif fonts, or\n  SERIF15/SERIF20/SERIF25/SERIF30/SERIF40/SERIF50/SERIF75/SERIF100 - for proportional serif fonts, or\r  MONO15/MONO20/MONO25/MONO30/MONO40/MONO50/MONO75/MONO100 - for monospaced fonts, or\r  a handle from CREATEFONT.\r\rThe next two expressions are the x and y positions (both integers). -1 for either uses last cursor.\r\rThe final <expression4> is a string expression for the text to display.",
        "The text is rendered as requested to the back buffer.",
        "TEXT PROP20,100,200,msg$"));
    keywords.push_back(ManualKeyword(
        "TEXTCENTRE/TEXTCENTER",
        "TEXTCENTRE/TEXTCENTER",
        KeywordCategory::GRAPHICS_2D,
        "Statement writing centre aligned text to the back buffer.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxStringExpression(4),
        },
        "The first expression is a font index, either one of the built-in ones:\r  PROP10/PROP15/PROP20/PROP25/PROP30/PROP40/PROP50/PROP75/PROP100 - for proportional fonts, or\r  MONO10/MONO15/MONO20/MONO25/MONO30/MONO40/MONO50/MONO75/MONO100 - for monospaced fonts, or\r  a handle from CREATEFONT.\r\rThe next two expressions are the x and y positions (both integers). -1 for either uses last cursor.\r\rThe final <expression4> is a string expression for the text to display.",
        "The text is rendered as requested to the back buffer. The centre point is the x co-ordinate.",
        "TEXTCENTRE MONO15,SCREENWIDTH/2,200,\"Hello!\""));
    keywords.push_back(ManualKeyword(
        "TEXTRIGHT",
        "TEXTRIGHT",
        KeywordCategory::GRAPHICS_2D,
        "Statement writing right aligned text to the back buffer.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericExpression(3),
            new ManualSyntaxComma(),
            new ManualSyntaxStringExpression(4),
        },
        "The first expression is a font index, either one of the built-in ones:\r  PROP10/PROP15/PROP20/PROP25/PROP30/PROP40/PROP50/PROP75/PROP100 - for proportional fonts, or\r  MONO10/MONO15/MONO20/MONO25/MONO30/MONO40/MONO50/MONO75/MONO100 - for monospaced fonts, or\r  a handle from CREATEFONT.\r\rThe next two expressions are the x and y positions (both integers). -1 for either uses last cursor.\r\rThe final <expression4> is a string expression for the text to display.",
        "The text is rendered as requested to the back buffer. The x co-ordinate is the right hand position of the text.",
        "TEXTRIGHT PROP50,SCREENWIDTH,0,a$"));
    keywords.push_back(ManualKeyword(
        "TRIANGLE",
        "TRIANGLE [FILL]",
        KeywordCategory::GRAPHICS_2D,
        "Statement generating an outline or filled triangle.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxOptional("FILL"),
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
        },
        "The first six expressions are the x,y coordinates of each of the three vertices.",
        "If FILL is specified then it will be a filled triangle, otherwise just the outline.",
        "TRIANGLE FILL 50,50,150,100,75,200"));
    keywords.push_back(ManualKeyword(
        "TRIANGLE SHADED",
        "TRIANGLE SHADED",
        KeywordCategory::GRAPHICS_2D,
        "Statement generating a shaded triangle.",
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
            new ManualSyntaxNumericExpression(9),
        },
        "The first six expressions are the x,y coordinates of each of the three vertices. The last 3 expressions are the colours for each vertex - these are typically created with COLOUR expressions.",
        "If FILL is specified then it will be a filled rectangle, otherwise just the outline.",
        "TRIANGLE SHADED 50,50,150,100,75,200,COLOUR(50,50,50),COLOUR(60,60,60),COLOUR(70,70,70)\rTRIANGLE SHADED 50,50,150,100,75,200,&FF0000,&00FF00,&0000FF"));
}