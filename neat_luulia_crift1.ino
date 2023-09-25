byte pins[] = {2,3,4,5,6,7,8,9};
byte val[] = {
  0b11001110,
  0b10110110,
  0b10000110,
  0b01001110,
  0b00101110
};
void setup() {
  
 Serial.begin(9600);
 for(byte i = 0;i<=7;i++)
 {
  pinMode(pins[i], OUTPUT);
 }
}
void loop() {
if(Serial.available()>0)
{
  char reading = Serial.read(); 
  for(byte i = 0;i<=7 && reading>=65 && reading <=69;i++)
  {
   digitalWrite(pins[i], val[reading-65]&128>>i);
  }
}
}
//character 'A' for mode one
//character 'B' for mode two
//character 'C' for mode three
//character 'D' for mode four
//character 'E' for mode five :)