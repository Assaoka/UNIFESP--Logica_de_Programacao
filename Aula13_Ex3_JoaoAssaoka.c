// 3) Faça um projeto que contenha main, header e as seguintes funções:

#include <stdio.h>
#include "Aula13_Ex3Header_JoaoAssaoka.h"

int main(void) {
  int m, n, X, Type, Aux;

  printf("preenche_matriz\n");
  printf("N° Linhas: "), scanf(" %d", &m);
  printf("N° Colunas: "), scanf(" %d", &n);
  printf("Tipo de Impressão (1 para imprimir posições): "), scanf(" %d", &Type);
      
  int M[m][n];
  printf("\n");
  preenche_matriz(Type, m, n, M);  

  do {
    system("clear");
    printf("------------- Menu -------------\n");
    printf("1) encontra_valor;\n2) encontra_maiorvalor;\n3) encontra_menorvalor;\n4) Encerrar;\n");
    printf("--------------------------------\n");
    printf("Escolha entre uma das opções acima: "), scanf(" %d", &Aux);
  
    if (Aux == 1) {
      printf("Valor Procurado: "), scanf(" %d", &X);
      printf("\n%d\n", encontra_valor(X, Type, m, n, M));    
      
    } else if (Aux == 2) {
      printf("\n%d\n", encontra_maiorvalor(m, n, M));
      printf("\n%d\n", encontra_valor(encontra_maiorvalor(m, n, M), Type, m, n, M));
      
    } else if (Aux == 3) {
      printf("\n%d\n", encontra_menorvalor(m, n, M)); 
      printf("\n%d\n", encontra_valor(encontra_menorvalor(m, n, M), Type, m, n, M));
    }

    printf("\nPressione Enter para voltar ao menu... ");
    scanf("%*[^\n]"), scanf("%*c"), getchar(); // Limpa a entrada e espera apertar enter.    
  } while (Aux != 4);
  
  return 0;
}