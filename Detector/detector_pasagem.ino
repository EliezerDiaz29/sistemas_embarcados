int LDR = A0;
int PIEZO = 7;
int valorLDR = 0;
 
void setup() {
  pinMode(LDR, INPUT);
  pinMode(PIEZO, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  if(valorLDR < 550){
  	tone(PIEZO, 500, 127);
  }
  valorLDR=analogRead(LDR);
  Serial.print("Valor lido pelo LDR = ");
  Serial.println(valorLDR);
}