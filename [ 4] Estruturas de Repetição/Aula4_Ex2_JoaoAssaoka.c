// Aula 4 - Exercício 2 - João Assaoka
// Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
#include <stdio.h>

int main() {
	int n;
	
	printf("Digite um número: "), scanf(" %d", &n);
	printf("\n----- Tabuada -----");
	
	for (int i = 1; i <= 10; i++)
		printf("\n%d * %d = %d", i, n, n*i);
	
	printf("\n-------------------\n");
	return 0;
}
