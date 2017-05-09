#include <stdio.h>
#include <stdlib.h>
#define MAXLinhas 12
#define MAXColunas 12


int main()
{
  int i, j , N , M;
  int Matriz_A[MAXLinhas][MAXColunas], Matriz_B[MAXLinhas][MAXColunas], Matriz_C[MAXLinhas][MAXColunas];
  printf("Digite a quantidade de linhas da Matriz A:\n");
  scanf("%d", &N);
  while (N>MAXLinhas)
    {
      printf("O numero digitado e maior que 12\n");
      printf("Digite a quantidade de linhas da Matriz A:\n");
      scanf("%d", &N);
    }
  printf("Digite a quantidade de colunas da Matriz A:\n");
  scanf("%d", &M);
   while (M>MAXColunas)
    {
      printf("O numero digitado e maior que 12\n");
      printf("Digite a quantidade de colunas da Matriz A:\n");
      scanf("%d", &M);
    }
   for (i = 0; i < N; i++)
   {
     for (j = 0; j < M; j++) {
       scanf("%d", &Matriz_A[i][j] );
     }
   }
   for (i = 0; i < N; i++)
   {
     for (j = 0; j < M; j++)
     {
       printf("%d ", Matriz_A[i][j] );
     }
       printf("\n");
   }
   printf("Digite a quantidade de linhas da Matriz B:\n");
   scanf("%d", &N);
   while (N>MAXLinhas)
     {
       printf("O numero digitado e maior que 12\n");
       printf("Digite a quantidade de linhas da Matriz B:\n");
       scanf("%d", &N);
     }
   printf("Digite a quantidade de colunas da Matriz B:\n");
   scanf("%d", &M);
    while (M>MAXColunas)
     {
       printf("O numero digitado e maior que 12\n");
       printf("Digite a quantidade de colunas da Matriz B:\n");
       scanf("%d", &M);
     }
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++) {
        scanf("%d", &Matriz_B[i][j] );
      }
    }
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        printf("%d ", Matriz_B[i][j] );
      }
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++) {
        Matriz_C[i][j] = Matriz_A[i][j] + Matriz_B[i][j];
      }
    }
    for (i = 0; i < N; i++)
    {
      for (j = 0; j < M; j++)
      {
        printf("%d ", Matriz_C[i][j] );
      }
        printf("\n");
    }
  return 0;
}
