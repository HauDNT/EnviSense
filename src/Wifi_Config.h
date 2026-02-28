#ifndef WIFI_CONFIG_H
#define WIFI_CONFIG_H

#include <WiFi.h>

const char *ssid = "Trong Nghia";
const char *password = "0949496465@";

void connectWifi() {
  WiFi.begin(ssid, password);
  Serial.println("Connecting to wifi...");

  unsigned long startTime = millis();
  const unsigned timeOut = 10000;

  while (WiFi.status() != WL_CONNECTED && millis() - startTime < timeOut)
  {
    delay(500);
    Serial.print(".");
  }
  
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("\nKết nối đến " + String(ssid) + " thành công!");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("\nKết nối Wifi thất bại, vượt quá thời gian!");
    exit(0);
  }
}

#endif