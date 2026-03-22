#pragma once

#include "Modules/ModuleManager.h"

class FCoreFrameworkModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};