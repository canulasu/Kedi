void print_info() {
  Serial.println("Kedi Kernel running on Arduino C");
  Serial.println("Version 0.0.1");
}

void start_serial() {  
  Serial.begin(9600);
  delay(3000);
  Serial.print("Serial communication started on 9600 by shell.");
}

void shell() {

  start_serial();
  
  Serial.print("pati>>> ");
  while (Serial.available() == 0) {
  }

  String command = Serial.readStringUntil('\n');

  Serial.println(command);

  if (command == "info") {
    print_info();
  }
}
