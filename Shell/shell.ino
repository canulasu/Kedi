void shell() {

  Serial.begin(9600);
  delay(3000);
  Serial.print("Serial communication started on 9600 by shell.");
  
  Serial.print("pati>>> ");
  while (Serial.available() == 0) {
  }

  String command = Serial.readStringUntil('\n');

  Serial.println(command);

  if (command == "exit") {
    Serial.println("Kernel will stop serial communications with user");
    Serial.end();
  }
}
