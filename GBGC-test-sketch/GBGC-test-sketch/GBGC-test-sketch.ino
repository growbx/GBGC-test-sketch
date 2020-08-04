void setup() {
  // put your setup code here, to run once:

  // Mechanical Endstop Switch Inputs
  pinMode(56,INPUT);
  pinMode(57,INPUT);
  pinMode(58,INPUT);
  pinMode(59,INPUT);
  pinMode(60,INPUT);
  pinMode(61,INPUT);
  pinMode(62,INPUT);
  pinMode(63,INPUT);
  pinMode(64,INPUT);
  pinMode(65,INPUT);

  //Stepper 5V Line Driver OE Outputes
  pinMode(13,OUTPUT);   // 4OE
  pinMode(12,OUTPUT);   // 3OE
  pinMode(35,OUTPUT);   // 2OE
  pinMode(37,OUTPUT);   // 1OE

  //Stepper Driver Signal Outputs 
  pinMode(11,OUTPUT);   // DRIVER 1 STEP
  pinMode(10,OUTPUT);   // DRIVER 1 DIRECTION
  pinMode(9,OUTPUT);    // DRIVER 1 ENABLE
  
  pinMode(8,OUTPUT);    // DRIVER 2 STEP
  pinMode(7,OUTPUT);    // DRIVER 2 DIRECTION
  pinMode(6,OUTPUT);    // DRIVER 2 ENABLE

  pinMode(5,OUTPUT);    // DRIVER 3 STEP
  pinMode(4,OUTPUT);    // DRIVER 3 DIRECTION
  pinMode(3,OUTPUT);    // DRIVER 3 ENABLE

  pinMode(2,OUTPUT);    // DRIVER 4 STEP
  pinMode(23,OUTPUT);   // DRIVER 4 DIRECTION
  pinMode(25,OUTPUT);   // DRIVER 4 ENABLE

  pinMode(27,OUTPUT);   // DRIVER 5 STEP
  pinMode(29,OUTPUT);   // DRIVER 5 DIRECTION
  pinMode(31,OUTPUT);   // DRIVER 5 ENABLE

  // Diagnositc LEDs
  pinMode(52,OUTPUT);   // Heartbeat
  pinMode(50,OUTPUT);   // Connect Status
  pinMode(48,OUTPUT);   // Stopped
  pinMode(46,OUTPUT);   // Moving
  pinMode(44,OUTPUT);
  pinMode(42,OUTPUT);
  pinMode(40,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(36,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(32,OUTPUT);
  pinMode(30,OUTPUT);

  // MOSFETs
  pinMode(53,OUTPUT);   // FET2 Drive
  pinMode(51,OUTPUT);   // FET2 OE2
  pinMode(49,OUTPUT);   // FET1 Drive
  pinMode(47,OUTPUT);   // FET1 OE1
  pinMode(45,OUTPUT);   // FET4 OE4
  pinMode(43,OUTPUT);   // FET4 Drive
  pinMode(41,OUTPUT);   // FET3 OE3
  pinMode(39,OUTPUT);   // FET3 Drive
   
}

void loop() {
  // put your main code here, to run repeatedly:

}

void togglePin(int pin)
{
  //switch pin high, delay switch pin low   
}
