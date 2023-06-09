#define Aula13_Ex3Header_JoaoAssaoka_H

void preenche_matriz (int Type, int m, int n, int M[m][n]);
  //preenche_matriz (Tipo de Impressão, N° Linhas, N° Colunas, Matriz)
  // Função recebe os inteiros m, n e a matriz M[m][n]. ---- Utiliza um loop DoWhile para percorrer todas as casas da Matriz e preencher uma por uma. -- Se Type == 1 imprime suas posições.


int encontra_valor (int X, int Type, int m, int n, int M[m][n]);
  // encontra_valor (Valor Procurado, Tipo de Impressão, N° Linhas, N° Colunas, Matriz)
  // Função recebe os inteiros X, m, n e a matriz M[m][n]. ---- Utiliza um loop DoWhile para percorrer todas as casas da Matriz procurando X. ---- Se Type == 1 imprime suas posições. ---- Retorna o número de ocorrências como resultado.


int encontra_maiorvalor (int m, int n, int M[m][n]);
// (N° Linhas, N° Colunas, Matriz)
// Função recebe os inteiros m, n e a matriz M[m][n] e busca o maior valor na matriz;


int encontra_menorvalor (int m, int n, int M[m][n]);
// (N° Linhas, N° Colunas, Matriz)
// Função recebe os inteiros m, n e a matriz M[m][n] e busca o menor valor na matriz;