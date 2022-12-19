//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){


    float F, C;

    printf("Informe a temperatura em Fahnrenheit:");
    scanf("%f", &F);

    C = (5 * (F-32) / 9);
    printf("A temperatura convertida para graus Celsius: %.2f C*", C);

}