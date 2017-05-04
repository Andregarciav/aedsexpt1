#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265 //define o valor de pi
int main()
{
    double angulo, resultado; //declação de variáveis tipo lf
    printf("Escreva seu angulo em graus:\n"); //imprime na tela
    scanf("%lf", &angulo); //le o valor do angulo e armazena
    resultado = sin (angulo * PI / 180); // operação matemática para calculo do seno 
    printf("O seno do angulo %lf eh: %lf \n", angulo ,resultado); // imprime o valor do angulo e seu seno
    return 0; // se tudo der certo, retorna 0
}
