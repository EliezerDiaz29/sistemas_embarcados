#include <Servo.h>

#include <SoftwareSerial.h>
 
int pos = 0;

int sensorPos = 0;

int sensorVel = 0;

int i = 0;
 
Servo servo_7;
 
void setup()

{

  servo_7.attach(7);

  pinMode(A0, INPUT);

  pinMode(A1, INPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);
 
}
 
int defVel(int vel){

  if(vel >= 1000){

    return 30;

  } else if(vel >= 800){

    return 25;

  } else if (vel >= 600){

    return 20;

  } else if (vel >= 400){

    return 15;

  } else if (vel >= 200){

    return 10;

  } else {

    return 5;

  }

}
 
void loop()

{
 
   sensorPos = analogRead(A0);

   sensorVel = analogRead(A1);

   pos = map(sensorPos,0,1023,0,180);

  Serial.print("sensorPos ");

  Serial.println(sensorPos);

  Serial.print("sensorVel ");

  Serial.println(sensorVel);

  Serial.print("pos ");

  Serial.println(pos); 

  for (i = 0; i <= pos; i++) {

    // tell servo to go to position in variable 'pos'

    servo_7.write(i);

    // wait 15 ms for servo to reach the position

    delay(defVel(sensorVel)); // Wait for 15 millisecond(s)

  }

  for (i= pos; i >= 0; i --) {

    // tell servo to go to position in variable 'pos'

    servo_7.write(i);

    // wait 15 ms for servo to reach the position

    delay(defVel(sensorVel)); // Wait for 15 millisecond(s)

  }

}
 
 