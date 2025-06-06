//This subject to change and not the the final code until i get the parts and prototype with them

#include <WiFi.h>
#include <time.h>
#include <GxEPD2_BW.h>
#include <Adafruit_GFX.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

const char* ntp = "pool.ntp.org";
const long gmt_offset_sec = 19800; // IST (+5:30)
const int day_offset_sec = 0;

#define CS   15
#define DC   27
#define RST  26
#define BUSY 25

GxEPD2_BW<GxEPD2_583, GxEPD2_583::HEIGHT> display(GxEPD2_583(CS, DC, RST, BUSY));

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected!");

  configTime(gmt_offset_sec, day_offset_sec, ntp);

  display.init();
  updateTimeOnEPD();
}

void loop() {
  delay(300000); 
  updateTimeOnEPD();
}

void updateTimeOnEPD() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to get time");
    return;
  }

  char date[64];
  strftime(date, sizeof(date), "%A, %d %B %Y", &timeinfo);

  char time[16];
  strftime(time, sizeof(time), "%H:%M:%S", &timeinfo);

  display.setRotation(1); 
  display.setFullWindow();
  display.firstPage();
  do {
    display.fillScreen(GxEPD_WHITE);
    display.setTextColor(GxEPD_BLACK);

    display.setFont(&FreeMonoBold18pt7b);
    display.setCursor(20, 80);
    display.print(time);

    display.setFont(&FreeMono12pt7b);
    display.setCursor(20, 130);
    display.print(date);
  } while (display.nextPage());

  Serial.println("Updated EPD:");
  Serial.println(time);
  Serial.println(date);
}
