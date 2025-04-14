void start_serial() {
    Serial.begin(9600);
    delay(3000);
    Serial.println("Serial Communication Initiated on 9600.");
}

void setup() {
    Serial.println("Serial Communication Initiated on 9600.");
    Serial.println("Kedi Bootloader Version 0.0.1");
    Serial.println("---------------------------------");
    Serial.println("Bootloader will now boot Kedi userspace api program.");
}

void loop() {
    userspace();
}
