const int DARK = HIGH;   
int count =0;
void setup() {
  Serial.begin(9600);
  pinMode(D7, INPUT);
}                    
void loop() {
    if (digitalRead(D7) == DARK) 
    {
        Serial.println("high");
        count++;
    }
    else
    {

    }
    
}
