// Aula 2 - BeeCrowd 3 - João Assaoka
// Idade em Dias - 1020
#include <stdio.h>

int main() {
	int D, Anos, Meses, Dias;
	scanf(" %d",&D);

	Anos = D / 365;
	Meses = (D % 365) / 30;
	Dias = (D % 365) % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Anos, Meses, Dias);
	return 0;
}
