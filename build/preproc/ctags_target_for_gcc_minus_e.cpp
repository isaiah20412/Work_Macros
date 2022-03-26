# 1 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
//Libraries
# 3 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino" 2

//Define names for pins
//Outputs
# 14 "c:\\Users\\Isaiah\\Documents\\Arduino\\Sketches\\Work_Macros\\Work_Macros.ino"
//Arrays for initializing things
const int inputs[7] = {1, 2, 3, 6, 7, 8, 9};


void setup()
{
    //Setup serial communication
 SerialUSB.begin(115200);

    //Initialize inputs
    for (int i = 0; i < 7; i++)
    {
        pinMode(inputs[i], (0x0));
    }

}

void loop()
{

}
