//hall_effect.ino

int led = 13;

// #define hall 4
// #define sensor0 A0
// #define sensor1 A1
// #define sensor2 A2
// #define sensor3 A3
// #define sensor4 A4
// #define sensor4 A5
// #define sensor4 A6
// #define sensor4 A7

#define numSensors 8

int sensor[numSensors]={0,1,2,3,4,5,6,7}:

int sensorVal;

unsigned long prevTime;
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
  prevTime = 0;
  currentTime = 0;

  sensorActive = false;
  sensorThreshold = 7;

}

void loop() {

	currentTime = millis();

	for (int i=0;i<numSensors;i++){

	sensorVal = analogRead(sensor[i]);
	// sensorVal = digitalRead(hall);
	Serial.print("sensor ");
	Serial.print(i);
	Serial.print(" : ");
	Serial.println(sensorVal);
	
	}

	delay(500);


	// if (sensorVal < sensorThreshold && sensorActive == false) {

	// 	sensorActive = true;

	// 	timeDifference = currentTime - prevTime;

	// 	wheelSpeed = map(timeDifference, 150, 680, 1023, 0);
	// 	Serial.println(wheelSpeed);

	// 	prevTime = currentTime;

	// } else if (sensorVal > sensorThreshold)  {

	// 	sensorActive = false;

	// }
}








