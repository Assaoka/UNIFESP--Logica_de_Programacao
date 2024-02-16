// Aula 4 - Exercício 3 - João Assaoka
// Use comando de repetição para desenhar na tela um retângulo de 60 colunas e 10 linhas, sendo que a borda deste retângulo será formada pelo caractere ‘+’. Lembre que somente a primeira e última linha deverão ter todas as colunas preenchidas com o caractere ‘+’. As demais linhas (entre 2 e 9) só terão as colunas 1 e 60 preenchidas. 
#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 60; j++)
			if ((j == 0)||(j == 59)||(i == 0)||(i == 9)) printf("+");
			else printf(" ");
		printf("\n");
	}
	return 0;
}
