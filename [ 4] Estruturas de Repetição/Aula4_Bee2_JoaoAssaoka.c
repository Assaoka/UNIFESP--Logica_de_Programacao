// Aula 4 - Beecrowd 2 - João Assaoka
// Sequência Crescente - 1146
#include <stdio.h>

int main() {
	int X, i;
	
	do {
		scanf(" %d", &X);
		if (X == 0) break;
		// Ficaria mais legível colocar o for dentro de um if (X != 0), mas utilizei o break para exemplificar.
		for (i = 1; i <= X; i++)
			if (i == X)	printf("%d\n", i);
			else printf("%d ", i);
	} while (X != 0);

	return 0;
}