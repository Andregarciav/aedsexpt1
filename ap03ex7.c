#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j , N;
  printf("Digite um numero arte triangulo:\n");
  scanf("%d", &N);
  for (i = N; i > 0; i--)
   {
     for (j = i ; j > 0 ; j--)
     {
       printf("* ");
     }
     printf("\n");
   }
  printf("Digite um numero arte balao:\n");
  scanf("%d", &N);
  for (i = N; i > 0; i--)
   {
     for (j = i ; j > 0 ; j--)
     {
       printf("* ");
     }
     printf("\n");
   }
   for (i = 0; i < N; i++)
    {
      for (j = 0 ; j <= i ; j++)
      {
        printf("* ");
      }
      printf("\n");
    }
  return 0;
}
