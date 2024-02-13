// Aula 2 - Exercício 2 - João Assaoka
// Leia um valor inteiro e apresente os resultados do quadrado, do cubo e da raiz quadrada do valor lido.
#include <stdio.h>
#include <math.h>

int main() {
	int N;
	
	printf("Digite um Valor Inteiro: ");
	scanf(" %d", &N);
	
	printf("--------------------------\n");
	printf("%d^2 = %d\n", N, N*N);
	printf("%d^3 = %d\n",N , N*N*N);
	printf("√%d = %f\n", N, sqrt(N));    
	printf("--------------------------\n");
	
	return 0;
}
