#include <ESP8266WiFi.h>
#define BLYNK_PRINT Serial       
#include <BlynkSimpleEsp8266.h>
char auth[] = "mV3-reNNuyarU-fNp6L7t7L_AxDPwCFk";

/* WiFi credentials */
char ssid[] = "AndroidAP";
char pass[] = "efbt8187";

/* HC-SR501 Motion Detector */
#define pirPin 5                // Input for HC-S501
int pirValue;                   // Place to store read PIR Value
int pinValue;                   //Variable to read virtual pin

BLYNK_WRITE(V0)
{
 pinValue = param.asInt();    
} 

void setup()
  {
    Serial.begin(115200);
    delay(10);
    Blynk.begin(auth, ssid, pass);
    pinMode(pirPin, INPUT);
  }

void loop()
  {
     if (pinValue == HIGH)    
      {
        getPirValue();
      }
    Blynk.run();
  }

void getPirValue(void)        //Get PIR Data
  {
   pirValue = digitalRead(pirPin);
    if (pirValue) 
     { 
       Serial.println("Motion detected");
       Blynk.notify("Motion detected");  
     }
  }
