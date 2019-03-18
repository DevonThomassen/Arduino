int analogIn = A0;  // Poort 0
int potmeter = 0;   // Declaratie

void setup()
{
	// Snelheid
	Serial.begin(9600); 
}

void loop()
{
	potmeter = analogRead(analogIn);    // Waarde van potmeter    
	Serial.print("potmeterwaarde = " ); // Print string
	Serial.println(potmeter);           // Print variable
	delay(50);                          // Delay 
}
