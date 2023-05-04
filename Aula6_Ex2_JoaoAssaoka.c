#include <stdio.h>

int main(void) {
  int n, i = 0;
  
  printf("Digite um número: "), scanf(" %d", &n);
  printf("\n----- Tabuada -----");
  
  while ((i++)<10){
    printf("\n%d * %d = %d", i, n, n*i);}
  
  printf("\n-------------------\n");
  return 0;
}