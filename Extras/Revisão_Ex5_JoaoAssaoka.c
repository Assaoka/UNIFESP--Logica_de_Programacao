// 5) Leia uma string. Crie uma função que recebe como parâmetro essa string e retorne a frequência de vogais, consoantes e o número de caracteres.

#include <stdio.h>
#include <string.h>

void contar (char txt[], int *vogais, int *consoantes, int *tam) {
	*tam = strlen(txt);
	int i = 0;
	do {
		if ((txt[i] == 'a')||(txt[i] == 'A')||(txt[i] == 'e')||(txt[i] == 'E')||(txt[i] == 'i')||(txt[i] == 'I')||(txt[i] == 'o')||(txt[i] == 'O')||(txt[i] == 'u')||(txt[i] == 'U'))
			*vogais += 1; // ATENÇÃO NÃO PODE USAR ++ COM PONTEIRO
		else if ((txt[i] >= 'a')||(txt[i] <= 'z')||(txt[i] >= 'A')||(txt[i] <= 'Z'))
			*consoantes += 1; // Usando += para somar na variavel da main
	} while (++i < *tam);
}

int main () {
	int vogais = 0, consoantes = 0, tam = 0;
	char txt[100];

	printf("Digite um texto: "), scanf(" %[^\n]", txt); // Scanf especial que lê até um '\n'
	contar(txt, &vogais, &consoantes, &tam);

	printf("\nString Lida: %s\n", txt);
	printf("N° de Vogais: %d\n", vogais);
	printf("N° de Consoantes: %d\n", consoantes);
	printf("Tamanho da String: %d\n", tam);
	return 0;
}
