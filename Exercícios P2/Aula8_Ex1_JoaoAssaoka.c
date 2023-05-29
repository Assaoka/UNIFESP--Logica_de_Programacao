/* 1-) Leia dois vetores A e B (de tamanho 10 cada um). Depois faça duas funções que calcule:
   - A soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o resultado em um vetor Soma.
   - A subtração dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o resultado em um vetor Subtracao. */
#include <stdio.h>

int main() {
  int A[10], B[10], Soma[10], Subtracao[10], i = 0;
  
  do {
    printf("\n\nA[%d]: ", i), scanf(" %d", &A[i]);
    printf("B[%d]: ", i), scanf(" %d", &B[i]);
    
    Soma[i] = A[i] + B[i];
    Subtracao[i] = A[i] - B[i];
    printf("Soma[%d]: %d\n", i, Soma[i]);
    printf("Subtracao[%d]: %d\n", i, Subtracao[i]);
  } while (++i<10);
  return 0;
}
