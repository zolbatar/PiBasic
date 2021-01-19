DEFFNLoadOBJFile(filename$)
    LOCAL number_of_vertices%=0, number_of_faces%=0

    PRINT:PRINT "Loading ";filename$
    file%=OPENIN filename$

    REM First stage is to parse the file and work out how many vertices and faces we have
    REM so we can allocate a large enough object
    line$=""
    REPEAT
        n%=BGET#file%
        IF n%=10 
            PROCProcessOBJLine(line$, number_of_vertices%, number_of_faces%)
            line$=""
        ELSE 
            line$=line$+CHR$(n%)
        ENDIF
    UNTIL EOF#file%
    PRINT "Vertices: ";number_of_vertices%;", Faces: ";number_of_faces%

    RETURN number_of_faces%
ENDFN

DEFPROCProcessOBJLine(line$, RETURN number_of_vertices%, RETURN number_of_faces%)
    IF LEN(line$) < 1 THEN RETURN
    CASE LEFT$(line$, 1) OF
        WHEN "v":number_of_vertices%=number_of_vertices%+1
        WHEN "f":number_of_faces%=number_of_faces%+1
    ENDCASE
ENDPROC
