// 2-) Faça um programa para resolver o seguinte problema: Dados um número inteiro n > 0 e uma sequência com n números inteiros, determinar o menor e o maior número da sequência. Por exemplo, para n=6 e para a sequência com 6 números inteiros = {6 −27 0 −5 84 -33} o seu programa deve escrever o número -33.

#include <stdio.h>

int main() {
	int V[100], N, i = 0, menor = 777777;

	scanf(" %d", &N);
	for (int i = 0; i < N; i++) {
		scanf(" %d", &V[i]);
		if (menor > V[i])
			menor = V[i];
	}

	do {
		scanf(" %d", &V[i]);
		if (menor > V[i])
			menor = V[i];
		printf("N = %d, i = %d, menor = %d\n", N, i , menor);
	} while (++i<N);
	return 0;
}
