REM ** Create a random RGB colour **
DEFFNRNDCOL%()
	LOCAL b%=ABS(RND MOD 256)
	LOCAL g%=ABS(RND MOD 256)
	LOCAL r%=ABS(RND Mod 256)
	RETURN (b% << 16) + (g% << 8) + r%
ENDFN

DEFPROCCreateCube()
	REM ** Build vertices **
	DIM V!(8, Vertex3D)
	VERTEX V!(0), -0.5,  0.5,  0.5, FNRNDCOL%()
	VERTEX V!(1),  0.5,  0.5,  0.5, FNRNDCOL%()
	VERTEX V!(2),  0.5, -0.5,  0.5, FNRNDCOL%()
	VERTEX V!(3), -0.5, -0.5,  0.5, FNRNDCOL%()
	VERTEX V!(4), -0.5,  0.5, -0.5, FNRNDCOL%()
	VERTEX V!(5),  0.5,  0.5, -0.5, FNRNDCOL%()
	VERTEX V!(6),  0.5, -0.5, -0.5, FNRNDCOL%()
	VERTEX V!(7), -0.5, -0.5, -0.5, FNRNDCOL%()

	REM ** Build triangle faces **
	DIM F!(12, Triangle3D)
	colour%=FNRNDCOL%():FACE F!(0), 3, 1, 0, colour%: FACE F!(1), 3, 2, 1, colour%: REM Front
	colour%=FNRNDCOL%():FACE F!(2), 5, 6, 7, colour%: FACE F!(3), 5, 7, 4, colour%: REM Back
	colour%=FNRNDCOL%():FACE F!(4), 3, 7, 6, colour%: FACE F!(5), 3, 6, 2, colour%: REM Top
	colour%=FNRNDCOL%():FACE F!(6), 4, 0, 1, colour%: FACE F!(7), 4, 1, 5, colour%: REM Bottom
	colour%=FNRNDCOL%():FACE F!(8), 4, 7, 3, colour%: FACE F!(9), 4, 3, 0, colour%: REM Left
	colour%=FNRNDCOL%():FACE F!(10), 1, 2, 6, colour%:FACE F!(11), 1, 6, 5, colour%:REM Right
	cube_shape%=SHAPE V!, F!
ENDPROC

DEFPROCTwoShapes()
	PROCCreateCube()
	cube1%=OBJECT cube_shape%, -20, 0, -150, 0, 300, 0, 25, SOLID
	cube2%=OBJECT cube_shape%, 20, 0, -150, 0, 300, 0, 25, WIREFRAME
	FOR I=0 TO 3600 STEP 0.1
		COLOURBG &000000
		CLS
		ROTATE cube1%, 0, I, 0
		ROTATE cube2%, 0, 3600 - I, 0
		RENDER
		FLIP	
	NEXT
ENDPROC

REM GRAPHICS 1366, 768, FALSE
REM PROCTwoShapes()

