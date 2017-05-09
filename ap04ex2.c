#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
 
  int i, n;
  float vetor[MAX];
  printf("Digite a quantidade de numeros a serem digitados:\n");
  scanf("%d", &n);
  while (n>MAX)
    {
      printf("O numero digitado e maior que 100\n");
      printf("Digite a quantidade de numeros a serem digitados:\n");
      scanf("%d", &n);
    }
  for( i = 0 ; i < n ; i++)
    {
    printf("Digite o %do numero:\n", i+1);
    scanf("%f" , &vetor[i] );
    }
  printf("Os numeros digitados sao:\n");
  for(i = (n-1) ; i >= 0 ; i--)
    {
      printf("%.0f ", vetor[i]);
    }
  printf("\n");
  return 0;
}
