// 2) Escreva um programa usando função e ponteiros que recebe vários números inteiros até que o usuário insira o caractere ‘0’ e devolve o seu primeiro dígito, seu último dígito e altera o valor de n removendo seu primeiro e último dígitos.

#include <stdio.h>
#include <math.h>

void Fun2 (int N, int *pri, int *ult, int *resp) {
  int M  = N, i = 0;
  while (M != 0) {
    M = M/10;
    i++;
  }
  *pri = N/pow(10, --i);
  *ult = N%10;
  *resp = (N - *pri*pow(10, i))/10;  
}

int main(void) {
  int N, pri, ult, resp;
    printf("Valor inicial | Primeiro dígito | Último dígito | Valor final\nN = ");
    scanf(" %d", &N);
  while (N != 0) {
    Fun2(N, &pri, &ult, &resp);
    printf("%d | %d | %d | %d\n\nN = ", N, pri, ult, resp);
    scanf(" %d", &N);
  }

  return 0;
}