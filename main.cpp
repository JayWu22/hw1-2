#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED2);

int show[4][5] = {
    0,0,0,0,1,
    0,1,0,0,0,
    0,0,0,0,1,
    0,0,0,1,0
};

int main()
{
    for (int i=0; i < 4; i++) {
        for (int j=0; j < 5; j++) {
            if (show[i][j]==0) {
                myLED=1;
                ThisThread::sleep_for(500ms);
                myLED.write(0);
                ThisThread::sleep_for(500ms);
            } else {
                myLED2=1;
                ThisThread::sleep_for(500ms);
                myLED2.write(0);
                ThisThread::sleep_for(500ms);
            }
        }
    }
}

