# Office-Care
A Sanitizing Unit built in the office to ensure the safety of the employees due to pandemic.
# Components Required
   1. Arduino Uno -×1
   
   2. LCD (16×2)-×1
   
   3. Potentiometer(220Ω)-×1
   
   4. Resistor(220)-×3
   
   5. Hobby Gearmotor-×2
   
   6. H-bridge Motor Driver(L298D)-×1
   
   7. Micro Servo motor-×1
   
   8. Red LED-×1
   
   9. Green LED-×1
   
  10. Piezo(Buzzer)-×1
  
  11. Ultrasonic Distance Sensor(HC-SR04)-×1 
  
  12. PIR Sensor-×1

#  Project Design

1.	Automatic Welcome Gate->
         Welcome gate is the glass door at the entrance of the office. When a person approaches the door, it opens automatically and a  Welcome message is displayed on the LCD . 
2.	Sanitizing Area (Automatic Sanitizer Dispenser)->
         Sanitizing Area consists of an Automatic Sanitizer Dispenser. When the person places his/her hand below the sensor , it dispenses the liquid and prints a                        message on the LCD. After dispensing it gives few seconds for them to rub the liquid well on their hands. 
3.	Automatic Pass Gate->
         After giving enough time to sanitize, Pass Gate will be opened for 3 secs.It is denoted by a blinking green LED and a message on the LCD Display. After 3 sec Red                LED turns on denoting the closure of the gate along with a long beep sound.

      A pictorial representation is attached in repository.
#  Working
  1.  Automatic Welcome Gate uses PIR sensor. PIR Sensor detects the motion of a person when he/she approaches the door.The door and is opened using a Hobby Gearmotor connected       to a H-bridge motor driver,which drives the wheels connected to the door.
  
  2.  Automatic Sanitizer Dispenser uses an Ultrasonic Distance Sensor which detects the distance of the obstacle (i.e. Hand). If Ultrasonic sensor senses an obstacle within           30cm then the shaft of the MicroServo motor is rotated by 180°,the liquid is released.
  
  3.  Pass gate uses a Hobby Gearmotor connected to a H-bridge motor driver, which drives the wheels connected to the door.And a piezo(buzzer) is used to generate a long beep         noise of given frequencies after the closure of Gate.
# Libraries Used
  1) Liquid Crystal Library:
     This library allows Arduino board to control LiquidCrystal displays (LCDs).
     
     To install this->
     Open the IDE and click to the "Sketch" menu and then Include Library > Manage Libraries.
     
        1.Then the Library Manager will open and you will find a list of libraries that are already installed or ready for installation...
	
        2.Search Liquid Crystal,finally click on install and wait for the IDE to install the new library.
	
      To use this library:
    
        #include <LiquidCrystal.h>
       
     For more information about this library please visit http://www.arduino.cc/en/Reference/LiquidCrystal
   2) Servo Library
      This library allows Arduino/Genuino boards to control a variety of servo motors.
      
      To install this->
      Open the IDE and click to the "Sketch" menu and then Include Library > Manage Libraries.
     
        1.Then the Library Manager will open and you will find a list of libraries that are already installed or ready for installation...
	
        2.Search Servo,finally click on install and wait for the IDE to install the new library.
	
       To use this library:
        
	  #include <Servo.h>
	  
       For more information about this library please visit http://www.arduino.cc/en/Reference/Servo
       
      
#  Contents of this repository
1. Project Design 

2. Circuit Diagram/Simulation wiring(Tinkercad)

3. Component List

4. Code.ino

# Tinkercad Simulation link
   > https://www.tinkercad.com/things/cIGn4kw4cmo

 

	       
