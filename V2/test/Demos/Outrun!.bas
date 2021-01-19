INSTALL "C:/Users/d_dud/source/repos/PiBasic/V2/test/Demos/Terrain.bas"
W%=1500:H%=500

DEFPROCSky()
    level%=0
    sky%=&002040
    FOR y%=0 TO (H% / 2) STEP 4
        COLOUR sky% + (level% << 16) + (level% << 8) + level%
        LINE 0, y%, W%-1, y%
        LINE 0, y%+1, W%-1, y%+1
        LINE 0, y%+2, W%-1, y%+2
        LINE 0, y%+3, W%-1, y%+3
        level%=level%+1
    NEXT
ENDPROC

DEFPROCSun()
    radius = H% / 2
    yellow%=&FF0000
    orange%=&CC6600
    COLOUR orange%
    FOR angle=180 TO 270 Step 3
        x=radius * COS(RAD(angle))
        y=radius * SIN(RAD(angle))
        LINE (W% / 2) - x, y + (H% * 0.7), (W% / 2) + x, y + (H% * 0.7)
    NEXT
ENDPROC

DEFPROCGround()
    level%=0
    desert%=&364E6F
    FOR y%=H%-1 TO (H% / 2) STEP -4
        COLOUR desert% + (level% << 16) + (level% << 8) + level%
        LINE 0, y%, W%-1, y%
        LINE 0, y%+1, W%-1, y%+1
        LINE 0, y%+2, W%-1, y%+2
        LINE 0, y%+3, W%-1, y%+3
        level%=level%+1
    NEXT
ENDPROC

PROCInitPerlin()
terrainsize%=100
PROCCreateTerrain(terrainsize%, terrainsize%, 1.0, 12.0, 1.0, &202060, &444444, &EEEEEE, 10.0, 10.0, 1)
terrain1%=OBJECT terrain%, 0, 30, -250, 270, 0, 0, 500, EDGEDWIREFRAME
GRAPHICS W%, H%, FALSE
COLOUR &080808
CLS
PROCSky()
PROCSun()
COLOUR &4D4DFF
ROTATE terrain1%, 355, 0, 0
RENDER
FLIP
INKEY(10000)