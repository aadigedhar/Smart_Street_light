int pin = 13;
int readvalue;
int writevalve;

void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
  
}


void loop() {
  
    digitalWrite(pin,HIGH);
    readvalue = analogRead(pin);
    writevalve = (255./1023.)*readvalue;
 
    analogWrite(a,writevalve);
    Serial.println(writevalve);
  
}

    