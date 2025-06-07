#pragma once
#include <vector>

class Notifications: public Listener {
  public:
    Notifications();

    void push(std::wstring message);

  private:
    void onRender(Event& ev);

    struct Toast {
        std::wstring message;
        bool init = false;
        std::chrono::system_clock::time_point createTime;

        void initialize() {
            init = true;
            createTime = std::chrono::system_clock::now();
        }
    };

    std::queue<Toast> toasts;
};