/*
Faça um algoritmo que leia um número inteiro qualquer e ao final mostre na tela: 
1) O dobro do número que foi digitado
2) A sua terça parte
3) O seu antecessor
4) O seu sucessor
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, dobro, antecessor, sucessor, terparte;

    printf("Digite um Numero: \n");
    scanf("%d", &num);

    dobro = num*2;
    terparte = num/3;
    sucessor = num+1;
    antecessor = num-1;

    printf("O dobro do numero que foi digitado: %d\n", dobro);
    printf("A sua terca parte: %d\n", terparte);
    printf("O seu antecessor: %d\n", antecessor);
    printf("O seu sucessor: %d\n", sucessor);

    return 0;
}
