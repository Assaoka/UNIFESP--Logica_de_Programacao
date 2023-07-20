// 9) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas. Crie um looping para preencher  5 estruturas de bandas. Após criar e preencher, exiba todas as informações das bandas/estruturas.

#include <stdio.h>

typedef struct Banda {
  char Nome[100], Tipo[50];
  int NInt, Ranking;
} Banda;

void Preencher (Banda Bandas[5]) {
  int i = 0, j, aux, val;
  do {
		do { // Ranking Valido e Inédito
			do { // Dentro do Intervalo
			printf("Ranking (1 a 5): "), scanf("%d", &aux);
			} while ((aux > 5)||(aux < 1));

      j = 0, val = 1;
      do { // Inédito
        if (Bandas[j].Ranking == aux) {
          val = 0;
        	break;
      	}
      } while (++j < 5);
    } while (val != 1);
		Bandas[aux - 1].Ranking = aux;

		printf("Nome: "), scanf(" %[^\n]", Bandas[aux - 1].Nome);
    printf("Tipo de Música: "), scanf(" %[^\n]", Bandas[aux - 1].Tipo);
    printf("N° de Integrantes: "), scanf(" %d", &Bandas[aux - 1].NInt);
    printf("\n\n");
  } while (++i < 5);
}

void Exibir (Banda Bandas[5]) {
	int i = 0;
	system("clear");
	do {
		printf("\n\nRANKING %d", i+1); // Como ordenei na atribuição, vai sair em ordem.
		printf("\nNome: %s", Bandas[i].Nome);
    printf("\nTipo de Música: %s", Bandas[i].Tipo);
    printf("\nN° de Integrantes: %d", Bandas[i].NInt);
	} while (++i < 5);
}

int main() {
  Banda Bandas[5];
  Preencher(Bandas);
	Exibir(Bandas);
  return 0;
}
