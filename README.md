# Useless_project_autolight_guardian

🛡️ PROJECT TITLE: Auto Light Guardian
👥 TEAM NAME: Crystal Minds
👨‍💻 TEAM MEMBERS: Hrisheekesh Narayan P E (School of Engineering, CUSAT) 
           Jaisy Sunil (School of Engineering, CUSAT)
🔷 Introduction – Who We Are
We are Team Crystal Minds, a duo of tech enthusiasts driven by curiosity, creativity, and the joy of building solutions that blend usefulness with fun.
Together, we aim to create electronics projects that make everyday tasks smarter, smoother, and sometimes, a little more amusing.
💡 About the Project – Auto Light Guardian
Auto Light Guardian is a smart light reminder system designed to gently alert users when they forget to switch off the lights while exiting a room.
Using a combination of entry/exit sensors and a voice alert system, it acts like a humorous and helpful “guardian” that ensures no light is left ON unnecessarily — saving power while making people smile.

🔍 Problem It Solves
We all forget things — especially simple ones like turning off the light when leaving a room. This project helps solve that by:
•	Automatically tracking the number of people inside a room
•	Monitoring the light status
•	Playing a voice reminder if the room becomes empty and the light is still ON
—
⚙️ How It Works
•	Two IR sensors are placed on either side of a doorway:
o	Sensor 1 (outside) and Sensor 2 (inside)
o	If a person triggers outside first, then inside — it's an entry
o	If inside first, then outside — it's an exit
•	An internal counter keeps track of how many people are inside
•	A button is used to turn the light ON/OFF — and Arduino always knows the light state
•	When people count drops to 0 and light is still ON, the system plays an audio reminder using a DF Player Mini and a speaker


🔧 Components Used
•	Arduino UNO 
•	2 × IR sensors (for entry/exit detection)
•	DF Player Mini with speaker
•	LED light bulb 
•	Pushbutton (to toggle light)
•	MicroSD card 
•	Wires, resistors, breadboard/enclosure
—
🎯 Why Auto Light Guardian?
•	Combines real-world usefulness with a touch of humour
•	Encourages energy saving in classrooms, dorms, or homes
•	Introduces concepts like sensor logic, human counting, and audio feedback
•	Easy to build, fun to present, and hard to forget 
