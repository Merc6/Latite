#pragma once

struct ClickMap {
    void* pad[2];
    bool mouseButtons[8];

    static ClickMap* get();
};
