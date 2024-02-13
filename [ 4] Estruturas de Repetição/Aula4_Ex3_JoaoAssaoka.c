// Aula 4 - Exercício 3 - João Assaoka
// Um determinado material perde metade de sua massa a cada 30 segundos. Dada a massa inicial informada pelo usuário, em gramas, fazer um programa em C que calcule o tempo necessário para que essa massa se torne menor que 1 grama. O programa em C deve escrever a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.
#include <stdio.h>

int main() {
	float massa;
	int tempo = 0;

	printf("Qual a massa inicial: ");
	scanf("%f", &massa);
	
	while (massa >= 1)
		massa /= 2, tempo += 30;
	
	printf("\nTempo Necessário: %02d:%02d:%02d\n",tempo/3600,(tempo%3600)/60, (tempo%3600)%60);
	
	return 0;
}
