#include <dht.h>

#define dht_dpin A1 //Pino DATA do Sensor ligado na porta Analogica A1
#define min_delay 1
#define ms_delay min_delay*60*1000

dht DHT; //Inicializa o sensor

void setup()
{
  Serial.begin(9600);
  delay(1000);//Aguarda 1 seg antes de acessar as informações do sensor
}

void loop()
{
  DHT.read11(dht_dpin); //Lê as informações do sensor

  Serial.print(DHT.humidity);
  Serial.print(";");
  Serial.print(DHT.temperature);
  Serial.print(";");
  Serial.println();

  unsigned long startMillis = millis();
  while(millis() - startMillis < (unsigned long)ms_delay);
}
