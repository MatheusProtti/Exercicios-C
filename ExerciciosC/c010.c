
/*
Faça um algoritmo que entre com a Nota do Grau 1 e do Grau 2 e, faça a média aritmética
dos valores digitados e informe: Aprovado se média for maior ou igual a 7 e Reprovado se
for menor que 7.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float Nota1, Nota2, MediaAritmetica;

    printf("Digite a Nota do Grau 1: ");
    scanf("%f", &Nota1);
    printf("Digite a Nota do Grau 2: ");
    scanf("%f", &Nota2);

    MediaAritmetica = ((Nota1 + Nota2)/2);

    if (MediaAritmetica >= 7)
    { 
        printf("Aprovado\n");
    }else
    {
        printf("Reprovado");
    }
    
     

    return 0;
}