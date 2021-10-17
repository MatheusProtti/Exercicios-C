/*
Entrar com um número e imprimir a raiz quadrada do número caso ele seja positivo e o
quadrado do número caso ele seja negativo ou zero.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int numero;

    printf("Digite um Numero: ");
    scanf("%d", &numero);

    if(numero > 0)
    {
        float RaizQuadrada = sqrt(numero);
        printf("A raiz quadrada do numero %d e: %f\n", numero, RaizQuadrada);
    }
    if (numero == 0 || numero < 0)
    {
        float Potencia = pow((numero), 2);
        printf("O quadrado do numero %d e: %f\n", numero, Potencia);
    }
    
    return 0;
}