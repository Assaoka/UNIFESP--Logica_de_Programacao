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