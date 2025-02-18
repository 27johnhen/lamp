int d = 100;
void setup(){

pinMode(9, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("Send 'n' to turn lamp on. Send 'f' to turn lamp off.");

}

void loop() {

if (Serial.available()){

char state = (char) Serial.read();

if (state == 'n'){

digitalWrite(9, HIGH);

Serial.println("lamp on");

}

if (state == 'f'){

digitalWrite(9, LOW);

Serial.println("lamp off");

}

if (state == 's'){
d=20;
}
if (state == 'l'){
d=200;
}
if (state == 'x'){
d=100;
}

}

delay(d);

}
