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
