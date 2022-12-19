//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){


    float C, F, FC;

    printf("Informe a temperatura em Celsius:");
    scanf("%f", &C);

    FC = C/5;
    FC = (F - 32)/9;
    printf("A temperatura convertida para graus Fahrenheit: %.2f F", FC);

}