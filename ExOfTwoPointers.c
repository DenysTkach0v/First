//
// Created by tkach on 12.01.2026.
//
#include <stdio.h>

// Дані з двох різних датчиків
int sensorA[] = {10, 12, 15};
int sensorB[] = {99, 100, 101};

// Функція, яка "підключає" наш вказівник до потрібного датчика
void selectSensor(int sensorID, int **activeSensor) {
    if (sensorID == 1) {
        *activeSensor = sensorA; // Записуємо адресу масиву A в наш покажчик
    } else {
        *activeSensor = sensorB; // Записуємо адресу масиву B в наш покажчик
    }
}

int main() {
    int *currentData = NULL; // Поки що нікуди не вказує

    // 1. Просимо функцію підключити нас до датчика №1
    selectSensor(1, &currentData);
    printf("Sensor 1 first value: %d\n", currentData[0]); // Виведе 10

    // 2. Просимо переключитися на датчик №2
    selectSensor(2, &currentData);
    printf("Sensor 2 first value: %d\n", currentData[0]); // Виведе 99

    return 0;
}