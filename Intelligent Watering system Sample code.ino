/*
	Portfolio : https://asadiiitb.github.io/
	Github : https://github.com/asadiiitb/Intelligent-Watering-System   
*/

const int dry = 595; // value for dry sensor
const int wet = 239; // value for wet sensor

void setup()
{ 
  Serial.begin(9600);
}

void loop()
{
  int sensorVal = analogRead(A0);

  // Sensor has a range of 239 to 595
  // We want to translate this to a scale or 0% to 100%
  // More info: https://www.arduino.cc/reference/en/language/functions/math/map/
  int percentageHumididy = map(sensorVal, wet, dry, 100, 0); 

  Serial.print(percentageHumididy);
  Serial.println("%");
  
  delay(100);
}
