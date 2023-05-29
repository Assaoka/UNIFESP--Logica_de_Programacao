// Preenchimento de Vetor I | beecrowd | 1173
#include <stdio.h>
#include <math.h>

int main(void) {
  int V, N[10], i = 0;
  scanf(" %d", &V);
  do N[i] = V*pow(2, i), printf("N[%d] = %d\n", i, N[i]); while (i++<9);
  return 0;
}