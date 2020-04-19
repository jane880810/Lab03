const byte potPin = A1;
double Vin,sensorValue,sensorVoltage,R1;
double  ResisterValue = 4095;
int val,i;

void setup() { 
  Serial.begin(9600);
}

void loop() {

  for ( i=0 ; i<=5 ; i++ )
      sensorValue =  0.7* sensorValue + 0.3* analogRead (A1) ;
  sensorVoltage = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * ResisterValue / 2.5;
  Serial.println(sensorValue);//分壓電壓
  Serial.println(sensorVoltage);//正常電壓
  Serial.println(R1);//目前測量電阻值
  delay(500);
}
