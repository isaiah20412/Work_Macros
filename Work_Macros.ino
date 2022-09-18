// Libraries
#include <Adafruit_SSD1306.h>
#include <Keyboard.h>

// Screen Information
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1    // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Define names for pins
// Outputs
#define button1 1
#define button2 2
#define button3 3
#define button4 6
#define button5 7
#define button6 8
#define button7 9

// Booleans
int bState = 0;
int pbState = 0;
bool press = false;

// Arrays for initializing things
const int inputs[7] = {1, 2, 3, 6, 7, 8, 9};

void setup()
{
  // Setup serial communication
  Serial.begin(115200);

  // Initialize inputs
  for (int i = 0; i < 7; i++)
  {
    pinMode(inputs[i], INPUT_PULLDOWN);
  }
  Serial.begin(9600);
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ; // Don't proceed, loop forever
  }

  // Clear anything in the buffer, then create a welcome screen
  display.clearDisplay();
  display.display();
  // Text in the yellow area of the display
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(17, 0);
  display.println("Shortcuts");
  display.display();

  // Initialize Keyboard Emulation
  Keyboard.begin();
}

void loop()
{
  bState = digitalRead(button1);
  if (bState != pbState)
  {
    // pbState = bState;
    press = true;
  }

  if (press == true && digitalRead(button1) == LOW)
  {
    press = false;
    Keyboard.print("S/O one day.");
    pbState = 0;
  }
}