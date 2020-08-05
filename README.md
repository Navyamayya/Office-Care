# Office-Care
A Sanitizing Unit built in the office to ensure the safety of the employees during pandemic.
# Components Required
   1. Arduino Uno R3-×1
   
   2. LCD 16×2-×1
   
   3. 220Ω,Potentiometer-×1
   
   4. 220Ω,Resistors-×3
   
   5. Hobby Gearmotor-×2
   
   6. H-bridge Motor Driver-×1
   
   7. Micro Servo motor-×1
   
   8. Red LED-×1
   
   9. Green LED-×1
   
  10. Piezo-×1
  
  11. Ultrasonic Distance Sensor-×1 
  
  12. PIR Sensor-×1

#  Project Design

1.	Automatic Welcome Gate->
      Welcome gate is the glass door in the entrance of the office. When a person approaches the door, it opens automatically and as a sign of Welcoming it prints a ‘’Welcome’’         message in LCD simultaneously. 
2.	Sanitizing Area (Automatic Sanitizer Dispenser)->
      Sanitizing Area consists an Automatic Sanitizer Dispenser. When the person stretches their hands towards the dispenser, it dispenses the liquid as well as it prints a             message in LCD. After dispensing it gives few seconds for them to rub the liquid well on their hands. 
3.	Automatic Pass Gate->
      After giving enough time to sanitize, Pass Gate will be opened for 3 secs and denotes it by blinking green LED thrice as well as prints a message in LCD Display
      simultaneously. And then with a long beep sound the red light turns on denoting the closure of gate.

A pictorial representation is attached in repository.
#  Working
  1.  Automatic Welcome Gate uses PIR sensor which detects the motion when a person approaches the door and is opened using a Hobby Gearmotor connected with H-bridge motor             driver,which drives the wheels connected to the door.
  
  2.  Automatic Sanitizer Dispenser uses an Ultrasonic Distance Sensor which detects the distance of the obstacle (i.e. Hand). If Ultrasonic sensor senses obstacle within Micro       Servo motor is rotated 180° which releases the liquid.
  
  3.  Pass gate uses a Hobby Gearmotor connected with H-bridge motor driver, which drives the wheels connected to the door to open the gate. And a piezo(buzzer) is used to             generate the long beep noise of given frequencies after the closure of Gate.
# Libraries Used
  1) Liquid Crystal Library:
     This library allows Arduino board to control LiquidCrystal displays (LCDs).
     To install this->
     Open the IDE and click to the "Sketch" menu and then Include Library > Manage Libraries.
     
        1.Then the Library Manager will open and you will find a list of libraries that are already installed or ready for installation...
	
        2.Search Liquid Crystal,finally click on install and wait for the IDE to install the new library.
	
      To use this library:
    
        #include <LiquidCrystal.h>
       
     For more information about this library please visit us at http://www.arduino.cc/en/Reference/LiquidCrystal
   2) Servo Library
      This library allows Arduino/Genuino boards to control a variety of servo motors.
      To install this->
      Open the IDE and click to the "Sketch" menu and then Include Library > Manage Libraries.
     
        1.Then the Library Manager will open and you will find a list of libraries that are already installed or ready for installation...
	
        2.Search Servo,finally click on install and wait for the IDE to install the new library.
	
       To use this library:
        
	  #include <Servo.h>
	  
       For more information about this library please visit us at http://www.arduino.cc/en/Reference/Servo
       
      
#  Contents of this repsitory
1. Project Design 

2. Circuit Diagram/Simulation wiring(Tinkercad)

3. Component List (Excel)

4. Program (.ino form)

# Tinkercad Simulation link
   > https://www.tinkercad.com/things/cIGn4kw4cmo

 

	       
