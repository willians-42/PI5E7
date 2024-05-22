// Libraries
#include "WifiConnect.hpp"
#include "rfidStuff.hpp"

// WiFi network
const char* ssid     ="";
const char* password = "";

//Server IP
String serverName = "http://192.168.1.106:1880/update-sensor";

void setup(){
  setupWifiConnection(ssid, password);
  setupRFID();
}

void loop(){
  loopRFID();
}