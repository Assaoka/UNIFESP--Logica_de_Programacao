// Aula 3 - Exercício 2 - João Assaoka
// Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe a qual cidade o DDD pertence, considerando a tabela abaixo. Se a entrada for qualquer outro DDD que não esteja presente na tabela, o programa deverá informar: DDD não cadastrado! Obs: use o comando switch-case.
#include <stdio.h>

int main() {
	int DDD;
		printf("DDD: ");
		scanf(" %d",&DDD);

	switch(DDD) {
		case 61 :
			printf("Brasília");
			break;
		case 71 :
			printf("Salvador");
			break;
		case 11 :
			printf("Sao Paulo");
			break;
		case 21 :
			printf("Rio de Janeiro");
			break;
		case 32 :
			printf("Juiz de Fora");
			break;
		case 19 :
			printf("Campinas");
			break;
		case 27 :
			printf("Vitoria");
			break;
		case 31 :
			printf("Belo Horizonte");
			break;
		default:
			printf("DDD não cadastrado!");}
	return 0;
}
