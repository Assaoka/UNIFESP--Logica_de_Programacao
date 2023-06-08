// Acima da Diagonal Principal | beecrowd | 1183
#include <stdio.h>

int main(void) {
  float M[12][12], soma = 0;
  int i, j;
  char O;

  scanf(" %c", &O);

  i = 0;
  do {
    j = 0;
    do {
      scanf(" %f", &M[i][j]);
      if (j > i)
        soma += M[i][j];
    } while (++j < 12);
  } while (++i < 12);
  
  if (O == 'S')
    printf("%.1f\n", soma);
  else
    printf("%.1f\n", soma/66);

    
  return 0;
}
