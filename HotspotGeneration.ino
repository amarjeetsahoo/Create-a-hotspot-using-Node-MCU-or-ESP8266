#include<ESP8266WiFi.h>
void setup()
{
  Serial.begin(9600);
  WiFi.softAP("YOUR WI-FI SSID NAME","CREATE A NEW PASSWORD");
}
void loop()
{
  Serial.println("No. of Connection");
  Serial.println(WiFi.softAPgetStationNum());
  delay(1000);
}
