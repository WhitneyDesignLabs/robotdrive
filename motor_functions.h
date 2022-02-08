// <----- bts7960 functions ----->
// test... editing inside Github - Scott
/* think we want 1 function that includes all this in a mathamatical way IE 
 * clockwise
void motor_cw(int value) {
  digitalWrite (LPWM, LOW);
  analogWrite (RPWM, value);  //for scotts motor style change digitalWrite (RPWM, High);
  // 0-255
  //analogWrite (PWM, value); //for scotts motor style
  //Serial.println ("Running clockwise"); //debug on 
}

//counter clockwise
void motor_ccw(int value) { 
  analogWrite (LPWM, value*-1); //for scotts motor style change digitalWrite (LPWM, High);
  digitalWrite (RPWM, LOW);
  // multiply speed value by -1 so motorcontroller gets a positive speed value
  //analogWrite (PWM, value*-1); //for scotts motor style
  // Serial.println ("Running counter clockwise"); //debug on

// motor stop maybe more of an motor enable?
}
void motor_stop() { 
  digitalWrite (LPWM, LOW);
  digitalWrite (RPWM, LOW);
  //analogWrite (PWM, 0); //for scotts motor style
  //Serial.println ("Stopped");  //debug on
}
*/

void Setup_MPins(){
  //Assign pins for motor controler numbered 0
  pinMode (RPWM0, OUTPUT);
  pinMode (LPWM0, OUTPUT);
  pinMode(LEN0,OUTPUT); //enable left
  pinMode(REN0,OUTPUT); //enable right 
  digitalWrite(REN0,HIGH);
  digitalWrite(LEN0,HIGH);
  //pinMode (PWM, OUTPUT);

  //Assign pins for motor controler numbered 1
  pinMode (RPWM1, OUTPUT);
  pinMode (LPWM1, OUTPUT);
  pinMode(LEN1,OUTPUT); //enable left
  pinMode(REN1,OUTPUT); //enable right 
  digitalWrite(REN1,HIGH);
  digitalWrite(LEN1,HIGH);
  //pinMode (PWM, OUTPUT);

  //Assign pins for motor controler numbered 2
  pinMode (RPWM2, OUTPUT);
  pinMode (LPWM2, OUTPUT);
  pinMode(LEN2,OUTPUT); //enable left
  pinMode(REN2,OUTPUT); //enable right 
  digitalWrite(REN2,HIGH);
  digitalWrite(LEN2,HIGH);
  //pinMode (PWM, OUTPUT);

  //Assign pins for motor controler numbered 3
  pinMode (RPWM3, OUTPUT);
  pinMode (LPWM3, OUTPUT);
  pinMode(LEN3,OUTPUT); //enable left
  pinMode(REN3,OUTPUT); //enable right 
  digitalWrite(REN3,HIGH);
  digitalWrite(LEN3,HIGH);
  //pinMode (PWM, OUTPUT);

  //Assign pins for motor controler numbered 4
  pinMode (RPWM4, OUTPUT);
  pinMode (LPWM4, OUTPUT);
  pinMode(LEN4,OUTPUT); //enable left
  pinMode(REN4,OUTPUT); //enable right 
  digitalWrite(REN4,HIGH);
  digitalWrite(LEN4,HIGH);
  //pinMode (PWM, OUTPUT);

  //Assign pins for motor controler numbered 5
  pinMode (RPWM5, OUTPUT);
  pinMode (LPWM5, OUTPUT);
  pinMode(LEN5,OUTPUT); //enable left
  pinMode(REN5,OUTPUT); //enable right 
  digitalWrite(REN5,HIGH);
  digitalWrite(LEN5,HIGH);
  //pinMode (PWM, OUTPUT);
}

void Tank_Drive(int FB,int LR){// attach Control Chan for Forw/Bac and Lft/Rght
 int CFB = map(FB,1000,2000,-255,255); //clean for/bac and set 1500 to 0 for center stick 
 int CLR = map(LR,1000,2000,-255,255); //clean lft/rght and set 1500 to 0 for center stick

  //do Math
  int Lspeed = CFB+CLR;
  int Rspeed = CFB-CLR;
  //do More Math For BTS drive
  if(0 < Lspeed){
    digitalWrite (LPWM0, LOW);
    analogWrite (RPWM0, Lspeed);
    digitalWrite (LPWM2, LOW);
    analogWrite (RPWM2, Lspeed);
    digitalWrite (LPWM4, LOW);
    analogWrite (RPWM4, Lspeed);
  }
  else{
    analogWrite (LPWM0,Lspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM0, LOW);
    analogWrite (LPWM2,Lspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM2, LOW);
    analogWrite (LPWM4,Lspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM4, LOW);
  }
  if(0 < Rspeed){
    digitalWrite (LPWM1, LOW);
    analogWrite (RPWM1, Rspeed);
    digitalWrite (LPWM3, LOW);
    analogWrite (RPWM3, Rspeed);
    digitalWrite (LPWM5, LOW);
    analogWrite (RPWM5, Rspeed);
  }
  else{
    analogWrite (LPWM1, Rspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM1, LOW);
    analogWrite (LPWM3, Rspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM3, LOW);
    analogWrite (LPWM5, Rspeed *-1); //for scotts motor style change digitalWrite (LPWM, High);
    digitalWrite (RPWM5, LOW);
  }
}
