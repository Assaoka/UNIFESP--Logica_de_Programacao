#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
  int N;
  
  printf("Digite um Valor Inteiro: ");
  scanf(" %d",&N);
  
  printf("--------------------------\n");
  printf("%d^2 = %d\n",N,N*N);
  printf("%d^3 = %d\n",N,N*N*N);
  printf("√%d = %f\n",N,sqrt(N));    
  printf("--------------------------\n");
  
  return 0;
}
