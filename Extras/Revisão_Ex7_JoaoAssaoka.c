// 7) Faça um programa com menu com as seguintes funções:
	// a) preenche_matriz: operação que preenche todos os valores de uma matriz de dimensão m x n informada pelo usuário;
	// b) cont_null: contar linhas e colunas Nulas
	// c) encontra_valor: operação que busca um valor X e imprime a posição de todas as suas ocorrências;
	// d) encontra_maiorvalor: operação que busca o maior valor na matriz;
	// e) encontra_menorvalor: operação que busca o menor valor na matriz;

#include <stdio.h>

void preenche_matriz (int m, int n, int matriz[m][n]) { 
	// operação que preenche todos os valores de uma matriz de dimensão m x n informada pelo usuário;
	int i = 0;
	do {
		int j = 0;
		do {
			printf("matriz[%d][%d] = ", i , j), scanf(" %d", &matriz[i][j]);
		} while (++j < n);
	} while (++i < m);
	printf("\n");
}

void print_matriz(int m, int n, int matriz[m][n]) {
	// Extra
	int i = 0, j;
	do {
		j = 0;
		do {
			printf("%d ", matriz[i][j]);
		} while (++j < n);
		printf("\n");
	} while (++i < m);
}

void cont_null (int m, int n, int matriz[m][n], int X, int *lin, int *col) {
	// contar linhas e colunas Nulas
	int i = 0, j, aux;
	*lin = *col = 0;
	do {
		j = 0; aux = 0;
		do {
			if (matriz[i][j] == X)
				aux++;
		} while (++j < n);
		if (aux == n)
			*lin += 1;
	} while (++i < m);

	i = 0;
	do {
		j = 0, aux = 0;
		do {
			if (matriz[j][i] == X)
				aux++;
		} while (++j < m);
		if (aux == m)
			*col += 1;
	} while (++i < n);
}

void encontra_valor (int m, int n, int matriz[m][n], int X) { 
	// operação que busca um valor X e imprime a posição de todas as suas ocorrências;
	int i = 0;
	do {
		int j = 0;
		do {
			if (matriz[i][j] == X)
				printf("matriz[%d][%d]\n", i , j);
		} while (++j < n);
	} while (++i < m);
	printf("\n");
}

void maiorvalor_menorvalor (int m, int n, int matriz[m][n], int *maior, int *menor) { 
	// Juntei encontra_maiorvalor (operação que busca o maior valor na matriz) e encontra_menorvalor (operação que busca o menor valor na matriz) para dar mais exemplos de como passar dados com ponteiro
	*maior = *menor = matriz[0][0];
	int i = 0;
	do {
		int j = 0;
		do {
			if (matriz[i][j] > *maior)
				*maior = matriz[i][j];
			if (matriz[i][j] < *menor)
				*menor = matriz[i][j];
		} while (++j < n);
	} while (++i < m);
}



int main () {
	int m, n;
	printf("Preencha o tamanho da matriz[m][n]\n");
	printf("m = "), scanf(" %d", &m);
	printf("n = "), scanf(" %d", &n);
	printf("\n");

	int matriz[m][n];
	printf("Preenchendo Valores da Matriz\n");
	preenche_matriz(m, n, matriz);

	printf("Matriz (EXTRA):\n");
	print_matriz(m, n, matriz);
		
	int X = 0, lin, col; // Valor de X é o que será analisado na função, fiz uma que não precisa ser 0. 
	printf("\nContando Linhas e Colunas Especiais (Contem Apenas %d)\n", X);
	cont_null(m, n, matriz, X, &lin, &col);
	printf("Linhas: %d\nColunas: %d\nTotal: %d\n\n", lin, col, lin + col);

	printf("Qual valor gostaria de procurar: "), scanf(" %d", &X);
	encontra_valor(m, n, matriz, X);

	int maior, menor;
	printf("Ocorrências do valor maior e menor:\n");
	maiorvalor_menorvalor(m, n, matriz, &maior, &menor);
	printf("Maior Valor (%d):\n", maior);
		encontra_valor(m, n, matriz, maior);
	printf("Menor Valor (%d):\n", menor);
		encontra_valor(m, n, matriz, menor);
	return 0;
}
