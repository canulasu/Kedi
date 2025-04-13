#include "machinestate.h"
#include <Arduino.h>

void suspend() {
    noInterrupts();
    while (true) {
        delay(1000);
    }
}

void sleep() {
    interrupts();
    while (true) {
        delay(1000);
    }
}
