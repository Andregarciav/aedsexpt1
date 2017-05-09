#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int num1, num2; //define números
    int aux; 
    printf("Escreva o primeiro numero: \n");
    scanf("%d" , &num1); //identifica a variável
    printf("Escreva o segundo numero: \n");
    scanf("%d" , &num2); //identifica a variável
    if (num1 > num2) // rearranja o maior
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if ( ( num1 % 2 ) == 0) //verifica se par ou impar, se par incrementa 
    {
        num1+=1;
        printf(" %d ;", num1); //imprime a incrementação
    }
    while (num1 < (num2-2)) //estrutura de repetição
    {
        num1 += 2;
        printf(" %d ;", num1); //imprime todos os impares do intervalo
    }
    printf("\n"); 
    return 0; //se certo, retorna 0
}
