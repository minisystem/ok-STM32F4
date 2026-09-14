#pragma once

#include <stdint.h>
#include <stdarg.h>

class Logger {
public:
    Logger(){};

    void init();
    uint8_t log(const char *string, ...);
    uint8_t log(int number);
    uint8_t log(float number);
    uint8_t logSystemStatus();
};
