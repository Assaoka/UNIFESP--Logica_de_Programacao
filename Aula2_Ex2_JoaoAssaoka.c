#include <stdio.h>
#include <locale.h>

int main(void) {
  char A[100],B[100],C[100];
  
  printf("Digite uma palavra para guardar em A: ");
    scanf(" %s",&A);
  printf("Digite outra palavra para guardar em B: ");
    scanf(" %s",&B);

  printf("Em A guardamos %s, já em B guardamos %s!\n",A,B);

  strcpy(C,A);
  strcpy(A,B);
  strcpy(B,C);

  printf("Depois da troca, A vale %s, B vale %s!\n",A,B);
  return 0;
}