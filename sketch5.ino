/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();

//circles
  display.drawCircle(64, 32, 10, WHITE);
  display.display();

  display.drawCircle(64, 64, 10, WHITE );
  display.display();

  display.drawCircle(90, 64, 10, WHITE);
  display.display();

  display.drawCircle(40, 64, 10, WHITE);
  display.display();

  display.drawCircle(90, 32, 10, WHITE);
  display.display();

  display.drawCircle(40, 32, 10, WHITE);
  display.display();

  display.drawCircle(40, 5, 10, WHITE);
  display.display();

  display.drawCircle(64, 5, 10, WHITE);
  display.display();

display.drawCircle(90, 5, 10, WHITE);
display.display();

 
}

void loop() {
  
}
