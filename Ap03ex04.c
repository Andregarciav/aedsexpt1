#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num , i , j ;
   prinf("Piramide\nEscreva um numero");
   scanf("%d" , &num);
   for (i=0 ; i < num ; i++)
   {
      for ( j= 0 ;j < i ; j++)
      {
      printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
