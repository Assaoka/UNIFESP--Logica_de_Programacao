// Aula 4 - Beecrowd 1 - João Assaoka
// PUM - 1142
#include <stdio.h>

int main() {
	int N;
	scanf(" %d",&N);
	
	for (int i = 1; N > 0; i += 4, N--)
		printf("%d %d %d PUM\n", i, i+1, i+2);
	
	/* Opção com while:
	int i = 1;
	while (N-- > 0) {
		printf("%d %d %d PUM\n", i, i+1, i+2);
		i += 4;
	}
	*/
	return 0;
}
