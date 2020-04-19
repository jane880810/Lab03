char val;
const byte ledPin =13;

void setup() {

      Serial.begin(9600);
      pinMode(7,OUTPUT);
      Serial.println("Hello World");
      
}

void loop() {
 if( Serial.available() )
 {
  val = Serial.read();
  if(val=='1')
  {
    digitalWrite(7,HIGH);
    Serial.print("LED ON");
  }
  else if(val == '0')
   {
    digitalWrite(7,LOW);
    Serial.print("LED OFF");
    
   }
 }

}
