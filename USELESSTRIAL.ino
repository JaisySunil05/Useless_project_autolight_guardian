#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Pin Definitions
#define SENSOR_OUTSIDE 2
#define SENSOR_INSIDE 3
#define LIGHT_SWITCH_PIN 4
#define LIGHT_OUTPUT_PIN 5

// DFPlayer connections
#define DF_TX 10  // Arduino TX to DFPlayer RX
#define DF_RX 11  // Arduino RX to DFPlayer TX

// Variables
int peopleCount = 0;
bool lightState = false;

SoftwareSerial mySerial(DF_RX, DF_TX);
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  pinMode(SENSOR_OUTSIDE, INPUT);
  pinMode(SENSOR_INSIDE, INPUT);
  pinMode(LIGHT_SWITCH_PIN, INPUT_PULLUP);
  pinMode(LIGHT_OUTPUT_PIN, OUTPUT);

  Serial.begin(9600);
  mySerial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer Mini not detected!");
    while (true);
  }
  myDFPlayer.volume(25); // Set volume (0-30)

  Serial.println("System Ready");
}

void loop() {
  // Read switch state
  lightState = digitalRead(LIGHT_SWITCH_PIN) == LOW; // LOW if switch ON
  digitalWrite(LIGHT_OUTPUT_PIN, lightState);