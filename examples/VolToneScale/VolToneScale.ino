/* Use the volTone() function to play a musical scale 
   playing each note at low then high volume
*/

#include <VolTone.h>

// Speaker pins
const int toneOut1 = A2;
const int toneOut2 = 2;

const int note[] = {
   131,  147,  165,  175,  196,  220,  247,
   262,  294,  330,  349,  392,  440,  494,
   523,  587,  659,  698,  784,  880,  988,
  1047, 1175, 1319, 1397, 1568, 1760, 1976,
  2093//, 2349, 2637, 2794, 3136, 3520, 3951,
//  4186, 4699, 5274, 5588, 6272, 7040, 7902
};

void setup() {
  // Set Arduboy display control pins as outputs so they don't float
  pinMode(12, OUTPUT);	// reset
  digitalWrite(3, LOW);
  pinMode(4, OUTPUT);	// DC
  digitalWrite(4, LOW);
  pinMode(6, OUTPUT);	// CS
  digitalWrite(6, LOW);
  pinMode(15, OUTPUT);	// SCLK
  digitalWrite(15, LOW);
  pinMode(16, OUTPUT);	// MOSI
  digitalWrite(16, LOW);
}

void loop() {
  for (unsigned int thisNote = 0; thisNote < sizeof(note)/sizeof(note[0]); thisNote++) {
    volTone(toneOut1, toneOut2, false, note[thisNote]);
    delay(500);
    noVolTone(toneOut1, toneOut2);
    volTone(toneOut1, toneOut2, true, note[thisNote]);
    delay(500);
    noVolTone(toneOut1, toneOut2);
  }
  delay(1000);
}

