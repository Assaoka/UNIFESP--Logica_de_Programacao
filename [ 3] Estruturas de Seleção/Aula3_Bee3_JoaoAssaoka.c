// Aula 3 - Beecrowd 3 - João Assaoka
// Tipos de Triângulos - 1045
#include <stdio.h>

int main() {
	double  A, B, C, Temp;
	
	scanf(" %lf %lf %lf", &A, &B, &C);

	// Ordenando em ordem decrescente:
	if (B > A)
		Temp = B, B = A, A = Temp; // Observe que quando o if possui apenas uma linha, não é necessário usar chaves.
	if (C > A)
		Temp = C, C = A, A = Temp;
	if (C > B)
		Temp = C, C = B, B = Temp;

	// Resposta:
	if (A >= (B+C)) printf("NAO FORMA TRIANGULO\n"); // Outra coisa que pode ser feita é subir a linha caso o if tenha apenas uma linha.
	else {
		if ((A*A) == (B*B + C*C))
			printf("TRIANGULO RETANGULO\n");
		else if ((A*A) > (B*B + C*C))
			printf("TRIANGULO OBTUSANGULO\n");
		else if ((A*A) < (B*B + C*C))
			printf("TRIANGULO ACUTANGULO\n");
		
		if ((A==B)&&(A==C))
			printf("TRIANGULO EQUILATERO\n");
		else if ((A==B)||(A==C)||(B==C))
			printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
