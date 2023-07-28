// Faça um algoritmo que calcule o montante de uma operação com juros compostos com aportes mensais.

#include <stdio.h>

int main(void) {
	float Taxa, Aporte, Patrimonio;
	int Tempo, i = 1;
	printf("Patrimônio Inicial: "), scanf(" %f", &Patrimonio);
	printf("Taxa de Juros Mensal (%): "), scanf(" %f", &Taxa);
	printf("Período (N° Meses): "), scanf(" %d", &Tempo);
	printf("Aporte Mensal: "), scanf(" %f", &Aporte);
	printf("\n\n");

	do {
		Patrimonio = Patrimonio * (1 + Taxa/100) + Aporte; 
		printf("%d° Mês: %.2f\n", i, (Patrimonio));
	} while (++i <= Tempo);
	
  return 0;
}
