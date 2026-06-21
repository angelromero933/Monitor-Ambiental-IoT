#include <Arduino.h>
#define LED_BUILTIN 2  

void setup() {
  // Configurar el pin del LED como salida
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Encender LED
  delay(500);                        // Esperar 500 ms (0.5 segundos)
  digitalWrite(LED_BUILTIN, LOW);    // Apagar LED
  delay(500);                        // Esperar 500 ms
}