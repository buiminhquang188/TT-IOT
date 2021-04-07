#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <ESP8266HTTPClient.h>
#include "index.h"
MDNSResponder mdns;
ESP8266WebServer server(80);



void TrangChu()
{
  server.send(200, "text/html", webpage);
}
void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  WiFi.begin("Vinh 2.4G", "46918041");
  
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected"); 
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  if (mdns.begin("esp8266", WiFi.localIP()))
  Serial.println("MDNS responder started");
  
  server.on("/", TrangChu);
  // server.on("/bat1", bat1);
  // server.on("/tat1", tat1);
  // server.on("/bat2", bat2);
  // server.on("/tat2", tat2);
  server.begin();
}
void loop()
{
  server.handleClient();
}