// Aula 6 - Exercício 3 - João Assaoka
// Dada uma sequência de n números inteiros, imprimi-los sem repetições. (Exemplo: para n = 10 e a sequencia 1, 3, 5, 1, 10, 1, 5, 8, 2, 10 o programa deve imprimir a saída 1, 3, 5, 10, 8, 2)

#include <stdio.h>

int main() {
	int n, sequencia[100], aux;

	printf("n = "), scanf(" %d", &n);
	printf("Digite uma sequência de %d números: ", n);
	
	for (int i = 0; i < n; i++)
		scanf(" %d", &sequencia[i]);

	printf("\n%d",sequencia[0]);
	for (int i = 1; i < n; i++) {
		aux = 0;
		for (int j = 0; j < i; j++)
			if (sequencia[i] == sequencia[j]) {
				aux = 1;
				break;
			}
		if (aux == 1) continue;
		printf(", %d",sequencia[i]);
	}

	return 0;
}
