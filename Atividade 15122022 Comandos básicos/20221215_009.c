//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    int num1INT, num2INT;
    float num3R, calculo;

    printf("Informe o primeiro numero inteiro:");
    scanf("%d", &num1INT);

    printf("Informe o segundo numero inteiro:");
    scanf("%d", &num2INT);

    printf("Informe o terceiro numero sendo real:");
    scanf("%f", &num3R);

    calculo = ((num1INT*2)*(num2INT/2))+(3*num1INT+(num3R*num3R*num3R));
    printf("O produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo: %.2f ", calculo);

}