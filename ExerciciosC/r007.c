/*
Faça um programa que leia dois valores inteiros e apresente o números que estão entre
estes valores. Garanta que o primeiro valor lido seja menor que o segundo.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int val1, val2, i;

    printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);

    if (val1 > val2)
    {
        printf("O primeiro numero tem que ser menor que que o segundo!");
    
    }else{
        for ( i = val1 + 1; i < val2; i++)
        {
            printf("%3.d", i);
        }
        
    }    

    return 0;
}
