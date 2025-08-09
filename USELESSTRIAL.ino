#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mp3Serial(10, 11); // DFPlayer TX, RX
DFRobotDFPlayerMini mp3;

const int irInsidePin = 2;
const int irOutsidePin = 3;
const int lightSwitchPin = 4; // Switch input
const int lightLEDPin = 5;    // LED output

int peopleCount = 0;
bool irInsideState = false;
bool irOutsideState = false;

void setup() {
  Serial.begin(9600);
  mp3Serial.begin(9600);

  pinMode(irInsidePin, INPUT);
  pinMode(irOutsidePin, INPUT);
  pinMode(lightSwitchPin, INPUT_PULLUP); // switch
  pinMode(lightLEDPin, OUTPUT);          // LED

  if (!mp3.begin(mp3Serial)) {
    Serial.println("DFPlayer Mini not detected!");
    while (true);
  }
  mp3.volume(25);
}

void loop() {
  // Read switch (LOW = ON)
  bool lightOn = (digitalRead(lightSwitchPin) == LOW);

  // Control LED based on switch
  digitalWrite(lightLEDPin, lightOn ? HIGH : LOW);

  // IR Sensor logic
  if (digitalRead(irOutsidePin) == LOW) irOutsideState = true;
  if (digitalRead(irInsidePin) == LOW) irInsideState = true;

  // Person entering
  if (irOutsideState && irInsideState) {
    peopleCount++;
    Serial.println("Person entered");
    irOutsideState = false;
    irInsideState = false;
    delay(500);
  }

  // Person exiting
  if (irInsideState && irOutsideState) {
    peopleCount--;
    if (peopleCount < 0) peopleCount = 0;
    Serial.println("Person exited");
    irInsideState = false;
    irOutsideState = false;
    delay(500);
  }

  // If room empty & light is ON → play audio
  if (peopleCount == 0 && lightOn) {
    mp3.play(1); // Play first audio file
    delay(5000); // avoid repeated plays
  }
}