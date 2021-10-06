/*
Faça um algoritmo que leia dois valores e mostre o ponto percentual de acréscimo ou
diminuição que ocorreu entre o primeiro e segundo valor.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int val1, val2, percentual, acrescimo, diminuicao;

    printf ("Digite o primeiro valor: ");
    scanf("%d", &val1);

    printf("Digite o segundo valor: ");
    scanf("%d", &val2);

    if(val1 < val2){
        acrescimo = val2 - val1;

        printf("acrescimo %d", acrescimo);
    }
    if(val1 > val2){
        diminuicao = val1 - val2;
        printf("diminuicao de %d", diminuicao);
    }

    return 0;
}