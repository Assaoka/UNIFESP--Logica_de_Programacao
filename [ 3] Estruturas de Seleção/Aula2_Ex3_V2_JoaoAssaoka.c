// Aula 2 - Exercício 3 - João Assaoka
// Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.
#include <stdio.h>

int main() {
	int DiaNascimento, MesNascimento, AnoNascimento, DiaAtual, MesAtual, AnoAtual;

	printf("Olá, utilize a seguinte formatação para datas: dd/mm/aaaa\n");
	printf("Digite a sua data de nascimento: ");
	scanf(" %d/ %d/ %d", &DiaNascimento, &MesNascimento, &AnoNascimento);
	printf("\nAgora digite a data em que estamos: ");
	scanf(" %d/ %d/ %d", &DiaAtual, &MesAtual, &AnoAtual);

	if ((MesAtual > MesNascimento) || ((MesAtual == MesNascimento) && (DiaAtual > DiaNascimento))) {
		printf("\nEntão você tem %d anos hoje.", AnoAtual-AnoNascimento);  
	} else {
		printf("\nEntão você tem %d anos hoje.", AnoAtual-AnoNascimento-1);
	}
	
	printf("\nJá em 2050, você fará %d!",2050-AnoNascimento);
	return 0;
}
