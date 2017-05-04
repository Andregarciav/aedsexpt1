#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int Num1, Num2, Num3, Resto, aux;
    printf("Essa eh uma calculadora MDC para tres numeros\nEscreva os tres numeros separados por espaco:\n");
    scanf("%d %d %d", &Num1, &Num2, &Num3);
    while (Num1<Num2)
    {
        aux = Num1;
        Num1 = Num2;
        Num2 = aux;
        while (Num2 < Num3)
        {
            aux = Num2;
            Num2 = Num3;
            Num3 = aux;
        }
    }
    printf("O MDC entre %d, %d, %d " , Num1, Num2, Num3);
    while (Resto != 0)
    {
        Resto = Num1 % Num2;
        Num1 = Num2;
        aux = Num2;
        Num2 = Resto;
    }
    Num2 = aux;
     while (Resto != 0)
    {
        Resto = Num2 % Num3;
        Num2 = Num3;
        aux = Num3;

        Num3 = Resto;
    }
    Resto = aux;
    printf(" eh: %d", Resto);
    return 0;
}
