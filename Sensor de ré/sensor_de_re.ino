const int BUZZER = 7;

const int RGB_VERMELHO = 8;

const int RGB_VERDE = 10;

const int RGB_AZUL = 9;

const int ECHO = 11;

const int TRIG = 12;

int atraso = 2000;
 
 
void setup()

{

  Serial.begin(9600);

  pinMode(TRIG,OUTPUT);

  pinMode(ECHO,INPUT);

  pinMode(RGB_VERMELHO, OUTPUT);

  pinMode(RGB_VERDE, OUTPUT);

  pinMode(RGB_AZUL, OUTPUT);

  pinMode(BUZZER, OUTPUT);

}
 
void loop()

{

  int distancia = sensor_re(TRIG,ECHO);

  Serial.println(distancia);

  if(distancia < 50){

    vermelho();

    atraso = 300;

  }else if(distancia < 100){

    amarelo();

    atraso = 1000;

  }else {

    verde();

    atraso = 2000;

  }

  tone(BUZZER, 2000, 500);

  delay(atraso);

}
 
int sensor_re(int pinotrig, int pinoecho)

{

  digitalWrite(pinotrig,LOW);

  delayMicroseconds(2);

  digitalWrite(pinotrig,HIGH);

  delayMicroseconds(10);

  digitalWrite(pinotrig,LOW);

  return pulseIn(pinoecho,HIGH)/58;

}
 
void verde()

{

  digitalWrite(RGB_VERMELHO, LOW);

  digitalWrite(RGB_AZUL, LOW);

  digitalWrite(RGB_VERDE, HIGH);

}
 
void amarelo()

{

  digitalWrite(RGB_VERMELHO, HIGH);

  digitalWrite(RGB_AZUL, LOW);

  digitalWrite(RGB_VERDE, HIGH);

}
 
void vermelho()

{

  digitalWrite(RGB_VERMELHO, HIGH);

  digitalWrite(RGB_AZUL, LOW);

  digitalWrite(RGB_VERDE, LOW);

}
 