#include <stdio.h>

int main(void) {
  float massa;
  int tempo = 0;

  printf("Qual a massa inicial: ");
  scanf("%f", &massa);
  
  while (massa >= 1){
    massa /= 2, tempo += 30;}
  
  printf("\nTempo Necessário: %02d:%02d:%02d\n",tempo/3600,(tempo%3600)/60, (tempo%3600)%60);
  
  return 0;
}
