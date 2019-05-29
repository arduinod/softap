#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(115200);
  Serial.println();

  Serial.print("Setting soft-AP ... "+WiFi.macAddress());
  String ssid = "AP"+WiFi.macAddress().substring(8);
  ssid.replace(":", "");
  boolean result = WiFi.softAP(ssid, "dongdong");
  if(result == true)
  {
    Serial.println("Ready");
  }
  else
  {
    Serial.println("Failed!");
  }
}

void loop()
{
  Serial.printf("Stations connected = %d\n", WiFi.softAPgetStationNum());
  delay(3000);
}
