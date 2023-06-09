// 1) Elabore uma função que receba um vetor contendo N valores e um valor X escolhidos pelo usuário, retorne para a main o número de vezes que esse elemento ocorreu no vetor.

#include <stdio.h>

int ContValor (int N, int X, int V[]);
  // Função do Exercício

int main(void) {
  int N, X, i = 0;
  
  printf("Qual o tamanho do vetor? "), scanf(" %d", &N);
  printf("Qual o valor que deseja procurar? "), scanf(" %d", &X);

  int V[N];
  do {
    printf("V[%d] = ", i), scanf(" %d", &V[i]);
  } while (++i < N);

  printf("O valor %d ocorre %dx no vetor!", X, ContValor(N, X, V));
    
  return 0;
}

int ContValor (int N, int X, int V[]) {
  int cont = 0, i = 0;

  do {
    if (V[i] == X)
      cont++;
  } while (++i < N);

  return cont;
}
