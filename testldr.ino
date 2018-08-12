

const int ldrPin = A0;

void setup() {

Serial.begin(9600);



pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 255) {


Serial.print("Its DARK, Turn on the LED : ");

Serial.println(ldrStatus);

} else {


Serial.print("Its BRIGHT, Turn off the LED : ");

Serial.println(ldrStatus);

}

}
