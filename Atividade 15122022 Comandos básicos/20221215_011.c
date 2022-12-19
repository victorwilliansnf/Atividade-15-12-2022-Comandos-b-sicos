//
// Created by victo on 18/12/2022.
//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
//salário bruto.
//Quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o salário líquido (Salário Líquido = Salário Bruto - Descontos)
#include <stdio.h>
int main (){

    int  horasmes;
    float valorporhora, salariobruto, salarioliquido, IR, INSS, SINDICATO;

    printf("Informe quanto ganha por hora:");
    scanf("%f", &valorporhora);

    printf("Informe quantas horas trabalhou no mes:");
    scanf("%d", &horasmes);

    salariobruto = valorporhora*horasmes;
    salarioliquido = salariobruto-(((salariobruto/100)*11)+((salariobruto/100)*8)+((salariobruto/100)*5));
    IR = ((salariobruto/100)*11);
    INSS = ((salariobruto/100)*8);
    SINDICATO = ((salariobruto/100)*5);
    printf("Salario bruto: %.2f \n", salariobruto);
    printf("Salario liquido: %.2f \n", salarioliquido);
    printf("Imposto de renda descontado do salario bruto: %.2f \n", IR);
    printf("INSS descontado do salario bruto: %.2f \n", INSS);
    printf("Imposto do Sindicato descontado do salario bruto: %.2f \n", SINDICATO);
}

