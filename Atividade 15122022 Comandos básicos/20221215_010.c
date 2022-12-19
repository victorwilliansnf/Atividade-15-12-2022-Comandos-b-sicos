//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    float altura, pesoideal;

    printf("Informe a sua altura:");
    scanf("%f", &altura);

    pesoideal = (72.7*altura) - 58;
    printf("O peso ideal para essa altura: %.2f ", pesoideal);

}
