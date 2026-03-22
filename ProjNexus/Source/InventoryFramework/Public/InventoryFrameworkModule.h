#pragma once

#include "Modules/ModuleManager.h"

class FInventoryFrameworkModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};