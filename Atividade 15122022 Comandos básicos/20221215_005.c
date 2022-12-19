//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    int ladoquadrado, area, dobroarea;

    printf("Informe o lado do quadrado para calcular o dobro da area:");
    scanf("%d", &ladoquadrado);

    area = ladoquadrado*ladoquadrado;
    dobroarea = area*2;
    printf("O dobro da area do quadrado: %d", dobroarea);

}