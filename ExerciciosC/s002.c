/*
Desenvolver um programa que leia dos valores e mostre o resto da divisão do primeiro
valor digitado pelo segundo e também a exponenciação do segundo pelo primeiro valor
lido
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int Num1, Num2, RestDiv, Expo;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &Num1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &Num2);

    RestDiv = Num1 % Num2;
    Expo = pow(Num1, Num2);

    printf("O resto da divisao do primeiro valor digitado pelo segundo e: %d \n", RestDiv);
    printf("A exponenciacao do segundo pelo primeiro valor e:  %d \n", Expo);

    return 0;
}
