#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ano;
  printf("Calculadora de Ano bissexto\nEscreva um ano: \n");
  scanf("%d", &ano );
  if (ano % 100 != 0 && ano % 4 == 0 || ano % 400 == 0 )
	{
	  printf("O ano %d eh bissexto!\n" , ano);
	}
  else
	{
	  printf("O ano %d nao eh bissexto\n", ano);
	}
  return 0;
}

