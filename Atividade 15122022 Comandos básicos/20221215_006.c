//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    int  horasmes;
    float valorporhora, salariomes;

    printf("Informe quanto ganha por hora:");
    scanf("%f", &valorporhora);

    printf("Informe quantas horas trabalhou no mes:");
    scanf("%d", &horasmes);

    salariomes = valorporhora*horasmes;
    printf("Seu salario referente ao mes: R$ %.2f", salariomes);

}