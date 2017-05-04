#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, r1, r2;
    printf("Calculadora de raizes de equacoes de segundo grau\ndo tipo ax^2+bx+c\n");
    printf("Escreva o valor de a:\n");
    scanf("%d", &a);
    printf("Escreva o valor de b:\n");
    scanf("%d", &b);
    printf("Escreva o valor de c:\n");
    scanf("%d", &c);
    printf("A equacao eh %dx^2+%dx+%d", a , b , c);
    r1 = (-b + sqrt (b*b - 4 * a* c)/2*a);
    r2 = (-b - sqrt (b*b - 4 * a* c)/2*a);
    printf("As raizes sao: r1 = %d e r2 %d.", r1, r2);
}
