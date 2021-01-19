T%=Time
ITERS = 16, XRANGE = -2.5, YRANGE = -1.5
COLS = 256, MAXX% = 1024, MAXY% = 768
Graphics MAXX%, MAXY%, FALSE

For Iter% = 0 to 9
	For Y%=0 To MAXY%
		For X%=0 To MAXX%
			CR = XRANGE + X% * 4 / MAXX%
			CI = YRANGE + Y% * 3 / MAXY%
			ZM = 0, ZR = 0, ZI = 0, ZR2 = 0, ZI2 = 0, IT = 0

			Repeat
				Z1 = ZR2 -ZI2 + CR
				Z2 = 2 * ZR * ZI + CI
				ZR = Z1
				ZI = Z2
				ZR2 = ZR * ZR
				ZI2 = ZI * ZI
				ZM = ZR2 + ZI2
				IT = IT+1
			Until IT = ITERS Or ZM >= 4

			c% = COLS - 1 - Int(IT / (ITERS / (COLS - 1)))
			Colour c%, c%, c%
			Plot X%,Y%	
		Next
		Flip
	Next
	CLS
Next
Print Time - T%
Print "Complete"
