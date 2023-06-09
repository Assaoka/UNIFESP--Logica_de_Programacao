#include <stdio.h>

// preenche_matriz: operação que preenche todos os valores de uma matriz de dimensão m x n informada pelo usuário;
void preenche_matriz (int Type, int m, int n, int M[m][n]) {
  int i = 0, j = 0;
  do {
    j = 0;
    do {
      if (Type == 1)
        printf("[%d][%d] = ", i, j);
      scanf(" %d", &M[i][j]);
    } while (++j < n);
  } while (++i < m);
}

// encontra_valor: operação que busca um valor X informado pelo usuário na matriz;
int encontra_valor (int X, int Type, int m, int n, int M[m][n]) {
  int i = 0, j = 0, cont = 0;
  do {
    j = 0;
    do {
      if (M[i][j] == X) {
        if (Type == 1)
          printf("[%d][%d]\n", i, j);
        cont++;
      }
    } while (++j < n);
  } while (++i < m);
return cont;
}

// encontra_maiorvalor: operação que busca o maior valor na matriz;
int encontra_maiorvalor (int m, int n, int M[m][n]) {
  int i = 1, j = 0, maior = M[1][0];

  do {
    j = 0;
    do {
      if (M[i][j] > maior)
        maior = M[i][j];
    } while (++j < n);
  } while (++i < m);

  return maior;
}


// encontra_menorvalor: operação que busca o menor valor na matriz;
int encontra_menorvalor (int m, int n, int M[m][n]) {
  int i = 1, j = 0, menor = M[1][0];

  do {
    j = 0;
    do {
      if (M[i][j] < menor)
        menor = M[i][j];
    } while (++j < n);
  } while (++i < m);

  return menor;
}
