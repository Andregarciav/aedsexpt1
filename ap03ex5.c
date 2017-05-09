#include <stdio.h>
#include <stdlib.h>

void calcula_salario (double alimentacao, double transporte, double metragem)
{
  double salario;
  salario  = alimentacao +  (2*transporte);
  if (metragem < 10)
    {
      metragem *= 10;
      salario = metragem + salario;
      printf("O pedreiro deve receber R$ %.2lf\n", salario);
    }
  else if (metragem >= 10 && metragem < 20 )
    {
      metragem *= 11.5;
      salario = metragem + salario;
      printf("O pedreiro deve receber R$ %.2lf\n", salario);
    }
  else if (metragem > 20)
    {
      metragem *= 13 ;
      salario = metragem + salario;
      printf("O pedreiro deve receber R$ %.2lf\n", salario);
    }
}

int main()
{ double a, t, m;
   printf("Calculadora de salário\nDigite o valor do vale alimentacao:\n");
   scanf("%lf", &a);
   printf("Digite o valor do vale transporte:\n");
   scanf("%lf", &t);
   printf("Digite a quantidade produzida:\n");
   scanf("%lf", &m);
   calcula_salario ( a , t , m ); 
   return 0;
}
