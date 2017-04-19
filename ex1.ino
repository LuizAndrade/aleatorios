#define LED_PIN 13
#define BUT_PIN 2

int estado;
unsigned long antes;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUT_PIN, INPUT);
  estado = 0;
  antes = millis();
  Serial.begin(9000);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, estado);   // turn the LED on (HIGH is the voltage level)

  unsigned long agora = millis();
  
  if(agora >= antes + 1000)
  {
    antes = agora;
    estado = !estado; 
  }
  
  int but = digitalRead(BUT_PIN);
  if (but == LOW){
    digitalWrite(LED_PIN, HIGH);
    while(1);
  }
}
