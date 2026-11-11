#include <Arduino.h>


int ipush = 10;
//Variable d'impulsion initialisée sur le GPIO 10

void setup()
{
  Serial.begin(9600); 
  //Moniteur série initialisée pour un affichage sur 9600 bits par seconde

  pinMode(ipush,INPUT);
  // GP10 configurée comme entrée.

}

void loop()
{
  int Mel = digitalRead(ipush);
  //Variable affichée par le moniteur série à chaque impulsion.

  Serial.println(Mel); 
  // affichage avec retour à la ligne.
  delay (1);
  //1ms entre chaque affichage.

}
