#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>
#include <ArduinoJson.h>

const char* ssid = "ORT-IoT";
const char* pass ="OrtIOTnew22$2";


#define BOTtoken "618010800:AAHTX3PiR4xNJcmeLWNjR27oos6f"
#define CHAT_ID "gaypornfree_bot"


unsigned long tiempo = 0;
unsigned long last_milis = 0;
unsigned long intervalo = 0;


void setup() {
Serial.begin(115200);
WiFi.begin(ssid,pass);
delay(2000);


  while(WiFi.status() != WL_CONNECTED){
    Serial.println(".");
    
    }
  Serial.println("conectado");
}



void loop() {
  

}
