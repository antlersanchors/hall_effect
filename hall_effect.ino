//hall_effect.ino

int led = 13;

#define hall A0

int sensorVal;

unsigned long elapsedTime;
unsigned long currentTime;
int timeDifference;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

  Serial.begin(9600);

  // initialize our timer
  elapsedTime = 0;
  currentTime = 0;
}

void loop() {

	currentTime = millis() - elapsedTime;

	sensorVal = analogRead(hall);
	Serial.println(snesorVal);
	delay(10);
}
