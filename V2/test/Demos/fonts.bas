INSTALL "C:\Users\d_dud\source\repos\PiBasic\V2\test\Demos\Cubes.bas"

DEFFNRandomString$()
    LOCAL A$=""
    FOR I%=0 To RND(20)+5
        A$=A$+CHR$(32+RND(95))
    NEXT
    RETURN A$
ENDFN

DEFFNRandomColour%():RETURN (RND(180)+64) << 16 + (RND(180)+64) << 8 + RND(180)+64:ENDFN

WIDTH%=1024:C%=15
DIM A$(C%),CL%(C%):FOR I%=0 To C%:A$(I%)=FNRandomString$():CL%(I%)=FNRandomColour%():NEXT
GRAPHICS WIDTH%, 768, FALSE
coolfont%   = LOADTYPEFACE "FXMatrix105MonoPicaRegular.otf"
coolfont10% = CREATEFONT coolfont%, 25
PROCCreateCube()
cube1%=OBJECT cube_shape%, -20, 0, -150, 0, 300, 0, 25, SOLID
cube2%=OBJECT cube_shape%, 20, 0, -150, 0, 300, 0, 25, WIREFRAME
FOR I=0 TO 3600 STEP 0.1
	COLOURBG &000000
	CLS
	ROTATE cube1%, 0, I, 0
	ROTATE cube2%, 0, 3600 - I, 0
	RENDER
	FOR I%=0 To C%
		COLOUR CL%(I%)
		TEXT         MONO20, 10, 25 * I%, A$(I%)
		TEXTCENTRE   coolfont10%, WIDTH% / 2, 25 * I%, A$(I%)
		TEXTRIGHT    PROP20, WIDTH%-1-10, 25 * I%, A$(I%)
	NEXT
    TEXT MONO10, 10, (25 * C%) + 25, "Mono 10":TEXT PROP10, 400, (25 * C%) + 25, "Prop 10"
    TEXT MONO15, 10, (25 * C%) + 50, "Mono 15":TEXT PROP15, 400, (25 * C%) + 50, "Prop 15"
    TEXT MONO20, 10, (25 * C%) + 75, "Mono 20":TEXT PROP20, 400, (25 * C%) + 75, "Prop 20"
    TEXT MONO25, 10, (25 * C%) + 100, "Mono 25":TEXT PROP25, 400, (25 * C%) + 100, "Prop 25"
    TEXT MONO30, 10, (25 * C%) + 125, "Mono 30":TEXT PROP30, 400, (25 * C%) + 125, "Prop 30"
    TEXT MONO40, 10, (25 * C%) + 150, "Mono 40":TEXT PROP40, 400, (25 * C%) + 150, "Prop 40"
    TEXT MONO50, 10, (25 * C%) + 175, "Mono 50":TEXT PROP50, 400, (25 * C%) + 175, "Prop 50"
    TEXT MONO75, 10, (25 * C%) + 200, "Mono 75":TEXT PROP75, 400, (25 * C%) + 200, "Prop 75"
    TEXT MONO100, 10, (25 * C%) + 225, "Mono 100":TEXT PROP100, 400, (25 * C%) + 225, "Prop 100"
	FLIP	
NEXT
INKEY(10000)
