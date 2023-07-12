// 3-) Faça um programa que calcule divisão usando subtrações sucessivas e recursão.
#include <stdio.h>

int div (int a, int b) {
	if (a >= b) // Enquanto for maior ou igual da pra dividir
		return 1 + div(a - b, b); // Então somamos 1 ao total de subtrações e chamamos a função novamente 
	return 0; // Quando form menor, não da pra dividir mais, então encerra e vai somando
}

int main(void) {
	int a, b;
	printf("a = "), scanf(" %d", &a);
	printf("b = "), scanf(" %d", &b);
  printf("%d/%d = %d", a, b, div(a, b));
  return 0;
}