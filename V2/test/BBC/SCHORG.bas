    1 ON ERROR PROCclose:REPORT:PRINT" at line ";ERL:END
    2 SYS "Wimp_Initialise",200,&4B534154,"Scheduler" TO ,task%
    3 PROCinit
    4 PROCcreate_icon
    5 PROCglobals
    6 REM PROCassembler
    7 PROCload
    8 T%=TIME
    9 REM PROCgreedy
   10 REM TT=(TIME-T%)/100
   11 REM PRINT "Complete:";total;" in ";TT;" seconds"
   12 REM PRINT "Will take:";TT*100/60;" minutes"
   13 REPEAT
   14   PROCpoll
   15 UNTIL quit%
   16 PROCclose
   17 END
   18 
   19 DEFPROCadd_to_list
   20 IF I%=3 THEN PROCadd_call
   21 IF I%=2 THEN PROCadd_resource
   22 I%=0
   23 line$(0)="":line$(1)="":line$(2)="":line$(3)=""
   24 ENDPROC
   25 
   26 DEFPROCglobals
   27 earthRadius=6367450.0
   28 convertRad=PI/180.0
   29 convertDeg=180.0/PI
   30 secondsPerMetre=0.0559234073
   31 ENDPROC
   32 
   33 DEFPROCadd_call
   34 GCOL 0,1
   35 callId$(numCalls%)=line$(0)
   36 callX(numCalls%)=VAL(line$(1))
   37 callY(numCalls%)=VAL(line$(2))
   38 PLOT 69,numCalls%*2,1023
   39 numCalls%=numCalls%+1
   40 ENDPROC
   41 
   42 DEFPROCload
   43 T%=TIME
   44 numCalls%=0
   45 DIM callId$(500):DIM callX(500):DIM callY(500)
   46 numResources%=0
   47 DIM resourceId$(10):DIM resourceX(10):DIM resourceY(10)
   48 channel=OPENIN "DATA"
   49 DIM line$(4):I%=0
   50 REPEAT
   51   PROCpoll
   52   a=BGET#channel
   53   IF a=ASC(",") THEN I%=I%+1 ELSE line$(I%)=line$(I%)+CHR$(a):IF a=10 THEN PROCadd_to_list
   54 UNTIL EOF#channel
   55 CLOSE#channel
   56 importTime=(TIME-T%)/100
   57 ENDPROC
   58 
   59 DEFPROCadd_resource
   60 GCOL 0,2
   61 resourceId$(numResources%)=line$(0)
   62 resourceX(numResources%)=VAL(line$(1))
   63 resourceY(numResources%)=VAL(line$(2))
   64 PLOT 69,numResources%*4,1019
   65 numResources%=numResources%+1
   66 ENDPROC
   67 
   68 DEFPROCgreedy
   69 GCOL 0,3
   70 total=0.0
   71 FOR I%=0 TO 9
   72   FOR C%=0 TO 49
   73     PROCpoll
   74     PLOT 69,C%*4,1014-(I%*4)
   75     O=1000000.0
   76     L%=-1
   77     FOR A%=0 TO 499
   78       IF callId$(A%)<>"" THEN D=FNcalc_distance(resourceX(I%),resourceY(I%),callX(A%),callY(A%)):IF D < O THEN O=D:L%=A%
   79     NEXT A%
   80     callId$(L%)=""
   81     total=total+O
   82   NEXT
   83 NEXT
   84 ENDPROC
   85 
   86 DEFFNcalc_distance(la1,lo1,la2,lo2)
   87 startLat=la1 * convertRad
   88 startLon=lo1 * convertRad
   89 endLat=la2 * convertRad
   90 endLon=lo2 * convertRad
   91 lon=endLon - startLon
   92 lat=endLat - startLat
   93 sinHLat=SIN(lat * 0.5)
   94 sinHLon=SIN(lon * 0.5)
   95 a=(sinHLat * sinHLat) + (COS(startLat) * COS(endLat)) * (sinHLon * sinHLon)
   96 c=FNatan2(SQR(a), SQR(1.0-a))
   97 d=earthRadius * (c+c)
   98 =d
   99 
  100 DEF FNatan2(y,x) : ON ERROR LOCAL = SGN(y) * PI/2
  101 IF x>0 THEN = ATN(y/x) ELSE IF y>0 THEN = ATN(y/x)+PI ELSE = ATN(y/x)-PI
  102 
  103 DEFPROCassembler
  104 DIM start 100
  105 FOR loop%=0 TO 2 STEP 2
  106   P%=start
  107   [
  108   REM MOV R0,#ASC("^")
  109   SWI "OS_WriteC"
  110   MOV PC,R14
  111   ]
  112 NEXT
  113 PRINT "At &";~start;" size is:";P%-start
  114 A%=ASC("`")
  115 REM CALL start
  116 ENDPROC
  117 
  118 DEFPROCinit
  119 DIM b% 1023,menspc% 1023,ws% 1023
  120 wsend%=ws%+1024
  121 quit%=FALSE
  122 PROCload_templates
  123 REM PROCmain_menu
  124 ENDPROC
  125 
  126 DEFPROCcreate_icon
  127 !b%=-1:b%!4=0:b%!8=0:b%!12=68:b%!16=68:b%!20=&3002
  128 $(b%+24)="!Scheduler":SYS "Wimp_CreateIcon",,b% TO i%
  129 ENDPROC
  130 
  131 DEFPROCmain_menu
  132 REM creates main menu data block
  133 start%=menspc%
  134 $(start%)="Test"
  135 start%?12=7:REM title foreground colour
  136 start%?13=2:REM title background colour
  137 start%?14=7:REM work area foreground colour
  138 start%?15=0:REM work area background colour
  139 start%!16=96:REM width of menu
  140 start%!20=44:REM height of menu items
  141 start%!24=0:REM gap between items
  142 menspc%+=28
  143 REM data for "Info" item
  144 !menspc%=0:REM menu flags
  145 menspc%!4=info%:REM submenu pointer
  146 menspc%!8=&07000021:REM menu icon flags
  147 $(menspc%+12)="Info":REM menu icon data
  148 menspc%+=24
  149 REM data for "Quit" item
  150 !menspc%=&80:REM menu flags - bit 7 set to indicate last item
  151 menspc%!4=-1:REM submenu pointer
  152 menspc%!8=&07000021:REM menu icon flags
  153 $(menspc%+12)="Quit":REM menu icon data
  154 menspc%+=24
  155 mainmenu%=start%
  156 ENDPROC
  157 
  158 DEFPROCpoll
  159 SYS "Wimp_Poll",,b% TO r%
  160 CASE r% OF
  161   WHEN 2:SYS "Wimp_OpenWindow",,b%
  162   WHEN 3:SYS "Wimp_CloseWindow",,b%
  163   WHEN 6:PROCmouse_click
  164   WHEN 9:PROCmenu_click
  165   WHEN 17,18:PROCreceive
  166 ENDCASE
  167 ENDPROC
  168 
  169 DEFPROCreceive
  170 CASE b%!16 OF
  171   WHEN 0:quit%=TRUE
  172 ENDCASE
  173 ENDPROC
  174 
  175 DEFPROCclose
  176 SYS "Wimp_CloseDown",task%,&4B534154
  177 ENDPROC
  178 
  179 DEFPROCmouse_click
  180 CASE b%!12 OF
  181   WHEN -2:CASE b%!8 OF
  182       WHEN 1:quit%=TRUE
  183       WHEN 2:PROCshow_menu(info%, !b%-64,96+2*44)
  184       WHEN 4:!b%=main%:SYS "Wimp_GetWindowState",,b%: SYS "Wimp_OpenWindow",,b%
  185     ENDCASE
  186 ENDCASE
  187 ENDPROC
  188 
  189 DEFPROCmenu_click
  190 LOCAL c%,adj%
  191 c%=b%+900
  192 SYS "Wimp_GetPointerInfo",,c%
  193 adj%=(c%!8 AND 1)
  194 CASE !b% OF
  195   WHEN 0:VDU 7
  196   WHEN 1:quit%=TRUE
  197 ENDCASE
  198 IF adj% PROCshow_menu(topmenu%,topx%,topy%)
  199 ENDPROC
  200 
  201 DEFPROCload_templates
  202 SYS "Wimp_OpenTemplate",,"<Scheduler$Dir>.Templates"
  203 SYS "Wimp_LoadTemplate",,b%,ws%,wsend%,-1,"Main",0 TO ,,ws%
  204 ind%=!(b%+88+32*1+20)
  205 SYS "Wimp_CreateWindow",,b% TO main%
  206 SYS "Wimp_LoadTemplate",,b%,ws%,wsend%,-1,"Info",0 TO ,,ws%
  207 SYS "Wimp_CreateWindow",,b% TO info%
  208 SYS "Wimp_CloseTemplate"
  209 ENDPROC
  210 
  211 DEFPROCshow_menu(menu%,x%,y%)
  212 topmenu%=menu%:topx%=x%:top%=y%
  213 SYS "Wimp_CreateMenu",,menu%,x%,y%
  214 ENDPROC
