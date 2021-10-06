/*
Escreva um programa que leia a idade de uma pessoa e mostre na tela quantos segundos
esta pessoa já viveu sem considerar ano bissexto.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double  IdadeSeg;
    int idade;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    IdadeSeg = idade*3157600;
    
    printf("%.lf", IdadeSeg);

    return 0;
}
