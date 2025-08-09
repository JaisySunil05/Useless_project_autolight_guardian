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