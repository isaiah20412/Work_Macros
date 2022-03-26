#include <Arduino.h>
#line 1 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
//Libraries
#include <Adafruit_SSD1306.h>

//Define names for pins
//Outputs
#define button1 = 1;
#define button2 = 2;
#define button3 = 3;
#define button4 = 6;
#define button5 = 7;
#define button6 = 8;
#define button7 = 9;

//Arrays for initializing things
const int inputs[7] = {1, 2, 3, 6, 7, 8, 9};


#line 18 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
void setup();
#line 31 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
void loop();
#line 18 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
void setup()
{
    //Setup serial communication
	Serial.begin(115200);
    
    //Initialize inputs
    for (int i = 0; i < 7; i++)
    {
        pinMode(inputs[i], INPUT);        
    }
    
}

void loop()
{
    
}

