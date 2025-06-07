#pragma once
#include "api/feature/command/Command.h"
#include "api/manager/FeatureManager.h"

class ICommandManager: public FeatureManager<ICommand> {
  public:
    virtual ~ICommandManager() = default;
};