// Aula 4 - Beecrowd 3 - João Assaoka
// Fibonacci Fácil - 1151
#include <stdio.h>

int main() {
	int N, a = 0, b = 1, c;

	scanf(" %d", &N);
	for (; N > 0; N--, c = a, a += b, b = c) // Podemos deixar a inicialização e o incremento vazios se quisermos.
		if (N == 1)	printf("%d\n", a);
		else printf("%d ", a);
	
	return 0;
}
