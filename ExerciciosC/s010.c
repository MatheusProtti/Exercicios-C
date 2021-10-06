/*
Faça um programa que converta Celsius para Fahrenheit.
Faça um algoritmo que leia uma temperatura dada na escala Celsius (C),
depois calcule e mostre temperatura equivalente em Fahrenheit (F):
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    double fahrenheit;
    int celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = celsius*1.8 + 32;

    printf("Em fahrenheit fica: %lf", fahrenheit); 
    return 0;
}