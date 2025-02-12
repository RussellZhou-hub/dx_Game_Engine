#include "EngineFactory.h"
#include "Platform/Windows/WindowsEngine.h"

FEngineFactory::FEngineFactory()
{

}

FEngine* FEngineFactory::CreateEngine()
{
#if defined(_WIN32)
	return new FWindowsEngine();
#elif defined(__linux__)

#endif // DEBUG
}