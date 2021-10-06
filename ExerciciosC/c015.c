/*
Entrar com dois números e imprimir o menor número.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Digite o Primeiro Numero ");
    scanf("%d", &num1);
    printf("Digite o Segundo Numero ");
    scanf("%d", &num2);

    if(num1 < num2){
        printf("Menor Numero foi: %d", num1);
    }
    if(num2 < num1){
        printf("Menor Numero foi: %d", num2);
    }

    return 0;
}
