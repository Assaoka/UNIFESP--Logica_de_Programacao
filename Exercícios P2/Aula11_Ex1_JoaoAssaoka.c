// 1) Escreva um programa que, dadas duas matrizes Am×n e Bm×n, calcula a matriz Cm×n que é a soma de A e B. Note que, para ler as matrizes, é necessário primeiro ler os seus tamanhos m,n.

#include <stdio.h>

int main(void) {
  int M, N, i, j;
  printf("M = "), scanf(" %d", &M); // Definindo N° de Linhas
  printf("N = "), scanf(" %d", &N); // Definindo N° de Colunas

  int A[M][N], B[M][N], C[M][N]; // Declarando Matrizes A, B e C com M Linhas e N colunas.

  // Loop para preencher A
  printf("\n");
  i = 0;
  do {
    j = 0;
    do {
      printf("A[%d][%d] = ", i, j), scanf(" %d", &A[i][j]);
    } while (++j < N);
  } while (++i < M);
  
  // Loop para preencher B
  printf("\n");
  i = 0;
  do {
    j = 0;
    do {
      printf("B[%d][%d] = ", i, j), scanf(" %d", &B[i][j]);
    } while (++j < N);
  } while (++i < M);

// Loop para calcular C
  printf("\n");
  i = 0;
  do {
    j = 0;
    do {
      C[i][j] = A[i][j] + B[i][j];
      printf("%d ", C[i][j]);
    } while (++j < N);
    printf("\n");
  } while (++i < M);

  return 0;
}