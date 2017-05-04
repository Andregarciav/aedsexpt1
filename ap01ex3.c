#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;
    printf("Calcular a area de um triangulo retangulo\nEscreva o primeiro lado do triangulo:\n");
    scanf("%d", &a);
    printf("Escreva o segundo lado do triangulo:\n");
    scanf("%d", &b);
    printf("Escreva o terceiro lado do triangulo:\n");
    scanf("%d", &c);
    s = (a + b + c)/2;
    area = sqrt (s * (s - a) * (s - b) * (s - c));
    printf("A area do triangulo de lados %d, %d, %d, eh:%.2f\n" , a, b, c, area);
    return 0;
}
