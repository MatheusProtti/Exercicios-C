/*
Leia um número inteiro e informar se ele é par ou impar.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Num;
    printf("Digite Um Numero: \n");
    scanf("%d", &Num);
    if (Num % 2)
    {
        printf("O numero e impar.");
    }
    else{
        printf("O numero e par.");
    }
    return 0;
}
