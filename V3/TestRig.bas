LETA=-2--2: REM UNARY
GRAPHICS 800,600,FALSE
COLOURBG 0,0,40
CLS

T% = Time
Print "DARIC Test Rig"
Print "--------------"
Print

Print "::Arrays::"
Dim A%(6)
A%(0) = 10
A%(5) = 15
Print "Index 0            = ";:If A%(0) = 10 Then Print "PASS" Else PROCFail()
Print "Index 5            = ";:If A%(5) = 15 Then Print "PASS" Else PROCFail()
Dim ta1$(2)
ta1$(0) = "Test"
ta1$(1) = ta1$(0)
Print "String arrays      = ";:If ta1$(1) = "Test" Then Print "PASS" Else PROCFail()
Dim ta2$(2, 3)
ta2$(0, 1) = "Test"
ta2$(1, 2) = ta2$(0, 1)
Print "2D arrays          = ";:If ta2$(1, 2) = "Test" Then Print "PASS" Else PROCFail()
Print

Print "::BBC Basic Compatibility::"
PRINT "LET                = ";:LETA=1:IFA=1PRINT"PASS"ELSEPROCFail()
Print

Print "::Boolean::"
Print "Or                 = ";:If (&F0 Or &F0 = &F0) And (&F0 Or &0F = &FF) Then Print "PASS" Else PROCFail()
Print "Eor                = ";:If (1 Eor 1 = 0) And (1 Eor 0 = 1) And (0 Eor 0 = 0) Then Print "PASS" Else PROCFail()
Print "And                = ";:If ((&F0 And &F0) = &F0) And ((&F0 And &0F) = &0) Then Print "PASS" Else PROCFail()
Print "Not                = ";:If Not 1 = 0 Then Print "PASS" Else PROCFail()
Print "True               = ";:If True = 1 Then Print "PASS" Else PROCFail()
Print "False              = ";:If False = 0 Then Print "PASS" Else PROCFail()
Print

Print "::Comparison::"
Print "Int =              = ";:If 5 = 5 Then Print "PASS" Else PROCFail()
Print "Int <>             = ";:If 5 <> 6 Then Print "PASS" Else PROCFail()
Print "Int <              = ";:If 5 < 10 Then Print "PASS" Else PROCFail()
Print "Int <= (<)         = ";:If 4 <= 5 Then Print "PASS" Else PROCFail()
Print "Int <= (=)         = ";:If 5 <= 5 Then Print "PASS" Else PROCFail()
Print "Int >              = ";:If 10 > 5 Then Print "PASS" Else PROCFail()
Print "Int >= (>)         = ";:If 10 >= 5 Then Print "PASS" Else PROCFail()
Print "Int >= (>=)        = ";:If 5 >= 5 Then Print "PASS" Else PROCFail()
Print "Float =            = ";:If 5.0 = 5.0 Then Print "PASS" Else PROCFail()
Print "Float <>           = ";:If 5.0 <> 6.0 Then Print "PASS" Else PROCFail()
Print "Float <            = ";:If 5.0 < 10.0 Then Print "PASS" Else PROCFail()
Print "Float <= (<)       = ";:If 4.0 <= 5.0 Then Print "PASS" Else PROCFail()
Print "Float <= (=)       = ";:If 5.0 <= 5.0 Then Print "PASS" Else PROCFail()
Print "Float >            = ";:If 10.0 > 5.0 Then Print "PASS" Else PROCFail()
Print "Float >= (>)       = ";:If 10.0 >= 5.0 Then Print "PASS" Else PROCFail()
Print "Float >= (>=)      = ";:If 5.0 >= 5.0 Then Print "PASS" Else PROCFail()
Print "String =           = ";:If "Fred" = "Fred" Then Print "PASS" Else PROCFail()
Print "String <>          = ";:If "Fred" <> "fred" Then Print "PASS" Else PROCFail()
Print "String <           = ";:If "Fred" < "fred" Then Print "PASS" Else PROCFail()
Print "String <= (<)      = ";:If "Fred" <= "fred" Then Print "PASS" Else PROCFail()
Print "String <= (=)      = ";:If "Fred" <= "Fred" Then Print "PASS" Else PROCFail()
Print "String >           = ";:If "fred" > "Fred" Then Print "PASS" Else PROCFail()
Print "String >= (>)      = ";:If "fred" >= "Fred" Then Print "PASS" Else PROCFail()
Print "String >= (>=)     = ";:If "Fred" >= "Fred" Then Print "PASS" Else PROCFail()
Print

Print "::Conversion::"
Print "10 + 15.5          = ";:If 10 + 15.5 = 25.5 Then Print "PASS" Else PROCFail()
Print

Print "::Data::"
Let d1% = 0, d2$ = "", d3 = 0.0
Dim dta%(5)
Read d1%, d2$, d3
Data 100, "Fred", 10.5
Print "Data (Int)         = ";:If d1% = 100 Then Print "PASS" Else PROCFail()
Print "Data (Float)       = ";:If d3 = 10.5 Then Print "PASS" Else PROCFail()
Print "Data (String)      = ";:If d2$ = "Fred" Then Print "PASS" Else PROCFail()
For I% = 0 To 4
	Read dta%(I%)
Next
Data 1, 2, 3, 4, 5
Print "Data (Array)       = ";:If dta%(0) + dta%(1) + dta%(2) + dta%(3) + dta%(4) = 15 Then Print "PASS" Else PROCFail()
Data 1, 2, 3, 4, 5:REM used by function FuncTestLocalVariables. Data can't be inside functions yet
PROCTestLocalVariables()
Restore
Read d1%
Print "Restore            = ";:If d1% = 100 Then Print "PASS" Else PROCFail()
Print

Print "::File I/O::"
Print "Write then Read    = ";
C%=OpenOut "Test"
BPUT# C%, ASC("A")
Close# C%
C%=OpenIn "Test"
V%=BGET# C%
If V% = 65 Then Print "PASS" Else PROCFail()
Close# C%

Print "::Functions::"
Print "Function (Return)  = ";:PROCTest()
Print "Function (Int)     = ";:If FNTestReturn%(10, 5.5) = 20 Then Print "PASS" Else PROCFail()
Print "Function (Float)   = ";:If FNTestReturn(10, 5.5) = 20.5 Then Print "PASS" Else PROCFail()
Print "Proc (RETURN)      = ";:A%=1:PROCTestRet(A%):IF A% = 100 Then Print "PASS" Else PROCFail()
Print	

Print "::Locals & Globals::"
G%=5
PROCLocalVars()
Print "Preserving Global  = ";:If G% = 5 Then Print "PASS" Else PROCFail()
Print

Print "::Looping::"	
Print "One line IF        = ";:If 1 = 1 Then Print "PASS" Else PROCFail()
Print "Multiline IF       = ";
If 1 = 1
	Print "PASS"
Else
	PROCFail()
EndIf
I% = 0
Repeat
	I% = I% + 1
Until I% = 10
Print "Repeat             = ";:If I% = 10 Then Print "PASS" Else PROCFail()
I% = 0
While I% < 10
	I% = I% + 1
EndWhile
Print "While              = ";:If I% = 10 Then Print "PASS" Else PROCFail()
I% = 0
For J% = 0 To 9
	I% = I% + 1
Next
Print "For (Int)          = ";:If I% = 10 Then Print "PASS" Else PROCFail()
I% = 0
For J% = 0 To 9 Step 2
	I% = I% + 1
Next
Print "For + Step (Int)   = ";:If I% = 5 Then Print "PASS" Else PROCFail()
I% = 0
For J = 0 To 9
	I% = I% + 1
Next
Print "For (Float)        = ";:If I% = 10 Then Print "PASS" Else PROCFail()
I% = 0
For J = 0 To 9 Step 2
	I% = I% + 1
Next
Print "For + Step (Float) = ";:If I% = 5 Then Print "PASS" Else PROCFail()
Print
Print "Case               = ";
I%=1
Case I% Of
	When 0, 1, 2 Print "PASS"
	When 3 PROCFail()
	Otherwise Print "Neither"
EndCase
Print "Case (Otherwise)   = ";
I%=4
Case I% Of
	When 0, 1, 2 PROCFail()
	When 3 PROCFail()
	Otherwise Print "PASS"
EndCase

Print "::Maths::"
Print "- (Unary)          = ";:If 2 - -2 = 4 Then Print "PASS" Else PROCFail()
Print "- (Int)            = ";:If 10 - 8 = 2 Then Print "PASS" Else PROCFail()
Print "+ (Int)            = ";:If 10 + 8 = 18 Then Print "PASS" Else PROCFail()
Print "* (Int)            = ";:If 10 * 8 = 80 Then Print "PASS" Else PROCFail()
Print "/ (Int)            = ";:If 16 / 4 = 4 Then Print "PASS" Else PROCFail()
Print "// (Int)           = ";:If 4 // 100 = 0 Then Print "PASS" Else PROCFail()
Print "Mod (Int)          = ";:If 11 Mod 5 = 1 Then Print "PASS" Else PROCFail()
Print "Div (Int)          = ";:If 11 Div 5 = 2 Then Print "PASS" Else PROCFail()
Print "Abs (Int)          = ";:If Abs(-10) = 10 Then Print "PASS" Else PROCFail()
Print "- (Float)          = ";:If 10.5 - 8.25 = 2.25 Then Print "PASS" Else PROCFail()
Print "+ (Float)          = ";:If 10.4 + 8.1 = 18.5 Then Print "PASS" Else PROCFail()
Print "* (Float)          = ";:If 2.5 * 4.5 = 11.25 Then Print "PASS" Else PROCFail()
Print "/ (Float)          = ";:If 8.4 / 4.2 = 2.0 Then Print "PASS" Else PROCFail()
Print "Mod (Float)        = ";:If 11.0 Mod 5.0 = 1 Then Print "PASS" Else PROCFail()
Print "Div (Float)        = ";:If 11.0 Div 5.0 = 2 Then Print "PASS" Else PROCFail()
Print "Abs (Float)        = ";:If Abs(-10.5) = 10.5 Then Print "PASS" Else PROCFail()
Print "Sqr                = ";:If Sqr(16) = 4 Then Print "PASS" Else PROCFail()
Print "Ln                 = ";:If Int(Ln(16) * 100.0) = 277 Then Print "PASS" Else PROCFail()
Print "Log                = ";:If Int(Log(16) * 100.0) = 120 Then Print "PASS" Else PROCFail()
Print "Exp                = ";:If Int(Exp(1) * 100.0) = 271 Then Print "PASS" Else PROCFail()
Print "Atn                = ";:If Int(Atn(3) * 100.0) = 124 Then Print "PASS" Else PROCFail()
Print "Tan                = ";:If Int(Tan(3) * 100.0) = -15 Then Print "PASS" Else PROCFail()
Print "Sin                = ";:If Int(Sin(3) * 100.0) = 14 Then Print "PASS" Else PROCFail()
Print "Cos                = ";:If Int(Cos(3) * 100.0) = -99 Then Print "PASS" Else PROCFail()
Print "Acs                = ";:If Int(Acs(0.5) * 100.0) = 104 Then Print "PASS" Else PROCFail()
Print "Asn                = ";:If Int(Asn(0.5) * 100.0) = 52 Then Print "PASS" Else PROCFail()
Print "Rad                = ";:If Int(Rad(90) * 100.0) = 157 Then Print "PASS" Else PROCFail()
Print "Deg                = ";:If Int(Deg(1.5)) = 85 Then Print "PASS" Else PROCFail()
Print "Sgn (-)            = ";:If Sgn(-10) = -1 Then Print "PASS" Else PROCFail()
Print "Sgn                = ";:If Sgn(0) = 0 Then Print "PASS" Else PROCFail()
Print "Sgn (+)            = ";:If Sgn(10) = 1 Then Print "PASS" Else PROCFail()
Print "<< (Shift left)    = ";:If 60 << 2 = 240 Then Print "PASS" Else PROCFail()
Print ">> (Shift right)   = ";:If 200 >> 2 = 50 Then Print "PASS" Else PROCFail()
Print

Print "::Print & Input::"
Print "Multi-print ,      = ";:Print 10,151.2,"Test"
Print "Multi-print ;      = ";:Print 10;151.2;"Test"
Print "Multi-print end ;  = ";:Print 10;151.2;"Test";:Print
Print

Print "::Strings::"
Print "+                  = ";:If "Bob" + "Jack" = "BobJack" Then Print "PASS" Else PROCFail()
Print "Asc                = ";:If (Asc("Fred") = 70) And (Asc("") = -1) Then Print "PASS" Else PROCFail()
Print "Chr$               = ";:If Chr$(65) = "A" Then Print "PASS" Else PROCFail()
Print "Instr              = ";:If Instr("Test this this string", "this") = 5 Then Print "PASS" Else PROCFail()
Print "Instr (with start) = ";:If Instr("Test this this string", "this", 8) = 10 Then Print "PASS" Else PROCFail()
Print "Left$              = ";:If Left$("A test string", 6) = "A test" Then Print "PASS" Else PROCFail()
Print "Mid$               = ";:If Mid$("A test string", 3, 4) = "test" Then Print "PASS" Else PROCFail()
Print "Right$             = ";:If Right$("A test string", 6) = "string" Then Print "PASS" Else PROCFail()
Print "Len                = ";:If Len("A test string") = 13 Then Print "PASS" Else PROCFail()
Print "Val                = ";:If Val("10.5") = 10.5 Then Print "PASS" Else PROCFail()
Print "Str$               = ";:If Str$(10.5) = "10.5" Then Print "PASS" Else PROCFail()
Print "Str$ (Hex)         = ";:If Str$~(15) = "F" Then Print "PASS" Else PROCFail()
Print "String$            = ";:If String$(4, "A") = "AAAA" Then Print "PASS" Else PROCFail()
Print

Print "::System/OS::"
Print "Oscli              = ";:Oscli "FX0":Print " - NOT TESTED"
Print "Time               = ";:If Time > 0 Then Print "PASS" Else PROCFail()
Print "Time$              = ";:If Len(Time$) = 22 Then Print "PASS" Else PROCFail()
Print 

Print "::Types::"
PROCTestTypes()
Print 

170 Print "::Goto & Gosub::"
175 Print "Goto               = ";
180 GOTO 200
190 PROCFail()
200 PRINT "PASS"
175 Print "Gosub              = ";
180 GOSB%=0
210 GOSUB 300
220 If GOSB%=1 Then PRINT "PASS" ELSE PROCFail()

Print "::Keyboard::"
Print "Inkey (timeout)    = ";:IF INKEY(10) = -1 Then PRINT "PASS" Else PROCFail()
Print "Inkey (wait)       = ";:IF INKEY(1000) <> -1 Then PRINT "PASS" Else PROCFail()

Print
Print "Complete in ";:Print ((Time-T%)/100.0);:Print " seconds"
END

REM Check forward FN/PROC calls
DEFPROCFail()
	Print "!! FAILED TEST !!"
	End
EndProc

Type VertexTest
	Field x
	Field y
	Field z
	Field rgb%
EndType

DEFPROCLocalVars()
	Local G% = 10
EndProc

DEFPROCTestTypes()
	Local A! = VertexTest
	A!x = 50.0
	A!y = 100.5
	A!rgb% = &FF2080
	Print "Load field (float) = ";: If A!y = 100.5 Then Print "PASS" Else PROCFail()
	Print "Load field (int)   = ";: If A!rgb% = &FF2080 Then Print "PASS" Else PROCFail()
	Dim B!(5, VertexTest)
	B!(4)y = 100.0
	Print "Load field (array) = ";: If B!(4)y = 100.0 Then Print "PASS" Else PROCFail()
EndProc

DEFPROCTest()
	Print "PASS"
	Return
	Print "FAIL"
EndProc

DEFPROCTestRet(Ref a%)
	a%=100
EndProc

DEFFNTestReturn%(x%, y) 
	=> Int(x% + y + 5)
ENDFN

DEFFNTestReturn(x%, y) 
	=> x% + y + 5.0
ENDFN

DEFPROCTestLocalVariables()
	Local Dim C%(5)
	For J% = 0 To 4
		Read C%(J%)
	Next
	Print "Func Local (Array) = ";:If C%(0) + C%(1) + C%(2) + C%(3) + C%(4) = 15 Then Print "PASS" Else PROCFail()
EndProc

300 GOSB%=1:RETURN