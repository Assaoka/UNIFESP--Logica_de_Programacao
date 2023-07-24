// Matriz Quadrada II | beecrowd | 1478
#include <stdio.h>

int main(void) {
  int N, i = 0;

  while (N != 0) {
    scanf(" %d", &N);

    if (N == 0)
      break;
    
    int M[N][N];

    i = 0;
    do {
      if (i/N > i%N)
        M[i/N][i%N] = 1 + (i/N - i%N)%N;
      else
        M[i/N][i%N] = 1 + (i%N - i/N)%N;

      if (i%N == 0)
        printf("%3d", M[i/N][i%N]);
      else
        printf(" %3d", M[i/N][i%N]);
      
      if ((i/N) < ((i+1)/N))
        printf("\n");
    } while (++i < N*N); 
    printf("\n");
  }
  return 0;
}
