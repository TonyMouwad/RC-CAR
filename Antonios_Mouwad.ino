// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

int buzzer = 0;
int triggerB = 0;
int echoB = 0;
int triggerF = 0;
int echoF = 0;

int rs = 0;
int en = 0;
int d4 = 0;
int d5 = 0;
int d6 = 0;
int d7 = 0;

void setup() {
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
  pinMode(enC, OUTPUT);
	pinMode(enD, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	pinMode(in5, OUTPUT);
	pinMode(in6, OUTPUT);
	pinMode(in7, OUTPUT);
	pinMode(in8, OUTPUT);

   lcd.begin(16, 2);

}

void loop() {

     name();
  
     program();
         
}


void foward(){
      //speed    
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    analogWrite(enC, 255);
    analogWrite(enD, 255);

    // Turn on motor A & B 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}

void back(){
      //speed    
    analogWrite(enA, 255);
    analogWrite(enB, 255);
    
    // Turn on motor A & B 
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

void right(){
      //speed    
    analogWrite(enA, 255);
    analogWrite(enB, 100);
    
    // Turn on motor A & B
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}

void left(){
      //speed    
    analogWrite(enA, 150);
    analogWrite(enB, 255);
    
    // Turn on motor A & B
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}

void rightB(){
      //speed    
    analogWrite(enA, 255);
    analogWrite(enB, 100);
    
    // Turn on motor A & B
    digitalWrite(in2, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in3, LOW);
}

void leftB(){
      //speed    
    analogWrite(enA, 150);
    analogWrite(enB, 255);
    
    // Turn on motor A & B
    digitalWrite(in2, HIGH);
    digitalWrite(in1, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in3, LOW);
}

void zero(){  ////brakes
      //speed    
    analogWrite(enA, 0);
    analogWrite(enB, 0);
}

void beep(){
  tone(buzzer, 9000)
  delay(700);
  tone(buzzer, 0)

}

void craked(){/***********************************************/
  if ( destnice == 5)
}


        
    }
       
  }

   


void name(){/*******/
  word namee = Serial.read();
  lcd.setCursor(0, 1);
  lcd.print(namee);
}
 

           void program(){  
  
  String read = Serial.read();

  //back_sensor
  digitalWrite (triggerB,LOW);
  delayMicroseconds (10);
  digitalWrite (triggerB,HIGH);
  delayMicroseconds (10);  
  digitalWrite (triggerB,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echoB,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2;

  //front_sensor
  digitalWrite (triggerF,LOW);
  delayMicroseconds (10);
  digitalWrite (triggerF,HIGH);
  delayMicroseconds (10);  
  digitalWrite (triggerF,LOW);
  delayMicroseconds (10);  
  float t = pulseIn (echoF,HIGH);
  float DIS = 343*0.00001*t;//distance in dcmeter
  int DF = DIS /2;


 
    
// parking sensor
   if (d==15)//1.5
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);  
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('150cm');
  }
  
  else if (d==14)//1.4
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);
    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('140cm');
  }
  
  else if (d==13)//1.3
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('130cm');
  }
  
  else if (d==12)//1.2
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('120cm');
  }
  
  else if (d==11)//1.1
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('110cm');
  }
  
  else if (d==10)//1.0
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);
    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('100cm');
  }
  
  else if (d==9)//0.9
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);
    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 90cm');
  }
  
  else if (d==8)//0.8
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 80cm');
  }
  
  else if (d==7)//0.7
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 70cm');
  }
  
  else if (d==6)//0.6
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 60cm');
  }
  
  else if (d==5)//0.5
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 50cm');
  }
  
  else if (d==4)//0.4
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 40cm');
  }
  
  else if (d==3)//0.3
  {
  int freq = map (d,15,3,2000,7000);
  tone (buzzer,freq);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print(' 30cm');
  }
  
  else if (d< 3){             //0.2--->0
    tone (buzzer,9000);
      
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('*PARK');
    delay(500);
    lcd.setCursor( 8,1);
    lcd.print('<02cm');
  }
  
  else if (d > 15)
  {
  noTone(buzzer);    
    ///lcd.printing
    lcd.setCursor( 8,1);
    lcd.print('(^_^)');//////////////////////////////////////////////////////////////here
  delayMicroseconds (10);
      
       if (DF =< 5){   //// brakes < 50CM
          zero();
          delay(500);
          back();
          delay(2000);
       }

       else if (DF > 5){
                if ( read == 'F') {
            foward();
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('foward');
          }
        
          else if  ( read == 'B') {
            back();
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('back  ');
          }
        
          else if  ( read == 'R') {
            right();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('right ');
          }
        
          else if  ( read == 'L') {
            left();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('left  ');
          }
          
          else if  ( read == 'I') {
            right();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('right ');
          }
        
          else if  ( read == 'G') {
            left();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('left  ');
          } 
        
          else if  ( read == 'H') { 
            rightB();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('rightB');
          }
        
          else if  ( read == 'J') {
            leftB();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('leftB ');
          }
          
          else if  ( read == 'D') {
            zero();
            
            ///lcd.printing
            lcd.setCursor(0, 1);
            lcd.print('brakes');
            delay(500);
          } 
        
          
        
          delay(500);
          program();
      }
    }
  }
