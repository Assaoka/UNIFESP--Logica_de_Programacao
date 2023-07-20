// 4) Leia a quantidade de dólares que uma pessoa tem. Após isso execute uma função que leia a cotação do dólar de uma semana (USE VETOR) e retorne o patrimônio da pessoa no dia com a maior e menor (USANDO PONTEIROS) cotação seguido do dia da semana que isso ocorreu.

#include <stdio.h>

void maior_menor (float vetor[], float *menor, float *maior, int *dia_menor, int *dia_maior) {
	// Como temos que retornar 4 valores, estamos usando ponteiros. O operador "vai para" * associado com o endereço que recebemos da main atualiza nossa variável lá na main.
	*menor = *maior = vetor[0]; // Usar um valor fixo pode ocasionar em erros, então iniciamos com a primeira casa do vetor
	*dia_maior = *dia_menor = 0; // Pelo que fizemos em cima, o dia deve começar em 0. 
	
	int i = 1; // Como já escolhemos o valor da posição 0 como inicial, podemos começar na casa 1
	do {
		if (*menor > vetor[i]) {
			// Se o menor valor que achamos até o momento for menor que o que estamos analizando, mudamos os valores que representam o menor
			*menor = vetor[i];
			*dia_menor = i; // Poderia passar apenas essa informação e usar vetor[dia_menor] na main, coloquei assim para facilitar a leitura 
		}
		if (*maior < vetor[i]) {
			// Se o maior valor for menor que o que estamos analizando...
			*maior = vetor[i];
			*dia_maior = i;
		}
	} while (++i < 7); // Repete 6 vezes (seria 7 nessa estrutura se i = 0), mas começamos no 1
}

int main () {
	float vetor[7], montante, menor, maior;
	int dia_menor, dia_maior;

	printf("Quantos dólares vc tem? U$ "), scanf(" %f", &montante);

	printf("\n");
	int i = 0;
	do {
		printf("Cotação dia %d: ", i), scanf(" %f", &vetor[i]);
	} while (++i < 7);

	// & = Endereço, usando isso porquê precisamos retornar 4 valores
	maior_menor(vetor, &menor, &maior, &dia_menor, &dia_maior);

	printf("\nMontante no dia %d (maior cotação): R$ %.2f", dia_maior, montante*maior);
	printf("\nMontante no dia %d (menor cotação): R$ %.2f", dia_menor, montante*menor);
		
	return 0;
}
