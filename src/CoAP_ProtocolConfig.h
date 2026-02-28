#ifndef CoAP_ProtocolConfig
#define CoAP_ProtocolConfig

#include <WiFiUdp.h>
#include <coap-simple.h>
#include <DHT.h>

#define DHT_Pin 4
#define DHT_Type DHT11
#define LED_Pin 2

WiFiUDP udp;
Coap my_coap(udp);
DHT dht(DHT_Pin, DHT_Type);

void handleGetTemp(CoapPacket &packet, IPAddress ip, int port) {
  float temp = dht.readTemperature();
  String payload = String(temp);
  my_coap.sendResponse(ip, port, packet.messageid, payload.c_str());
  Serial.printf("-> Nhiệt độ hiện tại: %.3f", temp);
}

void handlePutLed(CoapPacket &packet, IPAddress ip, int port){
  String message = "";
  for (int i = 0; i < packet.payloadlen; i++) {
    message += (char)packet.payload[i];
  }

  if (message == "ON") digitalWrite(LED_Pin, HIGH);
  if (message == "OFF") digitalWrite(LED_Pin, LOW);

  my_coap.sendResponse(ip, port, packet.messageid, "OK");
}

void DHTAndLedStartup()
{
  pinMode(LED_Pin, OUTPUT);
  dht.begin();
}

void CoAPStartup()
{
  my_coap.server(handleGetTemp, "temp");
  my_coap.server(handlePutLed, "led");
  my_coap.start();
}

#endif
