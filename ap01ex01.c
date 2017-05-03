#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265
int main()
{
    double angulo, resultado;
    printf("Escreva seu angulo em graus:\n");
    scanf("%lf", &angulo);
    resultado = sin (angulo * PI / 180);
    printf("O seno do angulo %lf eh: %lf \n", angulo ,resultado);
    return 0;
}
