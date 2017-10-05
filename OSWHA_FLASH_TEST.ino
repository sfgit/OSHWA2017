/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int green0 = 3; //GREEN0 = LED3
int green1 = 2; //GREEN1 = LED4 
int green2 = 1; //GREEN2 = LED5
int green3 = 0; //GREEN3 = LED8

int red0 = 7; //RED0?? -- super dim
int red1 = 6; //RED1
int red2 = 5; //RED2
int red3 = 4; //RED3


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(green0, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(red0, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 /*
  digitalWrite(green0, LOW);
  digitalWrite(green1, HIGH);  
  digitalWrite(red3, LOW);
  digitalWrite(red2, HIGH);

    
  delay(40);   
  //------

  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH); 
  digitalWrite(red2, LOW);
  digitalWrite(red1, HIGH);
  
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green3, HIGH); 
  digitalWrite(red1, LOW);
  digitalWrite(red0, HIGH);

  delay(40);  // wait for a second
  //------
  
  digitalWrite(green3, LOW); 
  digitalWrite(green2, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, HIGH);
  
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green1, HIGH); 
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);

  delay(40);
  //------   

  digitalWrite(green1, LOW);
  digitalWrite(green0, HIGH);  
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH);  
  delay(40);
*/

  //------******
  digitalWrite(green0, LOW);
  digitalWrite(green1, HIGH);  
  digitalWrite(red0, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
  delay(40);   
  //------

  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, LOW); 
  delay(40);  // wait for a second
  //------
  
  digitalWrite(green3, LOW); 
  digitalWrite(green2, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green1, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green1, LOW);
  digitalWrite(green0, HIGH);  
  digitalWrite(red0, LOW); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);  
  delay(40);

    digitalWrite(green0, LOW);
  digitalWrite(green1, HIGH);  
  digitalWrite(red0, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
  delay(40);   
  //------

  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, LOW); 
  delay(40);  // wait for a second
  //------
  
  digitalWrite(green3, LOW); 
  digitalWrite(green2, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green1, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green1, LOW);
  digitalWrite(green0, HIGH);  
  digitalWrite(red0, LOW); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);  
  delay(40);
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, HIGH);  
  digitalWrite(red0, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);
  delay(40);   
  //------

  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, LOW); 
  delay(40);  // wait for a second
  //------
  
  digitalWrite(green3, LOW); 
  digitalWrite(green2, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green2, LOW); 
  digitalWrite(green1, HIGH); 
  digitalWrite(red0, HIGH); 
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40);
  //------   

  digitalWrite(green1, LOW);
  digitalWrite(green0, HIGH);  
  digitalWrite(red0, LOW); 
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH);  
  delay(40);

//------BLINKY BIT
  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(40); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(30); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(30); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(20); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(20); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(10); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(10); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(40); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(30); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(30); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(20); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(20); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(10); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(10); 
  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(40); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(40); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(30); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(30); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(20); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(20); 

  digitalWrite(green0, HIGH);
  digitalWrite(green1, HIGH);  
  digitalWrite(green2, HIGH);
  digitalWrite(green3, HIGH); 
  digitalWrite(red0, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(red3, LOW);
  delay(10); 
  
  digitalWrite(green0, LOW);
  digitalWrite(green1, LOW);  
  digitalWrite(green2, LOW);
  digitalWrite(green3, LOW); 
  digitalWrite(red0, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(red3, HIGH); 
  delay(10); 
  
}
