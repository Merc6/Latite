#pragma once
#include <array>
#include <map>
#include <memory>
#include <optional>

#include "../Screen.h"
#include "client/render/asset/Asset.h"
#include "client/script/feature/JsEvented.h"
#include "client/ui/TextBox.h"

class JsScreen: public Screen, public JsEvented {
  public:
    JsScreen(JsValueRef object, std::string name);

    void onRender(class ::Event& ev);
    void onKey(::Event& ev);
    void onClick(::Event& ev);

    std::string getName() override {
        return name;
    }

    JsValueRef getObject() const {
        return object;
    }

  protected:
    void onEnable(bool ignoreAnims) override;
    void onDisable() override;

  private:
    JsValueRef object = JS_INVALID_REFERENCE;
    JsContextRef ctx = JS_INVALID_REFERENCE;

    std::string name;
};