void loop() {

  Serial.print("ushell>>> ");
  while (Serial.available() == 0) {
  }

  String command = Serial.readStringUntil('\n');

  Serial.println(command);

  if (command == "pwd") {
    Serial.println("/Home");
  }

  if (command == "whoami") {
    Serial.println("DenizDOS v 0.0.2");
  }

  if (command == "exit") {
    Serial.println("System Has Shut Down");
    Serial.end();
  }

  if (command == "help") {
    Serial.println("DenizDOS Command Center");
    Serial.println("add, subtract, multiply");
    Serial.println("divide, pwd, whoami");
    Serial.println("exit, help, memory");
  }

  if (command == "add") {
    Serial.print("add1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("add2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()+add2.toInt());
  }

  if (command == "multiply") {
    Serial.print("multiply1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("multiply2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()*add2.toInt());
  }

  if (command == "divide") {
    Serial.print("divide1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("divide2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()/add2.toInt());
  }

  if (command == "subtract") {
    Serial.print("subtract1>>> ");
    while (Serial.available() == 0) {
    }
    String add1 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.print("subtract2>>> ");
    while (Serial.available() == 0) {
    }
    String add2 = Serial.readStringUntil('\n');
    Serial.println('Entered');
    Serial.println(add1.toInt()-add2.toInt());
  }

  if (command == "random") {
    int randomint = rand();
    Serial.println(randomint);
  }

  if (command == "memory") {
    Serial.print("option>>> ");
    while (Serial.available() == 0) {
    }
    String option = Serial.readStringUntil('\n');
    Serial.println(option);

    if (option == "memory1") {
      memory1();
    }
    if (option == "memory2") {
      memory2();
    }
    if (option == "memory3") {
      memory3();
    }
    if (option == "memory4") {
      memory4();
    }
    if (option == "memory5") {
      memory5();
    }
  }
}
