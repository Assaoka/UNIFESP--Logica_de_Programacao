// Troca em Vetor I | beecrowd | 1175
#include <stdio.h>

int main(void) {
  int N[20], i, y;

  i = 0; do scanf(" %d", &N[i]); while (i++ < 19);
  
  i = 0; do {
    y = N[i];
    N[i] = N[(19-i)];
    N[(19-i)] = y;
  } while (i++ < 9);

  i=0; do printf("N[%d] = %d\n", i, N[i]); while (i++ < 19);  
  
  return 0;
}