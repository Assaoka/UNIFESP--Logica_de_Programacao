#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
  float A, B , C, Delta, RaizPart, Raiz1, Raiz2;
  printf("---- CALCULADORA DE RAIZES ----\n");
  printf("\nA = "), scanf(" %f", &A);
  printf("B = "), scanf(" %f", &B);
  printf("C = "), scanf(" %f", &C);  
  
  Delta = B*B -4*A*C;
    
  if (Delta < 0) {
    RaizPart = -B/2*A;
    
    if (RaizPart == 0)
      printf("\nAs raizes são: ± %.3fi",(sqrt(-Delta))/2*A);
    else
      printf("\nAs raizes são: %.3f ± %.3fi",RaizPart,(sqrt(-Delta))/2*A);
  }
    
  else {
    Raiz1 = (-B+sqrt(Delta))/(2*A);
    Raiz2 = (-B-sqrt(Delta))/(2*A);
      if (Raiz1 == Raiz2)
        printf("\nA raiz é: %.3f",Raiz1); 
      else
        printf("\nAs raizes são: %.3f e %.3f",Raiz1,Raiz2);
  }
  printf("\n-----------------------------"); 
  return 0;
}