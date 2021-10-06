/*
Faça um algoritmo que leia dois números quaisquer e informe se o primeiro é menor, é
igual ou maior que o segundo número digitado.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Num1, Num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &Num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &Num2);

    if (Num1 > Num2){
        printf("O primeiro Numero e maior que o segundo! \n");
    }
    if(Num1 < Num2){
        printf("O primeiro Numero e menor que o segundo! \n");
    }
    if(Num1 == Num2){
        printf("O dois Numeros sao iguais! \n");
    }
    
    return 0;
}
