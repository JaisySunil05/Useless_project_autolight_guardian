<img width="3188" height="1202" alt="frame (3)" src="https://github.com/user-attachments/assets/517ad8e9-ad22-457d-9538-a9e62d137cd7" />
🚪 Exit Light Reminder System 💡🎙️
Basic Details
Team Name: Crystal Minds
Team Members
•	Member 1: Jaisy Sunil – School of Engineering, CUSAT
•	Member 2: Hrisheekesh Narayan P E, School of Engineering, CUSAT
________________________________________
Project Description
A room with a mind of its own. Our system reminds forgetful humans (very politely) to turn off the lights when they leave a room — because the room doesn't pay the electricity bill.
________________________________________
The Problem (that doesn't exist)
People walk out of rooms leaving lights on, burning electricity and our patience. We're tired of yelling “Switch off the light!” — so we automated the nagging.
________________________________________
The Solution (that nobody asked for)
Using IR sensors and a DFPlayer Mini, our setup detects when someone leaves a room with the light still on — and immediately plays a pre-recorded voice message (bonus if it's your mom’s voice) reminding you to go back and switch it off.
________________________________________
Technical Details
Technologies/Components Used
For Software:
•	Language: C++ (Arduino IDE)
•	Libraries: SoftwareSerial, DFRobotDFPlayerMini
•	Tools: Arduino IDE, Serial Monitor
For Hardware:
•	Arduino Uno / Leonardo
•	2× IR Obstacle Avoidance Sensors
•	DFPlayer Mini MP3 Module
•	MicroSD Card (≤32GB FAT32)
•	8Ω Speaker
•	Logic-Level N-Channel MOSFET (e.g. IRFZ44N)
•	5V DC LED Bulb
•	Push-button or switch (light control simulation)
•	Jumper Wires, Breadboard, 1kΩ + 2kΩ resistors (for voltage divider)
•	Power Bank / USB supply
________________________________________
Implementation
Installation
1.	Install Arduino IDE
2.	Add the DFRobotDFPlayerMini library from Library Manager
Run
•	Upload .ino file to Arduino
•	Power up the system
•	Walk in and out of the "room" (represented by a cardboard box)
•	Forget to turn off the light for full experience
________________________________________
Project Documentation
Screenshots

IR sensor detects someone entering the room

Speaker ready to play the message once the room is empty

Switch remains ON after everyone exits = A voice is played is played
________________________________________
Diagrams

A person enters > IR sensors update people count > Light stays ON > Exit triggers audio alert
Schematic & Circuit

All components and how they’re wired together: IR sensors, DFPlayer, speaker, LED via MOSFET
________________________________________

Build Photos


![WhatsApp Image 2025-08-09 at 17 18 54_23bfc6f4](https://github.com/user-attachments/assets/fa32f3ec-6acf-49a0-ba64-68245551e405)
![WhatsApp Image 2025-08-09 at 17 18 53_ec749bf9](https://github.com/user-attachments/assets/aafcf2de-0cec-4154-a368-3b9ee8cb4895)

![WhatsApp Image 2025-08-09 at 17 18 53_be436037](https://github.com/user-attachments/assets/8bf4cb1a-0aed-444a-ae7e-d07d033b8a85)

     ![WhatsApp Image 2025-08-09 at 17 18 53_0cdb8b29](https://github.com/user-attachments/assets/c98002e6-ffb3-4de0-bb22-1e9602e6c809)
  

•	IR sensors
•	DFPlayer Mini
•	Speaker
•	Arduino Uno
•	Jumper Wires
•	LED Bulb

Mounting sensors on the box and connecting wiring

A full demo: person leaves room → forgets switch → system plays the warning audio
________________________________________
Project Demo

Video
________________________________________
Team Contributions
•	Jaisy Sunil: coding, documentation, testing
•	Hrisheekesh Narayan P E: Voiceover recording, debugging, Circuit design
________________________________________
Made with ❤️ at TinkerHub Useless Projects

