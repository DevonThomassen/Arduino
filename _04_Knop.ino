/************************** Module Header *******************************\
Project:		  Knop
Auteur:			  Devon Thomassen
Aanmaakdatum: 20 april 2017 
Module naam:	Knop.ino

Omschrijving:
 Knop
  Als de knop (verbonden met pin2) ingedrukt wordt gaat de led 
  (verbonden met pin 13)aan.
  Zie voor de aansluiting de opdrachtenbeschrijving

\************************************************************************/

 int knop = 2;       // knop aan pin 2
 int led =  13;       // led aan pin 13
 int toestandknop = 0;   // variabele voor het lezen van de knop
 
 void setup()
 {
    // Setup digital pins
	pinMode(led, OUTPUT);
	pinMode(knop, INPUT);
  }
 void loop()
 {
	toestandknop = digitalRead(knop); // knop gedrukt HIGH || LOW
	if (toestandknop == HIGH) // als knop ingedrukt is
	{      
		digitalWrite(led, HIGH);        // lamp gaat aan
    delay(5000);
	} 
	else
	{
		digitalWrite(led, LOW);         // lamp gaat uit
	}
 } 
 
