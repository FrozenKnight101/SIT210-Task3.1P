// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

DHT dht(A0,DHT11); //DHT Pin and Type


void setup() 
   {
    dht.begin(); 
   }

void loop() 
   {
     
    float temp = dht.getTempCelcius();
    Particle.publish("temp",String(temp),PRIVATE);
    delay(30s); // 30 second intrval
    

   }