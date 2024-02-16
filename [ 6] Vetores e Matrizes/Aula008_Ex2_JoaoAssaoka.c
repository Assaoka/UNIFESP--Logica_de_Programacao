// Aula 6 - Exercício 2 - João Assaoka
// Faça um algoritmo para ler e armazenar em um vetor a temperatura de todos os dias da semana. Calcule: Menor temperatura da semana. Maior temperatura da semana. Temperatura média semanal

#include <stdio.h>

int main() {
	float dia[7], min, max, media;

	printf("Escreva a temperatura de cada dia da semana (C°):\n\n");
	scanf(" %f", &dia[0]);
	min = max = media = dia[0]; // Inicializa as variáveis com o primeiro valor
	
	for (int i = 1; i < 7; i++) { // Loop para os próximos 6 dias
		scanf(" %f", &dia[i]);
		if (dia[i] < min) min = dia[i];
		else if (dia[i] > max) max = dia[i];
		media += dia[i];
	}
		
	media /= 7; // Dividir a soma das temperaturas pela quantidade de dias
	printf("\nMenor temperatura da semana: %.2f C°\nMaior temperatura da semana: %.2f C°\nTemperatura média semanal: %.2f C°", min, max, media);
	
	return 0;
}
