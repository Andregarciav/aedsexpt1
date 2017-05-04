#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura;
    float peso, imc;
    printf("Calculadora IMC\nEscreva a altura em cm: ");
    scanf("%d", &altura);
    printf("Escreva seu peso: ");
    scanf("%f", &peso);
    imc =  peso / ( pow ((float)altura/100 , 2));
    if ( imc < 17 )
    {
        printf(" Seu IMC eh: %.2f e voce esta muito abaixo do peso" , imc);
    }
    if ( imc > 17 && imc <= 18.5)
    {
        printf(" Seu IMC eh: %.2f e voce esta abaixo do peso" , imc);
    }
    if ( imc > 18.5 && imc < 25)
    {
        printf(" Seu IMC eh: %.2f e voce esta com peso normal" , imc);
    }
    if ( imc >= 25 && imc < 30)
    {
        printf(" Seu IMC eh: %.2f e voce esta acima do peso" , imc);
    }
    if ( imc >=30 && imc < 35)
    {
        printf(" Seu IMC eh: %.2f e voce eh Obeso I" , imc);
    }
    if ( imc >=35 && imc < 40)
    {
        printf("Seu IMC eh: %.2f e voce eh obeso II (Severidade)" , imc);
    }
    if ( imc >= 40)
    {
        printf("Seu IMC eh: %.2f e voce eh obeso III (Morbido)" , imc);
    }
    return 0;
}
