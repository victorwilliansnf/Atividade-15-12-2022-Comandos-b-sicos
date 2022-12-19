//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    float raio, areacirculo, pi;

    printf("Digite o raio do circulo para a area ser calculada:\n");
    scanf("%f", &raio);

    pi = 3.14;
    areacirculo = (raio*raio)*pi;
    printf("A area do circulo: %.2f\n", areacirculo);
}