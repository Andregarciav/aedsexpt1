#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[4]; //Não Faz diferença, achei mais prático separar
    int cred[4];
    int aux = 0;
    int conceito[4];
    float rsg;
    printf("Calculadora RSG\n");
    while (aux !=4)
    {
        printf("Escreva a nota obtida na %da Disciplina:" , aux+1);
        scanf("%f", &nota[aux]);

        while (nota[aux] > 100 || nota[aux] < 0)
        {
            printf("Voce digitou uma nota fora do padrao!!\nEscreva a nota obtida na %da Disciplina:" , aux+1);
            scanf("%f", &nota[aux]);
        }
    aux++;
    }
    aux = 0;
    printf("As notas digitadas:\n");
    while (aux !=4)
    {
        printf("Disciplina %d: %.2f\n" , aux+1 , nota[aux]);
        aux++;
    }
    aux = 0;
    while (aux !=4)
    {
        printf("Escreva a carga horaria da %da Disciplina:" , aux+1);
        scanf("%d", &cred[aux]);

        while (cred[aux] > 60 || cred[aux] < 20)
        {
            printf("Voce digitou uma carga horaria fora do padrao!!\nEscreva a carga horaria %da Disciplina:" , aux+1);
            scanf("%d", &cred[aux]);
        }
    aux++;
    }
    aux = 0;
    printf("As cargas digitadas:\n");
    while (aux !=4)
    {
        printf("Disciplina %d: %.d\n" , aux+1 , cred[aux]);
        aux++;
    }
    aux = 0;
    while (aux !=4)
    {
        if (nota[aux] < 40)
        {
            conceito[aux] = 0;
            printf("O conceito na %da disciplina e: F\n", aux+1);
        }
        if (nota[aux] >= 40 && nota[aux] < 60)
        {
            conceito[aux] = 1;
            printf("O conceito na %da disciplina e: E\n", aux+1);
        }
        if (nota[aux] >= 60 && nota[aux] < 70)
        {
            conceito[aux] = 2;
            printf("O conceito na %da disciplina e: D\n", aux+1);
        }
        if (nota[aux] >= 70 && nota[aux] < 80)
        {
            conceito[aux] = 3;
            printf("O conceito na %da disciplina e: C\n", aux+1);
        }
        if (nota[aux] >= 80 && nota[aux] < 90)
        {
            conceito[aux] = 4;
            printf("O conceito na %da disciplina e: B\n", aux+1);
        }
        if (nota[aux] >= 90)
        {
        conceito[aux] = 5;
        printf("O conceito na %da disciplina e: A\n", aux+1);
        }
    aux++;
    }
    rsg = (float)((conceito[0] * cred[0]) + (conceito[2] * cred[2]) + (conceito[3] * cred[3]) + (conceito[1] * cred[1])) / (cred[1] + cred[0] + cred[2] + cred[3]);
    printf("O seu RSG e: %.1f" , rsg);
return 15;
}
