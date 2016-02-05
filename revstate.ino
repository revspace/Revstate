void setup () {
    Serial.begin(9600);
}

void loop () {
    static bool oldstate = !digitalRead(3);

    bool state = digitalRead(3);

    if (state != oldstate) {
        Serial.println(state ? "[RevSpace dicht]" : "[RevSpace open]");
    }

    oldstate = state;
    delay(100);
}
