#pragma once
#include "api/feature/module/Module.h"
#include "api/manager/FeatureManager.h"

class IModuleManager: public FeatureManager<IModule> {
  public:
    virtual ~IModuleManager() = default;
};