int led = D7;

void setup() {
    pinMode(led, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}

void loop() {
    
}

void myHandler(const char *event, const char *data) {
    if (strcmp(data, "wave") == 0) {
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(200);
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
    }
    
    else if (strcmp(data, "pat") == 0) {
        digitalWrite(led, HIGH);
        delay(600);
        digitalWrite(led, LOW);
        delay(600);
    }

}