#include "Daemons/daemons.h"
#include "Modules/Bakes/bakes.h"
#include "Modules/Software/software.h"

void print_info() {
  Serial.println("Kedi Kernel running on Arduino C");
  Serial.println("Version 0.0.1");
  Serial.println("Can Ulas Unal & Utku Unal, 2025")
}

void start_serial() {  
  Serial.begin(9600);
  delay(3000);
  Serial.print("Serial communication started on 9600 by shell.");
}

void test_hardware() {
  // Testing built in LED

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Builtin LED tested.");

  stabilize();
  
}

void process_command() {
  
  Serial.print("pati>>> ");
  while (Serial.available() == 0) {
  }

  String command = Serial.readStringUntil('\n');

  Serial.println(command);

  if (command == "info") {
    print_info();
  }

  if (command == "hw_test") {
    test_hardware();
  }

  if (command == "run") {
    int runtime = 1
    
    Serial.print("kernelscript>>> ");
    while (Serial.available() == 0) {
    }
    
    String program = Serial.readStringUntil('\n');
    
    while (runtime == 1) {
      if (program == "exit") {
        runtime = 0
      }
      else {
        execute_code(program);
      }
    }
  }

  if (command == "bake") {
    Serial.print("bake_executer>>> ");
    while (Serial.available() == 0) {
    }
    String baketorun = Serial.readStringUntil('\n');

    if (baketorun == "1") {
      bake1();
    }
    else if (baketorun == "2") {
      bake2();
    }
    else if (baketorun == "3") {
      bake3();
    }
    else if (baketorun == "4") {
      bake4();
    }
    else if (baketorun == "5") {
      bake5();
    }

    else {
      Serial.println("Bake not recognised!");
    }
    
  }

  else if (command == "") {}
    
  else {
    Serial.println("Command not recognised by kernel.");
  }
  
}

// When using API, run this function to start shell, running any other function as main runtime will cause errors!
void shell_runtime() {

  start_serial();

  while (true) {
    process_command();
  }
}
