#include "software.h"
#include <Arduino.h>

void execute_script(String code) {
    noInterrupts();
    asm(code);
    interrupts();
}
