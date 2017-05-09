#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num , i , j, cont=1; //definição das variáveis
   printf("Piramide\nEscreva um numero\n"); //imprime o comando 
   scanf("%d" , &num); //lê a variável inserida e armazena em num
   for (i=0 ; i <= num ; i++) //condições
   {
     for (j = 0 ; j < i; j++) //condições
      {
      printf("%d ", cont); //lê a variavel inserida e conta
      cont++;
      }
      printf("\n"); //imprime resultado
   }
   return 0; //retorna 0 se tudo der certo
}
