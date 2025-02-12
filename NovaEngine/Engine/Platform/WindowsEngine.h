#pragma once

#include "../../Core/Engine.h"

class FWindowsEngine :public FEngine
{
public:
	virtual int PreInit(
#if defined(_WIN32)	
		FWinMainCommandParameters InParameters
#endif // 1
	) = 0;
	virtual int Init() = 0;
	virtual int PostInit() = 0;

	virtual void Tick() = 0;

	virtual int PreExit() = 0;
	virtual int Exit() = 0;
	virtual int PostExit() = 0;
};