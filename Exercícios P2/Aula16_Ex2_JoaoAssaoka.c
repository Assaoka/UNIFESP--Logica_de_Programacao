// Crie um programa em C que peça um número inteiro ao usuário e retorne a soma de todos os números de 1 até o número que o usuário introduziu ou seja: 1 + 2 + 3 + ... + n. Utilize recursividade.
#include <stdio.h>

int Soma (int n) {
	if (n > 1)
		return n + Soma(n - 1);
	return 1;
}

int main(void) {
	int n;
	printf("n = "), scanf(" %d", &n);
  printf("Soma: %d\n", Soma(n));
  return 0;
}