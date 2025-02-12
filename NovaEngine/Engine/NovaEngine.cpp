#include "EngineMinimal.h"
#include "EngineFactory.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR cmdLine, int showCmd)
{
	int ReturnValue = 0;

	if (FEngine* Engine = FEngineFactory::CreateEngine())
	{
		FWinMainCommandParameters InParameters(hInstance, prevInstance, cmdLine, showCmd);
		ReturnValue=Engine->PreInit(InParameters);
		if (ReturnValue!=0)
		{
			return ReturnValue;
		}
		Engine->Init();
		Engine->PostInit();

		while (1)
		{
			Engine->Tick();
		}

		Engine->PreExit();
		Engine->Exit();
		Engine->PostExit();

		return ReturnValue;
	}
	

	return ReturnValue;

}