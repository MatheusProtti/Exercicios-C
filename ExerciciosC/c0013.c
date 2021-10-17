/*
Faça um programa que leia 2 números e imprima uma mensagem dizendo se são iguais ou
diferentes.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
   int numero1, numero2;

    printf("Digite o Numero1: ");
    scanf("%d", &numero1);
    printf("Digite o Numero2: ");
    scanf("%d", &numero2);

    if(numero1 == numero2)
    {
        printf("Os Numeros '%d' '%d' sao Iguais\n", numero1, numero2);
    }else
    {
        printf("Os Numeros '%d' '%d' sao Diferentes\n", numero1, numero2);
    }
    

    return 0;
}