// 4) Leia a quantidade de dólares que uma pessoa tem. Após isso execute uma função que leia a cotação do dólar de uma semana (USE VETOR) e retorne o patrimônio da pessoa no dia com a maior e menor (USANDO PONTEIROS) cotação seguido do dia da semana que isso ocorreu.

#include <stdio.h>

void maior_menor (float vetor[], int *dia_menor, int *dia_maior) {
// Como temos que retornar varios valores, devemos usar ponteiros. O operador "vai para (*)" associado com o endereço que recebemos da main atualiza nossa variável lá na main.
	*dia_maior = *dia_menor = 0; // Usar um valor fixo pode ocasionar em erros, então iniciamos com a primeira casa do vetor 
	
	int i = 1; // Como já escolhemos o valor da posição 0 como inicial, podemos começar na casa 1
	do {
		if (vetor[*dia_menor] > vetor[i]) // Se o menor valor que achamos até o momento for menor que o que estamos analizando, mudamos o valor
			*dia_menor = i;
		if (vetor[*dia_maior] < vetor[i]) // Se o maior valor for menor que o que estamos analizando...
			*dia_maior = i;
	} while (++i < 7);
}

int main () {
	float vetor[7], montante;
	int dia_menor, dia_maior;

	printf("Quantos dólares vc tem? U$ "), scanf(" %f", &montante);

	printf("\n");
	int i = 0;
	do {
		printf("Cotação dia %d: ", i), scanf(" %f", &vetor[i]);
	} while (++i < 7);

	// & = Endereço, usando isso porquê precisamos retornar mais de um valor
	maior_menor(vetor, &dia_menor, &dia_maior);

	printf("\nMontante no dia %d (maior cotação): R$ %.2f", dia_maior, montante*vetor[dia_maior]);
	printf("\nMontante no dia %d (menor cotação): R$ %.2f\n", dia_menor, montante*vetor[dia_menor]);
		
	return 0;
}
