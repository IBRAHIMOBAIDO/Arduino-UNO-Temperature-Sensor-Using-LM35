#define LM35 A0
int Temp_levels=0;
float Temp_volts=0;
int Temp_value;
void setup()
{
  Serial.begin(9600);
  Serial.println("Your surronding Tempreature is :  ");
}
void loop() 
{
  Temp_levels=analogRead(LM35);
  delay(500);
  Temp_volts=(5.0/1023.0)*Temp_levels;
  Temp_value=Temp_volts/0.01;
  Serial.print(Temp_value);
  Serial.println("  Celsius");
}
