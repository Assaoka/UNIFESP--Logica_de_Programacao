// 2) Escreva um programa que, dadas duas matrizes Am×n e Bn×p, calcula a matriz Dm×p que é o produto de A por B. Note que, para ler as matrizes, é necessário primeiro ler os seus tamanhos m,n, e p.
#include <stdio.h>

int main(void) {
  int m, n, p, i, j, k;
    printf("Am×n Bn×p\n");
    printf("m = "), scanf(" %d", &m); // N° Linhas do vetor A
    printf("n = "), scanf(" %d", &n); // N° Colunas do Vetor A e N° Linhas do vetor B
    printf("p = "), scanf(" %d", &p); // N° Colunas do vetor B
  
  int A[m][n], B[n][p], D[m][p];
    // Preenchendo o Vetor A [m][n]
    i = 0;
    do {
      j = 0;
      do {
        printf("A[%d][%d] = ", i, j), scanf(" %d", &A[i][j]);        
      } while (++j < n);
    } while (++i < m);
    printf("\n");
  
    // Preenchendo o Vetor B[n][p]
    i = 0;
    do {
      j = 0;
      do {
        printf("B[%d][%d] = ", i, j), scanf(" %d", &B[i][j]);        
      } while (++j < p);
    } while (++i < n);
    printf("\n");

    // Calculando e Imprimindo o Vetor D[m][p]
    i = 0;
    do {
      j = 0;
      do {
        k = 0;
        D[i][j] = 0;
        do {
          D[i][j] += (A[i][k] * B[k][j]);
        } while (++k < n);
        printf("%d ", D[i][j]);
      } while (++j < p);
      printf("\n");
    } while (++i < m);
    
  return 0;
}