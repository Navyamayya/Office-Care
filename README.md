# Office-Care
A Sanitizing Unit built in the office to ensure the safety of the employees during pandemic.
# Components Required
   1.Arduino Uno R3-×1
   
   2.LCD 16×2-×1
   
   3.220Ω,Potentiometer-×1
   
   4.220Ω,Resistors-×3
   
   5.Hobby Gearmotor-×2
   
   6.H-bridge Motor Driver-×1
   
   7.Micro Servo-×1
   
   8.Red LED-×1
   
   9.Green LED-×1
   
  10.Piezo-×1
  
  11.Ultrasonic Distance Sensor-×1 
  
  12.PIR Sensor-×1

#  Project Design
A pictorial representory is attached in repository
1.	Automatic Welcome Gate->
      Welcome gate is the glass door in the entrance of the office. When a person approaches the door, it opens automatically and as a sign of Welcoming it prints a ‘’Welcome’’         message in LCD simultaneously. 
2.	Sanitizing Area (Automatic Sanitizer Dispenser)->
      Sanitizing Area consists an Automatic Sanitizer Dispenser. When the person stretches their hands towards the dispenser, it dispenses the liquid as well as it prints a             message in LCD. After dispensing it gives few seconds for them to rub the liquid well on their hands. 
3.	Automatic Pass Gate->
      After giving enough time to sanitize, Pass Gate will be opened for 3 secs and denotes it by blinking green LED thrice as well as prints a message in LCD Display
      simultaneously. And then with a long beep sound the red light turns on denoting the closure of gate. 
#  Working
  1. Automatic Welcome Gate uses PIR sensor which detects the motion when a person approaches the door and is opened using a Hobby Gearmotor connected with H-bridge motor            driver,which drives the wheels connected to the door.
  
  2. Automatic Sanitizer Dispenser uses an Ultrasonic Distance Sensor which detects the distance of the obstacle (i.e. Hand). If Ultrasonic sensor senses obstacle within Micro        Servo motor is rotated 180° which releases the liquid.
  
  3. Pass gate uses a Hobby Gearmotor connected with H-bridge motor driver, which drives the wheels connected to the door to open the gate. And a piezo(buzzer) is used to            generate the long beep noise of given frequencies after the closure of Gate.
#  Contents of this repsitory





# Tinkercad Simmulation link
   > https://www.tinkercad.com/things/cIGn4kw4cmo

 

	       
