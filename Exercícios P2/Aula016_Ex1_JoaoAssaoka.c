// 1-) Crie um programa que use recursão para calcular a potência de 2 para números naturais.
#include <stdio.h>

int Potencia (int Base, int Expoente) {
	if (Expoente > 1) 
		return Base*Potencia (Base, Expoente - 1);
	return Base;
}

int main(void) {
	int Base, Expoente;
	printf("Base: "), scanf(" %d", &Base);
  printf("Expoente: "), scanf(" %d", &Expoente);
	printf("Resultado: %d\n", Potencia(Base, Expoente));
  return 0;
}
