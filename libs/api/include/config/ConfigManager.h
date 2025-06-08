#pragma once
#include "Config.h"
#include "api/manager/Manager.h"

class IConfigManager: public Manager<Config> {
  public:
    std::shared_ptr<Config> masterConfig;

    IConfigManager() {}

    virtual ~IConfigManager() = default;

  protected:
    std::shared_ptr<Config> loadedConfig;
};