//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    float metros=0, centimetros=0;

    printf("Quantos metros quer converter para centimetros?");
    scanf("%f", &metros);

    centimetros = metros*100;

    printf("%.1f cm", centimetros);

}