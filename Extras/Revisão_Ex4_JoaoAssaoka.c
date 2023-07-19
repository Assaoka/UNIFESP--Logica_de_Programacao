// 4) Leia a quantidade de dólares que uma pessoa tem. Após isso execute uma função que leia a cotação do dólar de uma semana (USE VETOR) e retorne o patrimônio da pessoa no dia com a maior e menor (USANDO PONTEIROS) cotação seguido do dia da semana que isso ocorreu.

#include <stdio.h>

void maior_menor (float vetor[], float *menor, float *maior) {
	*menor = *maior = vetor[0];
	
	int i = 1;
	do {
		if (*menor > vetor[i])
			*menor = vetor[i];
		if (*maior < vetor[i])
			*maior = vetor[i];
	} while (++i < 7);
}

int main () {
	float vetor[7], montante, menor, maior;

	printf("Quantos dólares vc tem? U$ "), scanf(" %f", &montante);

	printf("\n");
	int i = 0;
	do {
		printf("Cotação dia %d: ", i), scanf(" %f", &vetor[i]);
	} while (++i < 7);

	maior_menor(vetor, &menor, &maior);

	printf("\nMontante (maior cotação): R$ %.2f", montante*maior);
	printf("\nMontante (menor cotação): R$ %.2f", montante*menor);
		
	return 0;
}
