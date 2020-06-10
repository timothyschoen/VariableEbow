#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputAnalog         adc1(A0);           //xy=191,302
AudioAnalyzeNoteFrequency notefreq1;      //xy=377,310
AudioConnection          patchCord1(adc1, notefreq1);
// GUItool: end automatically generated code

double freq = 0;

void setup() {

  notefreq1.begin(0.01);
}

void loop() {
  
  if(notefreq1.available()) {
    freq = notefreq1.read();
  }
  
  int pot = analogRead(A9);
  
  if(pot > 0.0001) {
    int multiplier = map(pot, 1012, 1, 1024, 8);
    tone(12, freq*multiplier);
  }

  delay(20);

}
