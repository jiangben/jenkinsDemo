xcopy "..\Calculator Build and Test\Calculator.iss" . /Y /R /F
xcopy "..\Calculator Build and Test\Release\Calculator.exe" "./Release/"/Y /R /F
iscc "Calculator.iss"