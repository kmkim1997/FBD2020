//upload this on the Arduino which gets layers' buttons

//this Arduino only uses SoftwareSerial communication

//enable software serial communication with other Arduino
#include <SoftwareSerial.h>
SoftwareSerial button(12, 13); //SoftwareSerial pin

int state2 = 1, state3 = 1, state4 = 1, state5 = 1, state6 = 1, state7 = 1, state8 = 1, state9 = 1, state10 = 1, state11 = 1;

void setup()
{
    pinMode(2, INPUT); //button input
    pinMode(3, INPUT); //button input
    pinMode(4, INPUT); //button input
    pinMode(5, INPUT); //button input
    pinMode(6, INPUT); //button input
    pinMode(7, INPUT); //button input
    pinMode(8, INPUT); //button input
    pinMode(9, INPUT); //button input
    pinMode(10, INPUT); //button input
    pinMode(11, INPUT); //button input
    button.begin(9600); //begin SoftwareSerial communication, BPS:9600
}

void loop()
{
    int a; //get button status
    char data;

    a = digitalRead(2);
    if (a == 1 && state2 == 1) {
        data = 'A';
        state2 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state2 = 1;

    a = digitalRead(3);
    if (a == 1 && state3 == 1) {
        data = 'B';
        state3 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state3 = 1;

    a = digitalRead(4);
    if (a == 1 && state4 == 1) {
        data = 'C';
        state4 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state4 = 1;

    a = digitalRead(5);
    if (a == 1 && state5 == 1) {
        data = 'D';
        state5 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state5 = 1;

    a = digitalRead(6);
    if (a == 1 && state6 == 1) {
        data = 'E';
        state6 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state6 = 1;

    a = digitalRead(7);
    if (a == 1 && state7 == 1) {
        data = 'F';
        state7 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state7 = 1;

    a = digitalRead(8);
    if (a == 1 && state8 == 1) {
        data = 'G';
        state8 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state8 = 1;

    a = digitalRead(9);
    if (a == 1 && state9 == 1) {
        data = 'H';
        state9 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state9 = 1;

    a = digitalRead(10);
    if (a == 1 && state10 == 1) {
        data = 'I';
        state10 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state10 = 1;

    a = digitalRead(11);
    if (a == 1 && state11 == 1) {
        data = 'J';
        state11 = 0;
        button.write(data); //send the data to other Arduino
    }
    if (a == 0)
        state11 = 1;
}