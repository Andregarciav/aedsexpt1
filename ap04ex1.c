#include <stdio.h>
#include <stdlib.h>


int main()
{
  float vetorFloat[7];
  int i;
  for( i = 0 ; i < 7 ; i++)
    {
    printf("Digite o %do numero:\n", i+1);
    scanf("%f" , &vetorFloat[i] );
    }
  printf("Os numeros digitados sao:\n");
  for(i = 2 ; i < 7 ; i += 2)
    {
      printf("%.0f ", vetorFloat[i]);
    }
  printf("\n");
  return 0;
}
