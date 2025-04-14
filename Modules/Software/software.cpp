#include "software.h"
#include <Arduino.h>

void execute_code(String code) {

    interrupts();
    
    if (code.startswith("//")) {
    }

    else if (code.startsWith("print(")) {
        Serial.println(code.replace("print(", ""));
    }

    else if (code.startsWith("puts(")) {
        Serial.print(code.replace("puts(", ""));
    }
        
    else {
        Serial.println("Command is not regonised by Kernel Interpreter!");
    }
}
