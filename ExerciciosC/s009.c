/*
Dado um sistema de equações lineares e as fórmulas de resolução: 
ax + by = c 
dx + ey = f 
x = ( ce − bf ) / (ae − bd ) e 
y = (af − cd ) / (ae − bd )
Elabore um programa para ler os coeficientes (a, b, c, d, e, f) e apresentar x e y
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f;
    float x, y;

    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);
    printf("Digite D: ");
    scanf("%d", &d);
    printf("Digite E: ");
    scanf("%d", &e);
    printf("Digite F: ");
    scanf("%d", &f);

    x = ((c*e) - (b*f)) / ((a*e) - (b*d));
    y = ((a*f) - (c*d)) / ((a*e) - (b*d));

    //c = (a*x) + (b*y);
    //f = (d*x) + (e*y);

    printf("%d\n", x);
    printf("%d\n", y);
    //printf("%d\n", c);
    //printf("%d\n", f);



    return 0;
}
