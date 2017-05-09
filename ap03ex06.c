#include <stdio.h>
#include <stdlib.h>

int fat (int n, int variavel)
{
  int controle;
  for ( controle = 1 ; controle < variavel ; controle++)
  {
    n*=controle;
  }
  return n;
}
int mdc (int a, int b)
{
  int aux, resto;
  printf("%d %d\n", a, b);
  if (a<b)
    {
      aux = a;
      a = b;
      b = aux;
    }
   while (b!=0)
    {
      resto = a % b;
      a = b;
      aux = b;
      b = resto;
      }
  return aux;
}
int mdc4(int num1, int num2, int num3, int num4)
{

}
int main()
{
  int num, aux, num1, num2;
  //chamada função fat
  printf("Escreva um numero:\n");
  scanf("%d",  &num );
  aux = num;
  num = fat( num , aux );
  printf("O fat(%d) eh: %d\n" , aux , num );
  //chamada função MDC
  printf("Escreva um numero:\n");
  scanf("%d",  &num1 );
  printf("Escreva um numero:\n");
  scanf("%d",  &num2 );
  printf("%d %d\n", num1 , num2);
  aux = mdc(num1 , num2);
  printf("O mdc(%d,%d) eh: %d\n" , num1 , num2, aux);
  //chamada função mdc4
  
  return 0;
}
