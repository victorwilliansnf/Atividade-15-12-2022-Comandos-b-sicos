//
// Created by victo on 18/12/2022.
//
#include <stdio.h>
int main (){

    int nota1, nota2, nota3, nota4, media;

    printf("Digite a nota do primeiro bimestre:\n");
    scanf("%d", &nota1);

    printf("Digite a nota do segundo bimestre:\n");
    scanf("%d", &nota2);

    printf("Digite a nota do terceiro bimestre:\n");
    scanf("%d", &nota3);

    printf("Digite a nota do quarto bimestre:\n");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("A media das notas bimestrais: %d\n", media);
}