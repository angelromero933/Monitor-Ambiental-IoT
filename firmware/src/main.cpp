#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22
#define GAS_PIN 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  dht.begin();

  pinMode(GAS_PIN, INPUT);

  Serial.println("Smart Home Digital Twin Started");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int gasStatus = digitalRead(GAS_PIN);

  Serial.println("----- Sensor Data -----");

  if (!isnan(temperature) && !isnan(humidity)) {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  } else {
    Serial.println("Failed to read DHT22!");
  }

  if (gasStatus == HIGH) {
    Serial.println("Gas Detected!");
  } else {
    Serial.println("No Gas Detected");
  }

  Serial.println();

  delay(2000);
}