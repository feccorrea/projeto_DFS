int pinoSensor = 0;
int valorLido = 0;
float temperatura = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Temperatura");
}
void loop() {
  valorLido = analogRead(pinoSensor);
  temperatura = (valorLido * 0.00488);
  temperatura = temperatura * 100;
  Serial.println(temperatura);

  delay(60000);
}
