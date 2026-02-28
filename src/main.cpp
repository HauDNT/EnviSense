#include "Wifi_Config.h"
#include "CoAP_ProtocolConfig.h"

void setup() {
  Serial.begin(115200);
  Serial.println("Bắt đầu khởi tạo chương trình...");
  
  DHTAndLedStartup();
  connectWifi();
  CoAPStartup();

  Serial.println("Các thành phần khởi tạo hoàn tất. Chương trình bắt đầu chạy...");
}

void loop() {
  my_coap.loop();
}
