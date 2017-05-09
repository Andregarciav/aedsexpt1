#include <stdio.h>
#include <stdlib.h>


int main()
{
  float vetorFloat[7];
  int i; //definição da função inteira i
  for( i = 0 ; i < 7 ; i++) //condições para função i
    {
    printf("Digite o %do numero:\n", i+1); //imprime comando
    scanf("%f" , &vetorFloat[i] ); //lê e armazena
    }
  printf("Os numeros digitados sao:\n"); //imprime os números digitados
  for(i = 2 ; i < 7 ; i += 2) //condições para a função i
    {
      printf("%.0f ", vetorFloat[i]); //lê e armazena
    }
  printf("\n"); //imprime resultado
  return 0; //retorna 0 se dee certo
}
