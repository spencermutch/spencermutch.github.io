#include <Servo.h>

// Servo
Servo arm1; 
int pos = 0; // Position of servo arm
int servo_pin = 9;
// RGB LED
int redPin = 5;
int greenPin = 4;
int bluePin = 3;
int buttonPin = 2;

const int sensor_trig = 7; // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int sensor_echo = 8; // Arduino pin connected to Ultrasonic Sensor's ECHO pin
int DISTANCE_THRESHOLD = 20; // centimeters
float duration_us, distance_cm;
int lastButtonState = 0;
bool standbyMode = true;
bool animalDetected = false;
int prevDuration = 99999;

int buttonState = 0;

void setup() {
  Serial.begin(9600);
  // Servo
  arm1.attach(servo_pin); // Attaches servo to the number 9 pin
  
  // RGB
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(sensor_trig, OUTPUT); // set arduino pin to output mode
  // pinMode(sensor_echo, OUTPUT);  // set arduino pin to input 
  // delayMicroseconds(2);
  pinMode(sensor_echo, INPUT);  // set arduino pin to input 
  
}

void loop() {

  readButton();

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  
  
  // reading motion of sensor within time interval of 10 microseconds
  if (!standbyMode) {
    
    digitalWrite(sensor_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(sensor_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(sensor_trig, LOW);
    int duration_us = pulseIn(sensor_echo, HIGH);
    
    
    if (duration_us==0) {
      duration_us = prevDuration;
    } else {
      prevDuration = duration_us;
    }
    distance_cm = 0.017 * duration_us;
    Serial.println(distance_cm);
    
    if (distance_cm <= DISTANCE_THRESHOLD){
      animalDetected = true;
    } else {
      animalDetected = false;
    }

  } 
  else {
    animalDetected = false;
  }

  // measure duration of pulse from ECHO pin
  // calculate the distance
  

  if(animalDetected && !standbyMode) {
    // Change eyes to red when animal detected
    setColour(255, 0, 0);

    // First loop rotates motor 180 degrees, 2nd loop rotates back
    for (pos = 0; pos <= 60; pos +=1) {
      // Serial.println("on");
      readButton();
      arm1.write(pos); // Tells servo to rotate motor to position value
      delay(3); // Delay decides speed
    }
    readButton();
    for(pos = 60; pos >= 0; pos -= 1) {
      readButton();
      arm1.write(pos);
      delay(3);
    }
    readButton();

  }

  // Eyes could be blue (or other colour) when animal not detected
  if (!animalDetected && !standbyMode) {
      setColour(0, 0, 255);
    } else if (standbyMode) {
      // If in standby mode, eyes could be green
      setColour(0, 255, 0);
    }

}

void setColour (int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

void readButton() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      if (standbyMode == false){
        standbyMode=true;
      } else {
        standbyMode=false;
      }
      delay(10);
    }
  }
  // Serial.print(standbyMode);
  lastButtonState = buttonState;
}