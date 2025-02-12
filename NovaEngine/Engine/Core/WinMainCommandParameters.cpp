#include "WinMainCommandParameters.h"

FWinMainCommandParameters::FWinMainCommandParameters(HINSTANCE inHInstance, HINSTANCE inPrevInstance, PSTR inCmdLine, int inShowCmd)
	:hInstance(inHInstance)
	, inPrevInstance(inPrevInstance)
	, inCmdLine(inCmdLine)
	, inShowCmd(inShowCmd)
{

}
