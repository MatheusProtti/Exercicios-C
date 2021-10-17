/*
Escreva um algoritmo que leia um dividendo e o seu divisor e, informe se o dividendo é
divisível pelo seu divisor.
*/
#include <stdio.h>

int main()
{
    int Dividendo, Divisor;

    printf("Digite o Dividendo: ");
    scanf("%d", &Dividendo);
    printf("Digite o Divisor: ");
    scanf("%d", &Divisor);

    if(Dividendo % Divisor == 0)
    {
        int Divisao = Dividendo/Divisor;
        printf("O Dividendo: '%d' e divisivel pelo Divisor: '%d'\n", Dividendo, Divisor);
        printf("Resultado: '%d'", Divisao);
    }else
    {
        printf("O Dividendo: '%d' nao e divisivel pelo seu divisor: '%d'", Dividendo, Divisor);
    }
    
    return 0;
}