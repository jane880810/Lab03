int val,i;
double Vin, sensorValue, sensorVoltage,R1;
double  ResisterValue = 4095;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (i = 0; i <= 5; i++)
    sensorValue = 0.7 * sensorValue + 0.3 * analogRead(A0);
  sensorVoltage = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * ResisterValue / 2.5;

  Serial.println(R1);  
  delay(500);
}
