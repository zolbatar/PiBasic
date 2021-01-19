    1 ON ERROR PRINT REPORT$;" at line ";ERL:END
    2 swidth%=1024:sheight%=768
    3 REMMODE 0
    4 MODE "X"+STR$(swidth%)+" Y"+STR$(sheight%)+" C16M"
    5 
    6 REM Create a VFP context
    7 SYS "VFPSupport_CreateContext", (1 << 31), 32 TO vfp%
    8 PRINT "VFPContext: ";vfp%
    9 
   10 REM The 0 below means no double/triple buffering, useful for debugging
   11 backbuffers%=1
   12 SYS "Engine3D_Init", backbuffers%
   13 rendertype%=4
   14 SYS "Engine3D_SetAmbientLight", &404040
   15 light_x%=255 * 0:light_y%=255 * -0.3:light_z%=255 * 0.7
   16 SYS "Engine3D_SetDirectionalLight", &FFFFFF, light_x%, light_y%, light_z%
   17 SYS "Engine3D_SetRenderType", rendertype%
   18 SYS "Engine3D_SetNormalsVisibility", 0
   19 SYS "Engine3D_ShapeSize" TO shape_size%
   20 SYS "Engine3D_VertexSize" TO vertex_size%
   21 SYS "Engine3D_FaceSize" TO face_size%
   22 fa = 256: REM This is the fixed-point float adjust for points
   23 DIM frames(10):REM For FPS stuff
   24 
   25 PROCInitPerlin
   26 PROCCreateCube
   27 
   28 normals%=0
   29 REPEAT
   30   CLS
   31   PRINT
   32   PRINT "Choose:"
   33   PRINT
   34   IF backbuffers%=1 THEN PRINT "O - Disable back buffers"
   35   IF backbuffers%=0 THEN PRINT "O - Enable back buffers"
   36   PRINT "U - 1920x1080 (flickers due to bad support for buffering)"
   37   PRINT "I - 1024x768 (highest flicker free)"
   38   PRINT "Y - 640x480"
   39   PRINT
   40   PRINT "Q - BASIC calling engine to draw shapes"
   41   PRINT "W - BASIC calling engine to draw shapes (with clipping)"
   42   PRINT "E - Internal engine test: Shape performance test"
   43   PRINT
   44   PRINT "A - Cube demo"
   45   PRINT "S - Cube"
   46   PRINT "D - Terrain"
   47   PRINT "F - Teapot OBJ file"
   48   PRINT "G - Head OBJ file"
   49   PRINT
   50   PRINT "1 - Don't render, just do 3D calculations, useful for performance testing"
   51   PRINT "2 - Set wireframe rendering"
   52   PRINT "3 - Barycentric"
   53   PRINT "4 - Set gouraud"
   54   PRINT "5 - Fast polygon fill"
   55   PRINT "6 - 'Outrun' wireframe"
   56   PRINT
   57   PRINT "Z to quit (you MUST to free up allocated memory in the engine, otherwise module space will be exhausted)"
   58   a$ = INKEY$(1000)
   59   
   60   IF a$="Y" OR a$="y" THEN
   61     SYS "Engine3D_Shutdown"
   62     swidth%=640:sheight%=480
   63     MODE "X"+STR$(swidth%)+" Y"+STR$(sheight%)+" C16M"
   64     SYS "Engine3D_Init", backbuffers%
   65   ENDIF
   66   IF a$="U" OR a$="u" THEN
   67     SYS "Engine3D_Shutdown"
   68     swidth%=1920:sheight%=1080
   69     MODE "X"+STR$(swidth%)+" Y"+STR$(sheight%)+" C16M"
   70     SYS "Engine3D_Init", backbuffers%
   71   ENDIF
   72   IF a$="I" OR a$="i" THEN
   73     SYS "Engine3D_Shutdown"
   74     swidth%=1024:sheight%=768
   75     MODE "X"+STR$(swidth%)+" Y"+STR$(sheight%)+" C16M"
   76     SYS "Engine3D_Init", backbuffers%
   77   ENDIF
   78   
   79   IF a$="O" OR a$="o" THEN
   80     backbuffers%=backbuffers% EOR 1
   81     SYS "Engine3D_Shutdown"
   82     SYS "Engine3D_Init", backbuffers%
   83   ENDIF
   84   
   85   IF a$="P" OR a$="p" THEN
   86     SYS "Engine3D_Shutdown"
   87     SYS "Engine3D_Init", 1
   88   ENDIF
   89   
   90   IF a$="Q" OR a$="q" THEN PROCDrawShapes
   91   IF a$="W" OR a$="w" THEN
   92     SYS "Engine3D_SetClip", 100, 100, 1023-100, 767-100
   93     PROCDrawShapes
   94   ENDIF
   95   IF a$="E" OR a$="e" THEN
   96     SYS "Engine3D_FlipBanks"
   97     SYS "Engine3D_ClearScreen", 0
   98     SYS "Engine3D_FlipBanks"
   99     T%=TIME
  100     SYS "Engine3D_PerformanceTest2D"
  101     PRINT "Time: ";TIME-T%
  102     SYS "Engine3D_FlipBanks"
  103     z$ = INKEY$(1000)
  104   ENDIF
  105   
  106   IF a$="1" THEN rendertype%=0:SYS "Engine3D_SetRenderType", rendertype%
  107   IF a$="2" THEN rendertype%=1:SYS "Engine3D_SetRenderType", rendertype%
  108   IF a$="3" THEN rendertype%=2:SYS "Engine3D_SetRenderType", rendertype%
  109   IF a$="4" THEN rendertype%=3:SYS "Engine3D_SetRenderType", rendertype%
  110   IF a$="5" THEN rendertype%=4:SYS "Engine3D_SetRenderType", rendertype%
  111   IF a$="6" THEN rendertype%=5:SYS "Engine3D_SetRenderType", rendertype%
  112   
  113   IF a$="A" OR a$="a" THEN PROCRenderCube
  114   IF a$="S" OR a$="s" THEN PROCRenderCubeControlled
  115   IF a$="D" OR a$="d" THEN PROCRenderTerrainControlled
  116   IF a$="F" OR a$="f" THEN PROCRenderOBJControlled("teapot")
  117   IF a$="G" OR a$="g" THEN PROCRenderOBJControlled("malehead")
  118   
  119   REM "Engine3D_TerrainDemo"
  120   
  121   REM Revert to bank 1
  122   *FX112,0
  123   *FX113,0
  124   *FX15,0
  125   
  126 UNTIL a$="Z" OR a$="z"
  127 
  128 SYS "Engine3D_Shutdown"
  129 SYS "VFPSupport_DestroyContext", vfp%, 0
  130 END
  131 
  132 DEFPROCRenderCubeControlled
  133 faces%=12
  134 PROCRenderControlled(cube%, 50, 345, 0)
  135 ENDPROC
  136 
  137 DEFPROCRenderOBJControlled(file$)
  138 faces%=FNLoadOBJFile("<Engine3D$Dir>."+file$+"/obj")
  139 PROCRenderControlled(obj%, 50, 345, 0)
  140 ENDPROC
  141 
  142 DEFPROCRenderTerrainChoose
  143 CLS
  144 PRINT "Choose terrain size:"
  145 PRINT
  146 PRINT "0 - Debug  (5 x 5)"
  147 PRINT "1 - Tiny  (25 x 25)"
  148 PRINT "2 - Small (50 x 50)"
  149 PRINT "3 - Normal (100 x 100)"
  150 PRINT "4 - Large (150 x 150)"
  151 PRINT "5 - Crazy (250 x 250)"
  152 a$=INKEY$(1000)
  153 terrainsize%=100
  154 IF a$="0" THEN terrainsize%=5
  155 IF a$="1" THEN terrainsize%=25
  156 IF a$="2" THEN terrainsize%=50
  157 IF a$="3" THEN terrainsize%=100
  158 IF a$="4" THEN terrainsize%=150
  159 IF a$="5" THEN terrainsize%=250
  160 faces%=FNCreateTerrain(terrainsize%, terrainsize%, 1.0, 10.0, 1.0)
  161 ENDPROC
  162 
  163 DEFPROCRenderTerrainControlled
  164 PROCRenderTerrainChoose
  165 PROCRenderControlled(terrain%, 100, 345, 0)
  166 ENDPROC
  167 
  168 DEFPROCRenderFlyBy
  169 PROCRenderTerrainChoose
  170 PROCRenderControlled(terrain%, 1500, 0, 90)
  171 ENDPROC
  172 
  173 DEFPROCRenderControlled(shape%, initial_scale, initial_rx%, initial_y)
  174 LOCAL x,y,z,rx%,ry%,rz%,scale,fps,frame_index%,frames,I%,frame%,tot
  175 x=0
  176 y=initial_y
  177 z=-150
  178 rx%=initial_rx%
  179 ry%=0
  180 rz%=0
  181 scale=initial_scale
  182 fps=0.0
  183 frame_index%=0
  184 rendered%=0
  185 demo%=1
  186 PROCTransformObject(shape%, x, y, z, rx%, ry%, rz%, scale)
  187 REPEAT
  188   T%=TIME
  189   SYS "Engine3D_ClearScreen", 0
  190   PRINT "S/D - left/right, Q/A - up/down, R/F - in/out"
  191   PRINT "Y/H - rotate X, U/J - rotate Y, I/K - rotate Z"
  192   PRINT "[/] - Scale"
  193   PRINT "1-5 - Change render mode, P - Normals on/off, Space - Spin on Y axis"
  194   PRINT "0 - Disable ambient light, 9 - Low ambient light"
  195   PRINT "8 - Disable directional light, 7 - Enable directional light"
  196   PRINT "Z - back to menu"
  197   PRINT
  198   PRINT "X: ";x; " Y: ";y; " Z: ";z
  199   PRINT "RX: ";rx%; " RY: ";ry%; " RZ: ";rz%
  200   PRINT "Scale: ";scale
  201   PRINT "FPS: ";fps
  202   PRINT "Triangles: ";faces%; " (total), ";rendered%;" (rendered), ";INT(rendered%*fps);" (per second)"
  203   PRINT
  204   PROCRenderObject(shape%)
  205   rendered%=FNRenderScene
  206   SYS "Engine3D_FlipBanks"
  207   frame%=TIME-T%
  208   
  209   REM Calculate FPS
  210   frames(frame_index%)=frame%
  211   frame_index%=frame_index% + 1
  212   IF frame_index%=10 THEN frame_index%=0
  213   tot=0.0
  214   FOR I%=0 TO 9
  215     tot=tot + frames(I%)
  216   NEXT
  217   tot=tot/10
  218   fps=100.0/tot
  219   
  220   REM Position
  221   transform%=FALSE
  222   IF INKEY(-82) THEN x=x - 1:transform%=TRUE
  223   IF INKEY(-51) THEN x=x + 1:transform%=TRUE
  224   IF INKEY(-17) THEN y=y - 1:transform%=TRUE
  225   IF INKEY(-66) THEN y=y + 1:transform%=TRUE
  226   IF INKEY(-52) THEN z=z + 1:transform%=TRUE
  227   IF INKEY(-68) THEN z=z - 1:transform%=TRUE
  228   IF INKEY(-89) THEN scale=scale + 5:transform%=TRUE
  229   IF INKEY(-57) THEN scale=scale - 5:transform%=TRUE
  230   
  231   REM Rotate
  232   IF INKEY(-69) THEN rx%=rx% - 1:transform%=TRUE
  233   IF INKEY(-85) THEN rx%=rx% + 1:transform%=TRUE
  234   IF INKEY(-54) THEN ry%=ry% - 1:transform%=TRUE
  235   IF INKEY(-70) THEN ry%=ry% + 1:transform%=TRUE
  236   IF INKEY(-38) THEN rz%=rz% - 1:transform%=TRUE
  237   IF INKEY(-71) THEN rz%=rz% + 1:transform%=TRUE
  238   
  239   REM Render type
  240   IF INKEY(-40) THEN SYS "Engine3D_SetAmbientLight", 0
  241   IF INKEY(-39) THEN SYS "Engine3D_SetAmbientLight", &404040
  242   IF INKEY(-22) THEN SYS "Engine3D_SetDirectionalLight", 0, light_x%, light_y%, light_z%
  243   IF INKEY(-37) THEN SYS "Engine3D_SetDirectionalLight", &FFFFFF, light_x%, light_y%, light_z%
  244   
  245   IF INKEY(-49) THEN rendertype%=0:SYS "Engine3D_SetRenderType", rendertype%
  246   IF INKEY(-50) THEN rendertype%=1:SYS "Engine3D_SetRenderType", rendertype%
  247   IF INKEY(-18) THEN rendertype%=2:SYS "Engine3D_SetRenderType", rendertype%
  248   IF INKEY(-19) THEN rendertype%=3:SYS "Engine3D_SetRenderType", rendertype%
  249   IF INKEY(-20) THEN rendertype%=4:SYS "Engine3D_SetRenderType", rendertype%
  250   IF INKEY(-53) THEN rendertype%=5:SYS "Engine3D_SetRenderType", rendertype%
  251   
  252   REM Normals
  253   IF INKEY(-56) THEN normals%=normals% EOR 1:SYS "Engine3D_SetNormalsVisibility", normals%:z$=INKEY$(250)
  254   
  255   REM Demo
  256   IF INKEY(-99) THEN demo%=demo% EOR 1
  257   
  258   IF demo%=1 THEN ry%+=1:transform%=TRUE
  259   
  260   IF rx% < 0 THEN rx%=rx% + 360
  261   IF ry% < 0 THEN ry%=ry% + 360
  262   IF rz% < 0 THEN rz%=rz% + 360
  263   IF rx% > 359 THEN rx% = rx% - 360
  264   IF ry% > 359 THEN ry% = ry% - 360
  265   IF rz% > 359 THEN rz% = rz% - 360
  266   IF scale < 5 THEN scale = 5
  267   
  268   IF transform% THEN PROCTransformObject(shape%, x, y, z, rx%, ry%, rz%, scale)
  269 UNTIL INKEY(-98)
  270 END
  271 ENDPROC
  272 
  273 DEFPROCRenderCube
  274 faces%=12*9
  275 polygons%=0
  276 normal_z = -150
  277 FOR r% = 0 TO 359
  278   SYS "Engine3D_ClearScreen", 0
  279   PROCTransformObject(cube%, -25, -25, normal_z, r% / 5, 0, 0, (RND MOD 5) / 10 + 8)
  280   PROCRenderObject(cube%)
  281   PROCTransformObject(cube%, 0, -25, normal_z, 0, r% / 5, 0, (RND MOD 5) / 10 + 8)
  282   polygons%=polygons% + FNRenderObject(cube%)
  283   PROCTransformObject(cube%, 25, -25, normal_z, 0, 0, r% / 5, (RND MOD 5) / 10 + 8)
  284   polygons%=polygons% + FNRenderObject(cube%)
  285   PROCTransformObject(cube%, -25, 0, normal_z, 0, r%, 0, r% / 30)
  286   polygons%=polygons% + FNRenderObject(cube%)
  287   PROCTransformObject(cube%, 0, 0, normal_z + (r% / 4), r%, r%, r%, 8)
  288   polygons%=polygons% + FNRenderObject(cube%)
  289   PROCTransformObject(cube%, 25, 0, normal_z, r%, 0, 0, r% / 30)
  290   polygons%=polygons% + FNRenderObject(cube%)
  291   PROCTransformObject(cube%, -25, 25, normal_z, (r% * 5) MOD 360, 0, 0, 8)
  292   polygons%=polygons% + FNRenderObject(cube%)
  293   PROCTransformObject(cube%, 0, 25, normal_z, 0, (r% * 5) MOD 360, 0, 8)
  294   polygons%=polygons% + FNRenderObject(cube%)
  295   PROCTransformObject(cube%, 25, 25, normal_z, 0, 0, (r% * 5) MOD 360, 8)
  296   polygons%=polygons% + FNRenderObject(cube%)
  297   polygons%=FNRenderScene
  298   SYS "Engine3D_FlipBanks"
  299 NEXT
  300 z$ = INKEY$(1000)
  301 ENDPROC
  302 
  303 DEFPROCTransformObject(object%, x, y, z, rx%, ry%, rz%, scale)
  304 LOCAL x%,y%,z%,scale%
  305 x%=x * fa
  306 y%=y * fa
  307 z%=z * fa
  308 scale%=scale * fa
  309 SYS "Engine3D_TransformObject", object%, x%, y%, z%, rx%, ry%, rz%, scale%
  310 ENDPROC
  311 
  312 DEFPROCRenderObject(object%)
  313 SYS "Engine3D_RenderObject", object% TO rendered%
  314 ENDPROC
  315 
  316 DEFFNRenderScene
  317 SYS "Engine3D_RenderFrame" TO rendered%
  318 =rendered%
  319 
  320 DEFPROCCreateCube
  321 LOCAL number_of_vertices%,number_of_faces%,size%,vertex_list%,face_list%,offset%
  322 number_of_vertices%=8
  323 number_of_faces%=12
  324 
  325 REM Pass number of vertices as R0, number of faces as R1
  326 SYS "Engine3D_ObjectSize", number_of_vertices%, number_of_faces% TO size%
  327 DIM cube% size%
  328 
  329 REM Build vertices
  330 vertex_list%=cube% + shape_size%
  331 offset%=vertex_list%
  332 PROCCreateVertex(offset%, -0.5,  0.5,  0.5, FNRandomColour)
  333 PROCCreateVertex(offset%,  0.5,  0.5,  0.5, FNRandomColour)
  334 PROCCreateVertex(offset%,  0.5, -0.5,  0.5, FNRandomColour)
  335 PROCCreateVertex(offset%, -0.5, -0.5,  0.5, FNRandomColour)
  336 PROCCreateVertex(offset%, -0.5,  0.5, -0.5, FNRandomColour)
  337 PROCCreateVertex(offset%,  0.5,  0.5, -0.5, FNRandomColour)
  338 PROCCreateVertex(offset%,  0.5, -0.5, -0.5, FNRandomColour)
  339 PROCCreateVertex(offset%, -0.5, -0.5, -0.5, FNRandomColour)
  340 
  341 REM Build faces
  342 face_list%=offset%
  343 colour%=FNRandomColour
  344 PROCCreateFace(offset%, vertex_list%, 3, 1, 0, colour%): REM FRONT
  345 PROCCreateFace(offset%, vertex_list%, 3, 2, 1, colour%)
  346 colour%=FNRandomColour
  347 PROCCreateFace(offset%, vertex_list%, 5, 6, 7, colour%): REM BACK
  348 PROCCreateFace(offset%, vertex_list%, 5, 7, 4, colour%)
  349 colour%=FNRandomColour
  350 PROCCreateFace(offset%, vertex_list%, 3, 7, 6, colour%): REM TOP
  351 PROCCreateFace(offset%, vertex_list%, 3, 6, 2, colour%)
  352 colour%=FNRandomColour
  353 PROCCreateFace(offset%, vertex_list%, 4, 0, 1, colour%): REM BOTTOM
  354 PROCCreateFace(offset%, vertex_list%, 4, 1, 5, colour%)
  355 colour%=FNRandomColour
  356 PROCCreateFace(offset%, vertex_list%, 4, 7, 3, colour%): REM LEFT
  357 PROCCreateFace(offset%, vertex_list%, 4, 3, 0, colour%)
  358 colour%=FNRandomColour
  359 PROCCreateFace(offset%, vertex_list%, 1, 2, 6, colour%): REM RIGHT
  360 PROCCreateFace(offset%, vertex_list%, 1, 6, 5, colour%)
  361 
  362 REM Build shape
  363 cube%!0=number_of_vertices%
  364 cube%!4=number_of_faces%
  365 cube%!8=vertex_list%
  366 cube%!12=face_list%
  367 SYS "Engine3D_InitialiseObject", cube%
  368 ENDPROC
  369 
  370 DEFFNCreateTerrain(width%, depth%, scale_x_in, scale_y_in, scale_z_in)
  371 LOCAL number_of_vertices%,number_of_faces%,size%,vertex_list%,face_list%
  372 LOCAL z%,x%,v,offset%,i%,v1%,v2%,v3%,scale_x,scale_y,scale_z
  373 
  374 PRINT "Creating terrain, may take a little while..."
  375 
  376 scale_x = scale_x_in / width%
  377 scale_y = scale_y_in / width%
  378 scale_z = scale_z_in / depth%
  379 
  380 number_of_vertices%=(width% + 1) * (depth% + 1)
  381 number_of_faces%=width%  * depth%  * 2
  382 
  383 REM Pass number of vertices as R0, number of faces as R1
  384 SYS "Engine3D_ObjectSize", number_of_vertices%, number_of_faces% TO size%
  385 DIM terrain% size%
  386 
  387 REM Build height map first
  388 DIM height(width%, depth%)
  389 max_height=0.0
  390 FOR z% = 0 TO depth%
  391   FOR x% = 0 TO width%
  392     v = FNPerlin2D(x%, z%, 0.1, 4)
  393     height(x%, z%) = v
  394     IF v > max_height THEN max_height = v
  395   NEXT
  396 NEXT
  397 
  398 rock=0.4
  399 snow=0.75
  400 
  401 REM Build vertices
  402 vertex_list%=terrain% + shape_size%
  403 offset%=vertex_list%
  404 half_width=(width% * scale_x) / 2.0
  405 half_depth=(depth% * scale_z) / 2.0
  406 DIM height_vertex(number_of_vertices%)
  407 I%=0
  408 FOR z% = 0 TO depth%
  409   FOR x% = 0 TO width%
  410     h=height(x%, z%)
  411     colour%=&8000
  412     IF h > rock * max_height THEN colour%=&444444
  413     IF h > snow * max_height THEN colour%=&EEEEEE
  414     PROCCreateVertex(offset%, (x% * scale_x) - half_width, -h * scale_y, (z% * scale_z) - half_depth, colour%)
  415     height_vertex(I%)=h
  416     I% = I% + 1
  417   NEXT
  418 NEXT
  419 
  420 REM Build faces
  421 face_list%=offset%
  422 FOR z% = 0 TO  depth% - 1
  423   FOR x% = 0 TO width% - 1
  424     
  425     REM Triangle 1
  426     v1% = (z% * (width% + 1)) + x%
  427     v2% = v1% + 1
  428     v3% = v2% + (width% + 1) - 1
  429     h=(height_vertex(v1%) + height_vertex(v2%) + height_vertex(v3%)) / 3
  430     colour%=&8000
  431     IF h > rock * max_height THEN colour%=&444444
  432     IF h > snow * max_height THEN colour%=&EEEEEE
  433     PROCCreateFace(offset%, vertex_list%, v1%, v2%, v3%, colour%)
  434     
  435     REM Triangle 2
  436     v1% = (z% * (width% + 1)) + x% + 1
  437     v2% = v1% + (width% + 1)
  438     v3% = v2% - 1
  439     h=(height_vertex(v1%) + height_vertex(v2%) + height_vertex(v3%)) / 3
  440     colour%=&8000
  441     IF h > rock * max_height THEN colour%=&444444
  442     IF h > snow * max_height THEN colour%=&EEEEEE
  443     PROCCreateFace(offset%, vertex_list%, v1%, v2%, v3%, colour%)
  444   NEXT
  445 NEXT
  446 
  447 REM Build shape
  448 terrain%!0=number_of_vertices%
  449 terrain%!4=number_of_faces%
  450 terrain%!8=vertex_list%
  451 terrain%!12=face_list%
  452 SYS "Engine3D_InitialiseObject", terrain%
  453 =number_of_faces%
  454 
  455 DEFPROCCreateVertex(RETURN address%, x, y, z, colour%)
  456 address%!0=x * fa
  457 address%!4=y * fa
  458 address%!8=z * fa
  459 address%!12=colour%
  460 address%+=vertex_size%
  461 ENDPROC
  462 
  463 DEFPROCCreateFace(RETURN address%, vertex_list%, v1%, v2%, v3%, colour%)
  464 v1address%=vertex_list% + (v1% * vertex_size%)
  465 v2address%=vertex_list% + (v2% * vertex_size%)
  466 v3address%=vertex_list% + (v3% * vertex_size%)
  467 address%!0=v1address%
  468 address%!4=v2address%
  469 address%!8=v3address%
  470 address%!12=colour%
  471 address%+=face_size%
  472 REM  PRINT ~v1address%,~v2address%,~v3address%
  473 ENDPROC
  474 
  475 DEFPROCDrawShapes
  476 T%=TIME
  477 FOR L% = 0 TO 10
  478   SYS "Engine3D_ClearScreen", 0
  479   
  480   REM Point test
  481   FOR I% = 0 TO 500
  482     SYS "Engine3D_DrawPoint", FNRandomX, FNRandomY, FNRandomColour
  483   NEXT
  484   
  485   REM Line test
  486   FOR I% = 0 TO 5000
  487     SYS "Engine3D_DrawLine", FNRandomX, FNRandomY, FNRandomX, FNRandomY, FNRandomColour
  488   NEXT
  489   
  490   REM Triangle test
  491   FOR I% = 0 TO 500
  492     SYS "Engine3D_DrawTriangle", FNRandomX, FNRandomY, FNRandomX, FNRandomY, FNRandomX, FNRandomY, FNRandomColour
  493   NEXT
  494   
  495   REM Triangle test
  496   FOR I% = 0 TO 50
  497     SYS "Engine3D_DrawGouraudTriangle", FNRandomX, FNRandomY, FNRandomX, FNRandomY, FNRandomX, FNRandomY, FNRandomColour, FNRandomColour, FNRandomColour
  498   NEXT
  499   
  500   REM Flip back buffer
  501   SYS "Engine3D_FlipBanks"
  502 NEXT
  503 PRINT "Time: ";TIME-T%
  504 SYS "Engine3D_FlipBanks"
  505 z$ = INKEY$(1000)
  506 ENDPROC
  507 
  508 DEFFNRandomX
  509 = ABS(RND MOD swidth%)
  510 
  511 DEFFNRandomY
  512 = ABS(RND MOD sheight%)
  513 
  514 DEFFNRandomColour
  515 b%=ABS(RND MOD 256)
  516 g%=ABS(RND MOD 256)
  517 r%=ABS(RND MOD 256)
  518 = (b% << 16) + (g% << 8) + r%
  519 
  520 DEFFNRandomLightColour
  521 = (((RND MOD 64) + 192) << 16) + (((RND MOD 64) + 192) << 8) + (RND MOD 64) + 192
  522 
  523 
  524 DEFFNLoadOBJFile(filename$)
  525 LOCAL number_of_vertices%, number_of_faces%
  526 
  527 PRINT:PRINT "Loading ";filename$
  528 file%=OPENIN filename$
  529 
  530 REM First stage is to parse the file and work out how many vertices and faces we have
  531 REM so we can allocate a large enough object
  532 line$=""
  533 REPEAT
  534   n%=BGET#file%
  535   IF n%=10 THEN PROCProcessOBJLine(line$, number_of_vertices%, number_of_faces%):line$="" ELSE line$=line$+CHR$(n%)
  536 UNTIL EOF#file%
  537 PRINT "Vertices: ";number_of_vertices%;", Faces: ";number_of_faces%
  538 
  539 REM Allocate space
  540 SYS "Engine3D_ObjectSize", number_of_vertices%, number_of_faces% TO size%
  541 PRINT "Size: ";size%; " bytes"
  542 DIM obj% size%
  543 PRINT "Memory at: &";~obj%
  544 
  545 REM Normalise size to 1
  546 PRINT "Normalising size to 1.0...";
  547 line$=""
  548 PTR#file%=0
  549 min=1000000:max=-1000000
  550 REPEAT
  551   n%=BGET#file%
  552   IF n%=10 THEN PROCNormaliseSize(line$, min, max):line$="" ELSE line$=line$+CHR$(n%)
  553 UNTIL EOF#file%
  554 PRINT "adjustment is ";max
  555 
  556 REM Build vertices
  557 vertex_list%=obj% + shape_size%
  558 offset%=vertex_list%
  559 line$=""
  560 PTR#file%=0
  561 colour%=&858cc5:REM FNRandomColour
  562 REPEAT
  563   n%=BGET#file%
  564   IF n%=10 THEN PROCProcessOBJVertex(line$, offset%, max, colour%):line$="" ELSE line$=line$+CHR$(n%)
  565 UNTIL EOF#file%
  566 
  567 REM Build faces
  568 face_list%=offset%
  569 line$=""
  570 PTR#file%=0
  571 faces%=0
  572 REPEAT
  573   n%=BGET#file%
  574   IF n%=10 THEN PROCProcessOBJFace(line$, offset%, vertex_list%, faces%, colour%):line$="" ELSE line$=line$+CHR$(n%)
  575 UNTIL EOF#file%
  576 
  577 REM Build shape
  578 obj%!0=number_of_vertices%
  579 obj%!4=number_of_faces%
  580 obj%!8=vertex_list%
  581 obj%!12=face_list%
  582 SYS "Engine3D_InitialiseObject", obj%
  583 
  584 PRINT "OBJ file loaded"
  585 =number_of_faces%
  586 
  587 DEFPROCProcessOBJLine(line$, RETURN number_of_vertices%, RETURN number_of_faces%)
  588 IF LEN(line$) < 1 THEN ENDPROC
  589 CASE LEFT$(line$, 1) OF
  590   WHEN "v":number_of_vertices%+=1
  591   WHEN "f":number_of_faces%+=1
  592 ENDCASE
  593 ENDPROC
  594 
  595 DEFPROCNormaliseSize(line$, RETURN min, RETURN max)
  596 IF LEN(line$) < 1 THEN ENDPROC
  597 IF LEFT$(line$, 2) <> "v " THEN ENDPROC
  598 
  599 REM Get X
  600 p1%=INSTR(line$, " ")
  601 p2%=INSTR(line$, " ", p1% + 1)
  602 x=VAL MID$(line$,p1%,p2% - p1%)
  603 
  604 REM Get Y
  605 p1%=INSTR(line$, " ", p2%)
  606 p2%=INSTR(line$, " ", p1% + 1)
  607 y=VAL MID$(line$,p1%,p2% - p1%)
  608 
  609 REM Get Z
  610 p1%=INSTR(line$, " ", p2%)
  611 p2%=INSTR(line$, " ", p1% + 1)
  612 z=VAL MID$(line$,p1%,p2% - p1%)
  613 
  614 IF x < min THEN min = x
  615 IF y < min THEN min = y
  616 IF z < min THEN min = z
  617 
  618 IF x > max THEN max = x
  619 IF y > max THEN max = y
  620 IF z > max THEN max = z
  621 ENDPROC
  622 
  623 DEFPROCProcessOBJVertex(line$, RETURN address%, max, colour%)
  624 IF LEN(line$) < 1 THEN ENDPROC
  625 IF LEFT$(line$, 2) <> "v " THEN ENDPROC
  626 
  627 REM Get X
  628 p1%=INSTR(line$, " ")
  629 p2%=INSTR(line$, " ", p1% + 1)
  630 x=VAL MID$(line$,p1%,p2% - p1%) / max
  631 
  632 REM Get Y
  633 p1%=INSTR(line$, " ", p2%)
  634 p2%=INSTR(line$, " ", p1% + 1)
  635 y=VAL MID$(line$,p1%,p2% - p1%) / max
  636 
  637 REM Get Z
  638 p1%=INSTR(line$, " ", p2%)
  639 p2%=INSTR(line$, " ", p1% + 1)
  640 z=VAL MID$(line$,p1%,p2% - p1%) / max
  641 
  642 PROCCreateVertex(address%, x, -y, -z, colour%)
  643 ENDPROC
  644 
  645 DEFPROCProcessOBJFace(line$, RETURN address%, vertex_list%, RETURN faces%, colour%)
  646 IF LEN(line$) < 1 THEN ENDPROC
  647 IF LEFT$(line$, 2) <> "f " THEN ENDPROC
  648 
  649 REM Get face 1
  650 p1%=INSTR(line$, " ")
  651 p2%=INSTR(line$, " ", p1% + 1)
  652 v1%=VAL MID$(line$,p1%,p2% - p1%)-1
  653 
  654 REM Get face 2
  655 p1%=INSTR(line$, " ", p2%)
  656 p2%=INSTR(line$, " ", p1% + 1)
  657 v2%=VAL MID$(line$,p1%,p2% - p1%)-1
  658 
  659 REM Get face 3
  660 p1%=INSTR(line$, " ", p2%)
  661 p2%=INSTR(line$, " ", p1% + 1)
  662 v3%=VAL MID$(line$,p1%,p2% - p1%)-1
  663 
  664 PROCCreateFace(address%, vertex_list%, v1%, v2%, v3%, colour%)
  665 faces%+=1
  666 ENDPROC
  667 
  668 DEFPROCInitPerlin
  669 DIM hash%(256)
  670 FOR I%=0 TO 255
  671   READ v%
  672   hash%(I%) = v%
  673 NEXT
  674 seed%=0
  675 ENDPROC
  676 
  677 DEFFNNoise2(x%, y%)
  678 LOCAL tmp%
  679 tmp%=hash%((y% + seed%) MOD 256)
  680 =hash%((tmp% + x%) MOD 256)
  681 
  682 DEFFNLinInter(x, y, s)
  683 =x + s * (y - x)
  684 
  685 DEFFNSmoothInter(x, y, s)
  686 =FNLinInter(x, y, s * s * (3 - 2*s))
  687 
  688 DEFFNNoise2D(x, y)
  689 LOCAL x_int%,y_int%,x_frac,y_frac,s%,t%,u%,v%,low,high
  690 x_int% = x
  691 y_int% = y
  692 x_frac = x - x_int%
  693 y_frac = y - y_int%
  694 s%=FNNoise2(x_int%,     y_int%)
  695 t%=FNNoise2(x_int% + 1, y_int%)
  696 u%=FNNoise2(x_int%,     y_int% + 1)
  697 v%=FNNoise2(x_int% + 1, y_int% + 1)
  698 low=FNSmoothInter(s%, t%, x_frac)
  699 high=FNSmoothInter(u%, v%, x_frac)
  700 =FNSmoothInter(low, high, y_frac)
  701 
  702 DEFFNPerlin2D(x, y, freq, depth%)
  703 LOCAL xa,ya,amp,fin,div,I%
  704 xa=x * freq
  705 ya=y * freq
  706 amp=1.0
  707 fin=0
  708 div=0.0
  709 FOR I%=0 TO depth% - 1
  710   div = div + (256 * amp)
  711   fin = fin + (FNNoise2D(xa, ya) * amp)
  712   amp = amp / 2
  713   xa = xa * 2
  714   ya = ya * 2
  715 NEXT
  716 =fin / div
  717 
  718 DATA 208,34,231,213,32,248,233,56,161,78,24,140,71,48,140,254,245,255,247,247,40
  719 DATA 185,248,251,245,28,124,204,204,76,36,1,107,28,234,163,202,224,245,128,167,204
  720 DATA 9,92,217,54,239,174,173,102,193,189,190,121,100,108,167,44,43,77,180,204,8,81
  721 DATA 70,223,11,38,24,254,210,210,177,32,81,195,243,125,8,169,112,32,97,53,195,13
  722 DATA 203,9,47,104,125,117,114,124,165,203,181,235,193,206,70,180,174,0,167,181,41
  723 DATA 164,30,116,127,198,245,146,87,224,149,206,57,4,192,210,65,210,129,240,178,105
  724 DATA 228,108,245,148,140,40,35,195,38,58,65,207,215,253,65,85,208,76,62,3,237,55,89
  725 DATA 232,50,217,64,244,157,199,121,252,90,17,212,203,149,152,140,187,234,177,73,174
  726 DATA 193,100,192,143,97,53,145,135,19,103,13,90,135,151,199,91,239,247,33,39,145
  727 DATA 101,120,99,3,186,86,99,41,237,203,111,79,220,135,158,42,30,154,120,67,87,167
  728 DATA 135,176,183,191,253,115,184,21,233,58,129,233,142,39,128,211,118,137,139,255
  729 DATA 114,20,218,113,154,27,127,246,250,1,8,198,250,209,92,222,173,21,88,102,219
