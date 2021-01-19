DEFPROCadd_to_list
IF I%=3 THEN PROCadd_call
IF I%=2 THEN PROCadd_resource
I%=0
line$(0)="":line$(1)="":line$(2)="":line$(3)=""
ENDPROC

DEFPROCglobals
    earthRadius=6367450.0
    convertRad=PI/180.0
    convertDeg=180.0/PI
    secondsPerMetre=0.0559234073
ENDPROC

DEFPROCadd_call
    GCOL 0,1
    callId$(numCalls%)=line$(0)
    callX(numCalls%)=VAL(line$(1))
    callY(numCalls%)=VAL(line$(2))
    PLOT 69,numCalls%*2,1023
    numCalls%=numCalls%+1
ENDPROC

DEFPROCload
    T%=TIME
    numCalls%=0
    DIM callId$(500):DIM callX(500):DIM callY(500)
    numResources%=0
    DIM resourceId$(10):DIM resourceX(10):DIM resourceY(10)
    channel=OPENIN "DATA"
    DIM line$(4):I%=0
    REPEAT
        PROCpoll
        a=BGET#channel
        IF a=ASC(",") THEN I%=I%+1 ELSE line$(I%)=line$(I%)+CHR$(a):IF a=10 THEN PROCadd_to_list
    UNTIL EOF#channel
    CLOSE#channel
    importTime=(TIME-T%)/100 
ENDPROC

DEFPROCadd_resource
    GCOL 0,2
    resourceId$(numResources%)=line$(0)
    resourceX(numResources%)=VAL(line$(1))
    resourceY(numResources%)=VAL(line$(2))
    PLOT 69,numResources%*4,1019
    numResources%=numResources%+1
ENDPROC

DEFPROCgreedy
GCOL 0,3
total=0.0
FOR I%=0 TO 9
    FOR C%=0 TO 49
        PROCpoll
        PLOT 69,C%*4,1014-(I%*4)
        O=1000000.0
        L%=-1
        FOR A%=0 TO 499
            IF callId$(A%)<>"" THEN D=FNcalc_distance(resourceX(I%),resourceY(I%),callX(A%),callY(A%)):IF D < O THEN O=D:L%=A%
        NEXT A%
        callId$(L%)=""
       total=total+O
    NEXT
NEXT
ENDPROC

DEFFNcalc_distance(la1,lo1,la2,lo2)
    startLat=la1 * convertRad
    startLon=lo1 * convertRad
    endLat=la2 * convertRad
    endLon=lo2 * convertRad
    lon=endLon - startLon
    lat=endLat - startLat
    sinHLat=SIN(lat * 0.5)
    sinHLon=SIN(lon * 0.5)
    a=(sinHLat * sinHLat) + (COS(startLat) * COS(endLat)) * (sinHLon * sinHLon)
    c=FNatan2(SQR(a), SQR(1.0-a))
    d=earthRadius * (c+c)
    =d

DEF FNatan2(y,x) : ON ERROR LOCAL = SGN(y) * PI/2
    IF x>0 THEN = ATN(y/x) ELSE IF y>0 THEN = ATN(y/x)+PI ELSE = ATN(y/x)-PI


PROCglobals
PROCload
T%=TIME
PROCgreedy
TT=(TIME-T%)/100
PRINT "Complete:";total;" in ";TT;" seconds"
PRINT "Will take:";TT*100/60;" minutes"
