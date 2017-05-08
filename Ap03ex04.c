#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num , i , j, cont=1;
   printf("Piramide\nEscreva um numero\n");
   scanf("%d" , &num);
   for (i=0 ; i <= num ; i++)
   {
     for (j = 0 ; j < i; j++)
      {
      printf("%d ", cont);
      cont++;
      }
      printf("\n");
   }
   return 0;
}
