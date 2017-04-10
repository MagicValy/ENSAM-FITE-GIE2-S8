/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// On crée une iste contenant les ports où les diodes sont connectées
//dans l'ordre dans lequel on veut qu'elles s'allument
int ports[5] = {9,11,10,12,13};

// routine setup
void setup() {                
  // on initialise chacun des ports en output
  for(int i=0;i<5;i++){
    pinMode(ports[i], OUTPUT);     
  }
}

// routine loop
void loop() {
  //On effectue l'allumage éteignage pour chaque diode
  for(int i=0;i<5;i++){
    digitalWrite(ports[i], HIGH);   // on allume
    delay(100);               //on attend
    digitalWrite(ports[i], LOW);    // on éteint
    delay(100);               //   on attend
  }
  
}
