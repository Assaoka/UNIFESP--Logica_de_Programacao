/* 6) Faça um programa com as seguintes opções:
	   a) Criptografar: Ler uma string e N (Chave), desloque os caracteres N casas para frente e imprima o resultado.
	   b) Decodificar: Ler a string e N, retorne a frase organizada.
	   c) Encerrar o programa. */

#include <stdio.h>

void criptografar (char txt[], int N) {
	int i = 0;
	  while (txt[i] != '\0') {
		  txt[i] += N;
		  ++i;
	 }
}

int main () {
	int N;
	char txt[100];

  printf("--------- Criptografar ---------\n");
	printf("Digite um texto: "), scanf(" %[^\n]", txt); // Scanf especial que lê até um '\n'
	printf("Digite a chave: "), scanf(" %d", &N);
	criptografar(txt, N);
	printf("String Criptografada: %s\n\n", txt);

	printf("--------- Decodificar ---------\n");
	printf("Digite um texto: "), scanf(" %[^\n]", txt); // Scanf especial que lê até um '\n'
	printf("Digite a chave: "), scanf(" %d", &N);
	criptografar(txt, -N);
	printf("String Decodificada: %s\n\n", txt);
	
  return 0;
}
