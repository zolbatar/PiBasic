 
 � > ClockSp 3.00 (RTR)   � Calculate CPU clock speed $ �"BBC BASIC CPU Timing Program" (" A%=0:T%=�:� A%=A%+1:� �>T%+50 2> Z=0:Z%=0:B=1.0:B%=1:F=1/10:C=100:C%=100:D=510:D%=510:F%=3 <G �:C=C*10:C%=C%*10:D=D*10:D%=D%*10:F%=F%*10:F=F*10:A%=A%�10:� A%<50 A Z=Z+0.5:C=C+0.5:D=D+0.5 FO �"Really real REPEAT loop ";:T%=�:A=Z:� A=A+B:� A>C:T%=�-T%:�p(F*41000/T%) PV �"Integer REPEAT loop     ";:T%=�:A%=Z%:� A%=A%+B%:� A%>C%:T%=�-T%:�p(F*23900/T%) ZM �"Really real FOR loop    ";:T%=�:� A=Z � D � B:�:T%=�-T%:�p(F*51200/T%) dQ �"Integer FOR loop        ";:T%=�:� A%=Z% � D% � B%:�:T%=�-T%:�p(F*17800/T%) n5 �"Trig/Log test           ";:� �0=0:� �4"<none>" xQ � �0<>0:A=1:T%=�:� J%=1 � F%:A=�(�(�(�(�(A*A)))))+1:�:T%=�-T%:�p(F*68800/T%) �# � PRINT"Ackermann Recursion "; �S � M%=3:T%=TIME:FORN%=1 TO 3:Z%=FNAck(M%,N%):NEXT:T%=TIME-T%:PROCp(F*255400/T%) �! �"String manipulation     "; �� T%=�:A$="STRINGMANIPULATIONTEST":� A%=0 �F%*4:A$=��A$,� A$/2,� A$/4+1)+�A$,� A$/4)+�A$,� A$/2,2)+�A$,� A$/4)+�A$,� A$/4,� A$/4+1),� A$):�:T%=�-T%:�p(F*72750/T%) �R �"Procedure call          ";:T%=�:� A%=Z% � D%:�test:�:T%=�-T%:�p(F*80500/T%) �S �"GOSUB call              ";:T%=�:� A%=Z% � D%:� �TlA:�:T%=�-T%:�p(F*90000/T%) �- �"Combined Average        ";:�p(�speed%) �& �'"Compared with a 2.00MHz BBC B" � � � : � � �Ack(M%,N%) � � M%=0:=N%+1 � � N%=0:=�Ack(M%-1,1) =�Ack(M%-1,�Ack(M%,N%-1)) : � �test:�" :, �6 :@B � �p(T%):� �"     "+�(T%�100),6);".";�"0"+�(T%),2);"MHz";�8:�J :T# � This is calibrated against a^! � BBC model B with no secondh" � processor, running BASIC IIr$ � and with almost all interupts| � turned off using:� � ?&FE4E=&3F� � This gives 2.00MHz.� :�% � Savage Floating Point test and�% � Ackermann Recursion test added�& � -Mar-1993, based on A&B Jan 90.� :�  � Version 2.00 recalibrates�  � itself for faster systems� � 15-Mar-2002� :�F � �speed%:� A,B,C,D,F,Z,A%,B%,C%,D%,F%,Q%,R%,S%,U%,V%,W%,X%,Y%,Z%�" A%=0:T%=�:� A%=A%+1:� �>T%+50> Z=0:Z%=0:B=1.0:B%=1:F=1/10:C=100:C%=100:D=510:D%=510:F%=3 Z=Z+0.5:C=C+0.5:D=D+0.5G �:C=C*10:C%=C%*10:D=D*10:D%=D%*10:F%=F%*10:F=F*10:A%=A%�10:� A%<501 T%=�:A=Z:� A=A+B:� A>C:T%=�-T%:U%=F*41000/T%&8 T%=�:A%=Z%:� A%=A%+B%:� A%>C%:T%=�-T%:V%=F*23900/T%0/ T%=�:� A=Z � D � B:�:T%=�-T%:W%=F*51200/T%:3 T%=�:� A%=Z% � D% � B%:�:T%=�-T%:X%=F*17800/T%DV Y%=X%:� �0<>0:A=1:T%=�:� J%=1 � F%:A=�(�(�(�(�(A*A)))))+1:�:T%=�-T%:Y%=F*68800/T%N� T%=�:A$="STRINGMANIPULATIONTEST":� A%=0 �F%*4:A$=��A$,� A$/2,� A$/4+1)+�A$,� A$/4)+�A$,� A$/2,2)+�A$,� A$/4)+�A$,� A$/4,� A$/4+1),� A$):�:T%=�-T%:S%=F*72750/T%X4 T%=�:� A%=Z% � D%:�test:�:T%=�-T%:R%=F*80500/T%b5 T%=�:� A%=Z% � D%:� �TlA:�:T%=�-T%:Q%=F*90000/T%l* =�((Q%+R%+S%+U%+V%+W%+X%+Y%)/(78/10))v � Returns CPU speed*100�