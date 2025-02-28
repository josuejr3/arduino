// Criando um semáforo com Arduino

#include <Arduino.h>

#define RED_LED 8
#define YELLOW_LED 9
#define GREEN_LED 10


void setup() {
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
}

void red(int tmp){
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    delay(tmp  * 1000);
}

void yellow(int tmp){
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    delay(tmp * 1000);
}

void green(int tmp){
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    delay(tmp * 1000);
}


void loop() {
    red(7);
    green(9);
    yellow(2);
}