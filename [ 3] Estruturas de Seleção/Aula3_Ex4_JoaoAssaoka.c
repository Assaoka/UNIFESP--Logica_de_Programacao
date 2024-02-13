// Aula 3 - Exercício 4 - João Assaoka
// Faça um programa que encontre as raízes de uma equação do segundo grau na forma: ax2 + bx + c = 0. Implemente o cálculo das raízes como uma função e considere os casos em que delta é igual a zero, maior que zero e menor que zero.
#include <stdio.h>
#include <math.h>

int main() {
	float A, B , C, Delta, RaizPart, Raiz1, Raiz2;
	printf("---- CALCULADORA DE RAIZES ----\n");
	printf("\nA = "), scanf(" %f", &A);
	printf("B = "), scanf(" %f", &B);
	printf("C = "), scanf(" %f", &C);  
	
	Delta = B*B -4*A*C;

	if (Delta < 0) {
		RaizPart = -B/2*A;
		if (RaizPart == 0)
			printf("\nAs raizes são: ± %.3fi", (sqrt(-Delta))/2*A);
		else
			printf("\nAs raizes são: %.3f ± %.3fi", RaizPart, (sqrt(-Delta))/2*A);
	} else {
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
