   10 REM > ClockSp 3.00 (RTR)
   20 REM Calculate CPU clock speed
   21 REM Altered for DARIC 
   30 PRINT"BBC BASIC CPU Timing Program"
   40 A%=0:T%=TIME:REPEAT A%=A%+1:UNTIL TIME>T%+50
   50 Z=0:Z%=0:B=1.0:B%=1:F=1/10:C=100:C%=100:D=510:D%=510:F%=3
   60 REPEAT:C=C*10:C%=C%*10:D=D*10:D%=D%*10:F%=F%*10:F=F*10:A%=A% DIV 10:UNTIL A%<50
   65 Z=Z+0.5:C=C+0.5:D=D+0.5
   70 PRINT"Really real REPEAT loop ";:T%=TIME:A=Z:REPEAT A=A+B:UNTIL A>C:T%=TIME-T%:PROCp(F*41000/T%)
   80 PRINT"Integer REPEAT loop     ";:T%=TIME:A%=Z%:REPEAT A%=A%+B%:UNTIL A%>C%:T%=TIME-T%:PROCp(F*23900/T%)
   90 PRINT"Really real FOR loop    ";:T%=TIME:FOR A=Z TO D STEP B:NEXT A:T%=TIME-T%:PROCp(F*51200/T%)
  100 PRINT"Integer FOR loop        ";:T%=TIME:FOR A%=Z% TO D% STEP B%:NEXT A%:T%=TIME-T%:PROCp(F*17800/T%)
  110 PRINT"Trig/Log test           ";:IF COS(0)=0 THEN PRINT SPC(4)|"<none>"
  120 IF COS(0)<>0
  125 A=1:T%=TIME:FOR J%=1 TO F%:A=TAN(ATN(EXP(LN(SQR(A*A)))))+1:NEXT J%:T%=TIME-T%:PROCp(F*68800/T%)
  127 ENDIF
  150 PRINT"String manipulation     ";
  160 T%=TIME:A$="STRINGMANIPULATIONTEST":FOR A%=0 TO F%*4:A$=RIGHT$(MID$(A$,LEN(A$)/2,LEN(A$)/4+1)+RIGHT$(A$,LEN(A$)/4)+MID$(A$,LEN(A$)/2,2)+LEFT$(A$,LEN(A$)/4)+MID$(A$,LEN(A$)/4,LEN(A$)/4+1),LEN(A$)):NEXT A%:T%=TIME-T%:PROCp(F*72750/T%)
  170 PRINT"Procedure call          ";:T%=TIME:FOR A%=Z% TO D%:PROCtest:NEXT A%:T%=TIME-T%:PROCp(F*80500/T%)
  180 PRINT"GOSUB call              ";:T%=TIME:FOR A%=Z% TO D%:GOSUB 300:NEXT A%:T%=TIME-T%:PROCp(F*90000/T%)
  190 PRINT"Combined Average        ";:PROCp(FNspeed%)
  200 PRINT'"Compared with a 2.00MHz BBC B"
  210 END
  220 :
  280 DEF PROCtest(a%,b%):ENDPROC
  290 :
  300 RETURN
  310 :
  320 DEF PROCp(T%):PRINT RIGHT$("     "+STR$(T% DIV 100),6)|"."|RIGHT$("0"+STR$(T%),2)|"MHz"|CHR$(8):ENDPROC
  330 :
  340 REM This is calibrated against a
  350 REM BBC model B with no second
  360 REM processor, running BASIC II
  370 REM and with almost all interupts
  380 REM turned off using:
  390 REM ?&FE4E=&3F
  400 REM This gives 2.00MHz.
  410 :
  420 REM Savage Floating Point test and
  430 REM Ackermann Recursion test added
  440 REM -Mar-1993, based on A&B Jan 90.
  450 :
  460 REM Version 2.00 recalibrates
  470 REM itself for faster systems
  480 REM 15-Mar-2002
  490 :
  500 DEF FNspeed%()
  510 LOCAL A%=0:T%=TIME:REPEAT A%=A%+1:UNTIL TIME>T%+50
  520 LOCAL Z=0,Z%=0,B=1.0,B%=1,F=1/10,C=100,C%=100,D=510,D%=510,F%=3
  525 Z=Z+0.5:C=C+0.5:D=D+0.5
  530 REPEAT:C=C*10:C%=C%*10:D=D*10:D%=D%*10:F%=F%*10:F=F*10:A%=A% DIV 10:UNTIL A%<50
  540 T%=TIME:LOCAL A=Z:REPEAT A=A+B:UNTIL A>C:T%=TIME-T%:LOCAL U%=F*41000/T%
  550 T%=TIME:A%=Z%:REPEAT A%=A%+B%:UNTIL A%>C%:T%=TIME-T%:LOCAL V%=F*23900/T%
  560 T%=TIME:FOR A=Z TO D STEP B:NEXT A:T%=TIME-T%:LOCAL W%=F*51200/T%
  570 T%=TIME:FOR A%=Z% TO D% STEP B%:NEXT A%:T%=TIME-T%:LOCAL X%=F*17800/T%
  580 Y%=X%:IF COS(0)<>0
  581 A=1:T%=TIME:FOR J%=1 TO F%:A=TAN(ATN(EXP(LN(SQR(A*A)))))+1:NEXT J%:T%=TIME-T%:LOCAL Y%=F*68800/T%
  582 ENDIF
  590 T%=TIME:A$="STRINGMANIPULATIONTEST":FOR A%=0 TO F%*4:A$=RIGHT$(MID$(A$,LEN(A$)/2,LEN(A$)/4+1)+RIGHT$(A$,LEN(A$)/4)+MID$(A$,LEN(A$)/2,2)+LEFT$(A$,LEN(A$)/4)+MID$(A$,LEN(A$)/4,LEN(A$)/4+1),LEN(A$)):NEXT A%:T%=TIME-T%:LOCAL S%=F*72750/T%
  600 T%=TIME:FOR A%=Z% TO D%:PROCtest:NEXT A%:T%=TIME-T%:LOCAL R%=F*80500/T%
  610 T%=TIME:FOR A%=Z% TO D%:GOSUB 300:NEXT A%:T%=TIME-T%:LOCAL Q%=F*90000/T%
  620 RETURN INT((Q%+R%+S%+U%+V%+W%+X%+Y%)/(78/10))
  630 REM Returns CPU speed*100
  640 ENDFN
