@CALL antlr4 -Werror -Dlanguage=Cpp -no-listener -visitor -o C:\Users\d_dud\source\repos\PiBasic\V5\src\parser DARICOO.g4
@del *.class
@del *.java
ECHO Creating JAVA files
@CALL antlr4 -no-listener -visitor DARICOO.g4
ECHO Compiling
@javac *.java
ECHO Testing parser
@CALL grun DARICOO prog -SLL -diagnostics ..\test.daric
@CALL grun DARICOO prog -SLL -tree ..\test.daric
