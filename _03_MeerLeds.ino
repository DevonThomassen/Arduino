// ???? Welke Led zit waar aangesloten????

int ledRood = 10;
int ledGeel = 11;
int ledGroen = 12;

// Het programmablok void setup wordt eenmaal beschreven
void setup()
{                
  // ???? Wat doet de onderstaande code ????
  pinMode(ledRood, OUTPUT);
  pinMode(ledGeel, OUTPUT);
  pinMode(ledGroen, OUTPUT);  
}

// Het programmablok void loop herhaalt zich keer op keer
void loop()
{
  digitalWrite(ledRood, HIGH);   // Roodlicht aan
  delay(3000);
  digitalWrite(ledRood, LOW);    // Roodlicht uit
  digitalWrite(ledGroen, HIGH);  // Groenlicht aan
  delay(2000);
  digitalWrite(ledGroen, LOW);   // Groenlicht uit
  digitalWrite(ledGeel, HIGH);   // Geellicht aan
  delay(1000);                   // delay(ms)
  digitalWrite(ledGeel, LOW);    // Geellicht uit
}
