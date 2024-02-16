// Aula 4 - Exercício 1 - João Assaoka
// Faça um programa para calcular o fatorial de um número qualquer.

#include <stdio.h>

int main() {
	int i, fatorial = 1;
	scanf(" %d", &i);

	for (int j = 1; j <= i; j++) {
		fatorial *= j;
		printf("j = %d   Fat = %d\n", j, fatorial);
	}

	printf("\nFatorial de %d = %d\n", i, fatorial);
	return 0;
}
