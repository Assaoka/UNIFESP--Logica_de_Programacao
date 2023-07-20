// 2) Faça um programa que recebe a data de aniversário de alguém e a data de hoje separada por espaços. Retorne quantos anos a pessoa tem e a parabenize caso seja seu aniversário.

#include <stdio.h>

int main () {
	int hoje[3], niver[3]; // 0 = dia, 1 = mês, 2 = ano

	printf("Digite as datas na seguinte ordem separada por um espaço: dia mês ano.\n");
	printf("Qual a data de hoje: "), scanf(" %d %d %d", &hoje[0], &hoje[1], &hoje[2]);
	printf("Qual a sua data de nascimento: "), scanf(" %d %d %d", &niver[0], &niver[1], &niver[2]);

	if ((hoje[0] == niver[0])&&(hoje[1] == niver[1]))
		printf("Parabéns!!! Hoje você completou %d anos!!!", hoje[2] - niver[2]);
	else if ((hoje[0] > niver[0])&&(hoje[1] >= niver[1]))
		printf("Você não faz aniversário hoje, mas completou %d anos esse ano.", hoje[2] - niver[2]);
	else
		printf("Você ainda não fez aniversário esse ano, então tem %d anos", hoje[2] - niver[2] - 1);
		
	return 0;
}
