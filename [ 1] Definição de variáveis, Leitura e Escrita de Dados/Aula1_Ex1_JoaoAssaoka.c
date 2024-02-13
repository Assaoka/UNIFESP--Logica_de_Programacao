// Aula 1 - Exercício 1 - João Assaoka
// Ler dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.
#include <stdio.h>

int main() {
	int A, B, C;

	printf("Digite um valor para A: ");
	scanf(" %d", &A);
	printf("Digite um valor para B: ");
	scanf(" %d", &B);

	printf("A vale %d, já B vale %d!\n", A, B);

	C = A;
	A = B;
	B = C;

	printf("Depois da troca, A vale %d, B vale %d!\n", A, B);
	return 0;
}
