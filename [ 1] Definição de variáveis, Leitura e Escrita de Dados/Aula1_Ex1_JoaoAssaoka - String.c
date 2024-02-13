// Aula 1 - Exercício 1 - João Assaoka
// Ler dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.
#include <stdio.h>
#include <string.h>

int main() {
	char A[100],B[100],C[100];

	printf("Digite uma palavra para guardar em A: ");
	scanf(" %s", A);
	printf("Digite outra palavra para guardar em B: ");
	scanf(" %s", B);

	printf("Em A guardamos %s, já em B guardamos %s!\n", A, B);

	strcpy(C, A);
	strcpy(A, B);
	strcpy(B, C);

	printf("Depois da troca, A vale %s, B vale %s!\n", A, B);
	return 0;
}
