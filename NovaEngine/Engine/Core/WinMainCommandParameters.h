#pragma once
#include "../EngineMinimal.h"

#if defined(_WIN32)
class FWinMainCommandParameters
{
public:
	FWinMainCommandParameters(HINSTANCE inHInstance, HINSTANCE inPrevInstance, PSTR inCmdLine, int inShowCmd);

	HINSTANCE hInstance;
	HINSTANCE prevInstance;
	PSTR cmdLine;
	int showCmd;
};

#elif 1

#endif // 0