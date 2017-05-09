#include <stdio.h>
#include <stdlib.h>

void calcula_salario (double alimentacao, double transporte, double metragem) //define as funções flutuantes
{
  double salario; //define a função salário
  salario  = alimentacao +  (2*transporte);
  if (metragem < 10) //condição para valor a ser pago pela produtividade
    {
      metragem *= 10; //valor da produção por metro2
      salario = metragem + salario; //calcula o valor a ser recebido
      printf("O pedreiro deve receber R$ %.2lf\n", salario); //imprime valor a ser recebido
    }
  else if (metragem >= 10 && metragem < 20 ) //condição para valor a ser pago pela produtividade
    {
      metragem *= 11.5; //valor da produção por metro2
      salario = metragem + salario; //calcula valor a ser recebido
      printf("O pedreiro deve receber R$ %.2lf\n", salario); //imprime valor a ser recebido
    }
  else if (metragem > 20) //condição para valor a ser pago pela produtividade
    {
      metragem *= 13 ; //valor da produção por metro2
      salario = metragem + salario; //calcula valor a ser recebido 
      printf("O pedreiro deve receber R$ %.2lf\n", salario); //imprime valor a ser recebido
    }
}

int main()
{ double a, t, m;
   printf("Calculadora de salário\nDigite o valor do vale alimentacao:\n");
   scanf("%lf", &a); //lê vapor inserido e armazena em a
   printf("Digite o valor do vale transporte:\n");
   scanf("%lf", &t); //lê o vapor inserido e armazena em t
   printf("Digite a quantidade produzida:\n");
   scanf("%lf", &m); //le o valor inserido e armazena em m
   calcula_salario ( a , t , m ); //realiza o cálculo de acordo com as variaveis pré definidas usando os dados inseridos pelo usuário
   return 0; //retorna 0 se tudo der certo
}
