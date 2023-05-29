// 3-) Dada uma sequência de n números inteiros, imprimi-los sem repetições. (Exemplo: para n = 10 e a sequencia 1, 3, 5, 1, 10, 1, 5, 8, 2, 10 o programa deve imprimir a saída 1, 3, 5, 10, 8, 2)
#include <stdio.h>
#include <locale.h>


int main(void) {
  int n, sequencia[100], i = 0, j = 0, aux = 0;

  printf("n = "), scanf(" %d", &n);
  printf("Digite uma sequência de %d números\n\n", n);
  
  do scanf(" %d", &sequencia[i]); while (++i < n);
  i = 0;

  printf("\n%d",sequencia[0]);
  while (++i < n) {
    aux = 0;
    do {
      if (sequencia[i] == sequencia[j])
        aux = 1; 
    } while (++j < i);
    j = 0;
    if (aux != 1)
      printf(", %d",sequencia[i]);
  }

  return 0;
}
