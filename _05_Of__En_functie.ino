int knop1 = 2;            // knop aan pin 2
int knop2 = 3;            // knop aan pin 3
int led =  13;            // led aan pin 13
int toestandknop1 = 0;    // variabele voor het lezen van de knop 1
int toestandknop2 = 0;    // variabele voor het lezen van de knop 2

void setup()
{
	pinMode(led, OUTPUT);       //ledpin is output    
	pinMode(knop1, INPUT);      //knop1 is input 
	pinMode(knop2, INPUT);      //knop2 is input   
}
void loop()
{
	toestandknop1 = digitalRead(knop1); //toestandknop is de waarde van knop1
	toestandknop2 = digitalRead(knop2); //toestandknop is de waarde van knop2
	if (toestandknop1 ^ toestandknop2)
	{    
		digitalWrite(led, HIGH);        // lamp gaat aan
	}   
	else
	{
		digitalWrite(led, LOW);         // lamp gaat uit
	}
} 
