//hall_effect.ino

int led = 13;

#define hall A0

int sensorVal;

unsigned long elapsedTime;
unsigned long currentTime;
int timeDifference;

// what value registers as a rotation
int sensorThreshold;
boolean sensorActive;

// how fast are you going?
int wheelSpeed;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

  Serial.begin(9600);

  // initialize our timer
  elapsedTime = 0;
  currentTime = 0;

  sensorActive = false;
  sensorThreshold = 7;

}

void loop() {


	sensorVal = analogRead(hall);

	if (sensorVal < sensorThreshold && sensorActive == false) {

		sensorActive = true;

		elapsedTime = millis() - currentTime;

		wheelSpeed = map(elapsedTime, 0, 200, 0, 1023);
		Serial.println(wheelSpeed);

	} else {

		sensorActive = false;

	}

	currentTime = millis();
}
