INSTALL "C:/Users/d_dud/source/repos/PiBasic/V2/test/Demos/Perlin.bas"

DEFPROCCreateTerrain(width%, depth%, scale_x_in, scale_y_in, scale_z_in, grass%, rock%, snow%, rock, snow, flat)
	PRINT "Creating terrain, may take a little while..."
	LOCAL scale_x = scale_x_in / width%
	LOCAL scale_y = scale_y_in / width%
	LOCAL scale_z = scale_z_in / depth%
	LOCAL number_of_vertices%=(width% + 1) * (depth% + 1)
	LOCAL number_of_faces%=width% * depth% * 2
	DIM V!(number_of_vertices%, Vertex3D)
	DIM F!(number_of_faces%, Triangle3D)

	REM ** Build height map using perlin noise **
	DIM height(width%, depth%)
	LOCAL max_height=0.0
	FOR z% = 0 TO depth%
		FOR x% = 0 TO width%
			LOCAL v = FNPerlin2D(x%, z%, 0.08, 5)
	
			REM Adjust based on curve
			If flat = TRUE
				LOCAL xa=x%-(width%/2)
			EndIf

			height(x%, z%) = v
			IF v > max_height THEN max_height = v
		NEXT
	NEXT

	REM ** Build vertices **
	LOCAL half_width=(width% * scale_x) / 2.0
	LOCAL half_depth=(depth% * scale_z) / 2.0
	DIM height_vertex(number_of_vertices%)
	LOCAL I%=0
	FOR z% = 0 TO depth%
		FOR x% = 0 TO width%
			LOCAL h=height(x%, z%)
			LOCAL colour%=grass%
			IF h > rock * max_height THEN colour%=rock%
			IF h > snow * max_height THEN colour%=snow%
			VERTEX V!(I%), (x% * scale_x) - half_width, -h * scale_y, (z% * scale_z) - half_depth, colour%
			height_vertex(I%)=h
			I% = I% + 1
		NEXT
	NEXT

	REM ** Build faces **
	I% = 0
	FOR z% = 0 TO  depth%-1
		FOR x% = 0 TO width%-1 
			REM Triangle 1
			LOCAL v1% = (z% * (width% + 1)) + x%
			LOCAL v2% = v1% + 1
			LOCAL v3% = v2% + (width% + 1) - 1
			h=(height_vertex(v1%) + height_vertex(v2%) + height_vertex(v3%)) / 3
			colour%=grass%
			IF h > rock * max_height THEN colour%=rock%
			IF h > snow * max_height THEN colour%=snow%
			FACE F!(I%), v1%, v2%, v3%, colour%
  			I% = I% + 1

			REM Triangle 2
			v1% = (z% * (width% + 1)) + x% + 1
			v2% = v1% + (width% + 1)
			v3% = v2% - 1
			h=(height_vertex(v1%) + height_vertex(v2%) + height_vertex(v3%)) / 3
			colour%=grass%
			IF h > rock * max_height THEN colour%=rock%
			IF h > snow * max_height THEN colour%=snow%
			FACE F!(I%), v1%, v2%, v3%, colour%
			I% = I% + 1
		NEXT
	NEXT
	terrain%=SHAPE V!, F!
ENDPROC

DEFPROCRotateTerrain()
	GRAPHICS 1024, 768, FALSE
	PROCInitPerlin()
	terrainsize%=250
	PROCCreateTerrain(terrainsize%, terrainsize%, 1.0, 15.0, 1.0, &008000, &444444, &EEEEEE, 0.4, 0.7, 0)
	terrain1%=OBJECT terrain%, 0, 0, -300, 330, 0, 0, 250, SHADED
	FOR I=0 TO 3600 STEP 0.25
		COLOUR &000000
		CLS
		ROTATE terrain1%, 330, I, 0
		RENDER
		FLIP	
	NEXT
ENDPROC
