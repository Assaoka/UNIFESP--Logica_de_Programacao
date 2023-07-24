// 1-) Faça um programa para calcular o fatorial de um número qualquer.

#include <stdio.h>

int main(void) {
  int i, Fatorial = 1;
  scanf(" %d", &i);

  do {
    Fatorial *= i;
    printf("i = %d   Fat = %d\n\n", i, Fatorial);
  } while (i-->1);
  
  return 0;
}
