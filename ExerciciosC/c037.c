/*
Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes
categorias: 
Fraldinha = 2 – 4 anos; 
Infantil A = 5 - 7 anos; 
Infantil B = 8-10 anos; 
Juvenil A = 11-13 anos; 
Juvenil B = 14-17 anos; 
Adulto = maiores de 18 anos. 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade == 0){
        printf("Idade recusada\n");
    }
    if(idade > 0 && idade <= 4){
        printf("Categoria Fraldinha\n");
        
    }
    else if(idade >= 5 && idade <= 7){
        printf("Categoria Infantil A\n");

    }
    else if(idade >= 8 && idade <= 10){
        printf("Categoria Infantil B\n");

    }
    else if(idade >= 11 && idade <= 13){
        printf("Categoria Juvenil A\n");

    }
    else if(idade >= 14 && idade <= 17){
        printf("Categoria Juvenil B\n");

    }
    else if(idade >= 18){
        printf("Categoria Adulto\n");

    }

    return 0;
}
