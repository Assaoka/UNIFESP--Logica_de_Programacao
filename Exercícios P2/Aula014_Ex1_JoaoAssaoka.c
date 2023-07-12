// 1) Faça um programa que, dado um inteiro n e uma matriz quadrada de ordem n, cujos elementos são todos inteiros positivos, imprime uma tabela onde os elementos são listados em ordem decrescente, acompanhados da indicação de linha e coluna a que pertencem. Havendo repetições de elementos na matriz, a ordem é irrelevante.

#include <stdio.h>

void swap(int* a, int* b); // Troca a com b
void bubbleSort(int arr[], int size); // Algoritimo de Ordenar Vetor

int main(void) {
  int n;
    printf("n = "), scanf(" %d", &n);
  
  int M[n][n], Aux[n][n], V[n*n], i, j, k;
    // Preenche a matriz M
    i = 0;
    do { 
      j = 0;
      do {
        printf("M[%d][%d] = ", i, j), scanf(" %d", &M[i][j]);
        V[i*n + j] = Aux[i][j] = M[i][j];
      } while (++j < n);
    } while (++i < n);

    // Ordenar o Vetor:
      bubbleSort(V, n*n);

    // Imprimir Do jeito q pediu
      printf("\nElem | Linha | Coluna\n");
      i = 0;
      do {
        j = 0;
        do {
          k = 0;
          do {
            if (V[i] == Aux[j][k]) {
              Aux[j][k] = 777777;
              printf("%d | %d | %d\n", V[i], j, k);
            }
          } while (++k < n);
        } while (++j < n);
      } while (++i < n*n); 
  return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
