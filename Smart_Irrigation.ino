#define BLYNK_TEMPLATE_ID "TMPL3P1TZPfcH" 
#define BLYNK_TEMPLATE_NAME "Projectwin" 
#define 
BLYNK_AUTH_TOKEN 
FtZgUxoPSTaj" 
#include <WiFi.h> 
#include <BlynkSimpleEsp32.h> 
const char* ssid = "Cheran's Galaxy A34 5G"; 
const char* password = "ch090604"; 
#define SOIL_PIN 32 
#define FLOAT_PIN 34 
#define RELAY1_PIN 18 
#define RELAY2_PIN 19 
#define BUZZER_PIN 2 
const int dryValue = 3700; 
const int wetValue = 1500; 
const int moistureThreshold = 30; 
void setup() { 
Serial.begin(115200); 
pinMode(RELAY1_PIN, OUTPUT); 
pinMode(RELAY2_PIN, OUTPUT); 
pinMode(BUZZER_PIN, OUTPUT); 
pinMode(FLOAT_PIN, INPUT);
digitalWrite(RELAY1_PIN, HIGH); 
digitalWrite(RELAY2_PIN, HIGH); 
digitalWrite(BUZZER_PIN, LOW); 
Blynk.begin(auth, ssid, pass); 
Serial.println("        
} 
void loop() { 
Blynk.run(); 
Blynk-Integrated System Ready"); 
// --- Soil Moisture --- 
int rawSoil = analogRead(SOIL_PIN); 
int moisturePercent = map(rawSoil, dryValue, wetValue, 0, 100); 
moisturePercent = constrain(moisturePercent, 0, 100); 
Blynk.virtualWrite(V0, moisturePercent);  // Send to app 
if (moisturePercent < moistureThreshold) { 
digitalWrite(RELAY1_PIN, LOW); 
} else { 
digitalWrite(RELAY1_PIN, HIGH); 
} 
// --- Float Sensor --- 
int floatState = digitalRead(FLOAT_PIN); 
Blynk.virtualWrite(V1, floatState == LOW ? "LOW (No Water)" : 
"OK");
if (floatState == LOW) { 
digitalWrite(RELAY2_PIN, LOW); 
digitalWrite(BUZZER_PIN, HIGH); 
} else { 
digitalWrite(RELAY2_PIN, HIGH); 
digitalWrite(BUZZER_PIN, LOW); 
} 
delay(1000); 
} 