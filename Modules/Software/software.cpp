#include "software.h"
#include <Arduino.h>

void execute_code(String code) {
    if (code.startswith("//")) {
    }

    else if (code.startswith("print(")) {
        Serial.println(code.replace("print(", ""));
    }
        
    else {}
}
