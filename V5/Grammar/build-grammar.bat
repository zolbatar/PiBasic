@CALL antlr4 -Werror -Dlanguage=Cpp -no-listener -visitor -o C:\Users\d_dud\source\repos\PiBasic\V5\src\parser DARIC.g4
REM antlr4 -no-listener -visitor DARIC.g4
@del *.class
@del *.java
ECHO Creating JAVA files
@CALL antlr4 DARIC.g4
ECHO Compiling
@javac *.java
ECHO Testing parser
@REM grun DARIC prog -tree ..\a.daric
grun DARIC prog -diagnostics ..\a.daric