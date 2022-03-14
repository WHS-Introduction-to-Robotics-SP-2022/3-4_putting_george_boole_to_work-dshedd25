/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;
int y;
int redLED = 6;
int waitTime = 300;
void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(6, OUTPUT);
    
    while (x < 4) {
        
        Serial.print("Cycle no");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite((x + 7), HIGH);
        delay(2000);
        x = x + 1;
    }
    for (y = 0; y < 255; y=y+1) {
        analogWrite(6 , y);
        delay(100);
    }
    
    
    
    
    
    
}




void loop()
{

}
