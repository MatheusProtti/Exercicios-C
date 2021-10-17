/*
Faça um algoritmo que leia um número e informe se ele é divisível por 3 e por 5. 
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero\n");
    scanf("%d", &numero);

    if(numero % 3 == 0)
    {
        printf("O numero %d e divisivel por 3.\n", numero);
        
    }else
    {
        printf("O numero %d, nao e divisivel por 3\n", numero);
    }
    
    if(numero % 5 == 0)
    {
        printf("O numero %d e divisivel por 5.\n", numero);
    }else
    {
        printf("O numero %d nao e divisivel por 5\n", numero);
    }

    return 0;
}
