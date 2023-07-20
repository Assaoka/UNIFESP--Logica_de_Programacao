// 3) Faça uma função que troca o valor de A com B. Esses valores devem vir da main e devem afetar a main (trocando os valores de A e B). UTILIZE PONTEIROS.

#include <stdio.h>

void trocar (int *A, int *B) {
	int temp = *A;
	*A = *B;
	*B = temp;
}

int main () {
	int A, B;
	printf("A = "), scanf(" %d", &A);
	printf("B = "), scanf(" %d", &B);

	printf("\nTrocando Valores\n");
	trocar(&A, &B);
	printf("A = %d\n", A);
	printf("B = %d\n", B);
	return 0;
}
