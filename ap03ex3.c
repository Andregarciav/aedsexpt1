#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int num1, num2;
    int aux;
    printf("Escreva o primeiro numero: \n");
    scanf(" %d" , &num1);
    printf(" Escreva o segundo numero: \n");
    scanf(" %d" , &num2);
    if (num1 > num2) // rearanja o maior
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    printf("%d %d" , num1, num2);
    if ( ( num1 % 2 ) == 0) //verifica se par ou impar
    {
        num1+=1;
        printf(" %d ; ", num1);
    }
    while (num1 < num2);
    {
        num1 += 2;
        printf(" %d ; ", num1);
    }
    return 0;
}
