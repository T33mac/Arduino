//use A0 for pot like p.64, p.36 is other reference *From basics book*
int const potPin = A0;
int potVal = 0;
int digitalPin4 = 4;
int digitalPin5 = 5;
int digitalPin6 = 6;
int digitalPin7 = 7;
int digitalPin8 = 8;
int digitalPin9 = 9;
int digitalPin10 = 10;
int digitalPin11 = 11;

//how to figure intervals in pot values to turn outputs on and off
//outputs to relays
//too many pins remove #12
//0,60,120,180,241,301,361,422,482,542,602,662,723,783,843,903,963,1023
  void setup(){
  pinMode(digitalPin4,OUTPUT);
  pinMode(digitalPin5,OUTPUT);
  pinMode(digitalPin6,OUTPUT);
  pinMode(digitalPin7,OUTPUT);
  pinMode(digitalPin8,OUTPUT);
  pinMode(digitalPin9,OUTPUT);
  pinMode(digitalPin10,OUTPUT);
  pinMode(digitalPin11,OUTPUT);
  
    digitalWrite(digitalPin4,HIGH);
    digitalWrite(digitalPin5,HIGH);
    digitalWrite(digitalPin6,HIGH);
    digitalWrite(digitalPin7,HIGH);
    digitalWrite(digitalPin8,HIGH);
    digitalWrite(digitalPin9,HIGH);
    digitalWrite(digitalPin10,HIGH);
    digitalWrite(digitalPin11,HIGH);
   delay(1000);
   Serial.begin(9600);
}
void loop(){
  potVal = analogRead(potPin);//read pot value
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.print("digitalPin4: ");
  Serial.print(digitalPin4);

  //0,60,120,180,241,301,361,422,482,542,602,662,723,783,843,903,963,1023
  //0,15,30 , 45, 60, 75, 90,105,120,135,150,165,180,195,210,225,240,255
  //0,53,106,159,212,265,318,371,424,477,530,583,636,689,742,795,848,901
  //Setting if statements. might have to do low statements, too.
  //ccw=1023 cw=0
  {
  if(potVal < 158) digitalWrite(digitalPin4, LOW);//add if """LOW then if""""HIGH
  if(potVal > 0) digitalWrite(digitalPin4, LOW);//ex. pin 6-11 low
  }
  {
  if(potVal < -3) digitalWrite(digitalPin4, HIGH);
  if(potVal > 159) digitalWrite(digitalPin4, HIGH);
  }
  {
  if(potVal < 264) digitalWrite(digitalPin5, LOW);
  if(potVal > 107) digitalWrite(digitalPin5, LOW);//7-11 HIGH
  }
  {
  if(potVal < 106) digitalWrite(digitalPin5, HIGH);
  if(potVal > 265) digitalWrite(digitalPin5, HIGH);
  }
  {
  if(potVal < 370) digitalWrite(digitalPin6, LOW);
  if(potVal > 213) digitalWrite(digitalPin6, LOW);//4 LOW 8-11 HIGH
  }
  {
  if(potVal < 212) digitalWrite(digitalPin6, HIGH);
  if(potVal > 371) digitalWrite(digitalPin6, HIGH);
  }
  {
  if(potVal < 476) digitalWrite(digitalPin7, LOW);
  if(potVal > 319) digitalWrite(digitalPin7, LOW);//4-5 low 9-11 HIGH
  }
  {
  if(potVal < 318) digitalWrite(digitalPin7, HIGH);
  if(potVal > 477) digitalWrite(digitalPin7, HIGH);
  }
  {
  if(potVal < 582) digitalWrite(digitalPin8, LOW);
  if(potVal > 425) digitalWrite(digitalPin8, LOW);//4-6 low 10-11 HIGH
  }
  {
  if(potVal < 424) digitalWrite(digitalPin8, HIGH);
  if(potVal > 583) digitalWrite(digitalPin8, HIGH);
    }
    {
  if(potVal < 688) digitalWrite(digitalPin9, LOW);
  if(potVal > 531) digitalWrite(digitalPin9, LOW);//4-7 low 11 HIGH
    }
    {
  if(potVal < 530) digitalWrite(digitalPin9, HIGH);
  if(potVal > 689) digitalWrite(digitalPin9, HIGH);
    }
    {
  if(potVal < 794) digitalWrite(digitalPin10, LOW);
  if(potVal > 637) digitalWrite(digitalPin10, LOW);//4-8 HIGH
    }
    {
  if(potVal < 636) digitalWrite(digitalPin10, HIGH);
  if(potVal > 795) digitalWrite(digitalPin10, HIGH);
    }
    {
  if(potVal < 900) digitalWrite(digitalPin11, LOW);
  if(potVal > 743) digitalWrite(digitalPin11, LOW);//4-9 HIGH
    }
    {
  if(potVal < 742) digitalWrite(digitalPin11, HIGH);
  if(potVal > 1026) digitalWrite(digitalPin11, HIGH);
    }
    
  
}
