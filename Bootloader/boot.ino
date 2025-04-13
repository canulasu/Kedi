void setup() {
    Serial.begin(9600);
    delay(3000);
    Serial.println("Serial Communication Initiated on 9600.");
    Serial.println("Kedi Bootloader Version 0.0.1");
    Serial.println("---------------------------------");
    Serial.println("Bootloader will now start CPU cooldown.");
    delay(10000);
    Serial.println("Bootloader will now boot Kedi userspace init program.");
}

void loop() {
    userspace();
}
