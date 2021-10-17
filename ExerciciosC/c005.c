/*
Escreva um algoritmo que leia dois valores inteiros e informe se o primeiro é divisível
pelo segundo valor lido ou se o segundo é divisível pelo primeiro.
*/
#include <stdio.h>

int main()
{
    int numero1, numero2;

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &numero1);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &numero2);

    if(numero1 % numero2 == 0) 
    {
        printf("O Primeiro Valor: %d e divisivel pelo Segundo Valor: %d.\n", numero1, numero2);
    }else
    {
        printf("O Primeiro Valor: %d nao e divisivel pelo Segundo Valor: %d.", numero1, numero2);
    }
    
    if (numero2 % numero1 == 0)
    {
        printf("O Segundo Valor: %d e divisivel pelo Primeiro Valor: %d.", numero2, numero1);
    }else
    {
        printf("O Segundo Valor: %d nao e divisivel pelo Primeiro Valor: %d.", numero2, numero1);
    }
    
    

    return 0;
}
