#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero, i, contador=0;

    printf("Calculadora de numeros primos\nInforme um numero:\n");
    scanf("%d", &numero);

    if (numero > 1)
    {
        for (i = 1; i <= numero; i++)
        {
            if ((numero % i) == 0)
                contador++;
        }

        if (contador == 2)
        {
           printf("O numero %d e um numero primo!\n", numero);
        }
        else
        {
            printf("O numero %d nao e um numero primo!\n", numero);
        }

    }

}
