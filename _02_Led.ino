/************************** Module Header *******************************\
Project:		    LED
Auteur:			    Devon Thomassen
Aanmaakdatum:   05-02-2019 09:56
Module naam:	  LED.ino

Omschrijving:	
Laat een led aan en uit schakelen, keer op keer.

\************************************************************************/

// Port 13
int led = 13;

// Bij opstart voert hij alle code in de setup uit
void setup() {                
// We geven aan dat de led-pin-aansluiting een output is (spanning op de betreffende output pin) 
	pinMode(led, OUTPUT);     
}

// Code die altijd blijft uitvoeren
void loop()
{
	digitalWrite(led, HIGH);  // zet pin 13 aan
	delay(1000);              // duur van brande lamp (1000ms = 1s)
	digitalWrite(led, LOW);   // zet pin 13 af
	delay(1000);              // duur van doofende lamp
}
