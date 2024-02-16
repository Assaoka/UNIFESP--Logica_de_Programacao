// Aula 4 - Exercício 4 - João Assaoka
// Dois jogadores irão fazer a seguinte disputa: Uma moeda será lançada 10 vezes. Quando der cara o jogador1 faz um ponto. Quando der coroa o jogador2 faz um ponto. Faça um programa que simule 10 jogadas com a função rand(), considere que 0 é cara e 1 é coroa. No final indique o jogador vencedor.
#include <stdio.h> // Entrada e Saída de informações.
#include <stdlib.h> // Sorteios.
#include <time.h> // Semente para os Sorteios.

int main() {
	int NSorteios = 0, Sorteio, Jogador1 = 0, Jogador2 = 0; // Variáveis

	srand(time(NULL)); // Usa a hora para gerar semente.
	while ((NSorteios++) < 10) { // Loop para realizar 10 sorteios
		Sorteio = rand()%2; // Gera um número aleatório e pega o resto da divisão por 2 (Resulta Sempre em 0 ou 1)

		if (Sorteio==0) // Adiciona 1 em Jogador1 e imprime o número do sorteio e Cara.
			Jogador1++, printf("Sorteio %02d: Cara\n", NSorteios);
		else // Adiciona 1 em Jogador2 e imprime o número do sorteio e Coroa.
			Jogador2++, printf("Sorteio %02d: Coroa\n", NSorteios);
	}

	// Imprime o Resultado:
	if (Jogador1>Jogador2)
		printf("\nJogador1 Venceu");
	else if (Jogador1<Jogador2)
		printf("\nJogador2 Venceu");
	else if (Jogador1==Jogador2)
		printf("\nEmpate");

	return 0;
}
