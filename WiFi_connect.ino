#include <WiFi.h>
char ssid[] = "hhvs-iot";       //wifi SSID
char passwd[] = "Hhvs@54Iot"; //wifi passwd

void setup()
{
  Serial.begin(115200);
  WifiConnecte();      //Wifi開始連線
}

void loop()
{
  

}

 void WifiConnecte()
 {
   int connect_count=0; //宣告嘗試連線次數=0
   WiFi.mode(WIFI_STA);   //將 esp32 wifi設為工作站模式
   WiFi.begin(ssid,passwd);
   Serial.print("Start connect to:");
   Serial.println(ssid);
   Serial.print("等待連線");
   while (WiFi.status() != WL_CONNECTED)
   {
     delay(200);
     Serial.print("..");  //等待連線中 
   }
   Serial.println("Wifi連線成功");
   Serial.print("已連線至:");
   Serial.println(ssid);
   Serial.print("IP Address:");
   Serial.println(WiFi.localIP());

 } 

