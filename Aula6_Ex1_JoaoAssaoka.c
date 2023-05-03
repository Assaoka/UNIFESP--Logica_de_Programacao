#include <stdio.h> // Entrada e Saída de informações.
#include <stdlib.h> // Sorteios.
#include <time.h> // Semente para os Sorteios.

int main(void) {
  int NSorteios = 0, Sorteio, Jogador1 = 0, Jogador2 = 0; // Variáveis

  srand(time(NULL)); // Usa a hora para gerar semente.
  while ((NSorteios++)<10) { // Loop para realizar 10 sorteios
    Sorteio = rand()%2; // Gera um número aleatório e pega o resto da divisão por 2 (Resulta Sempre em 0 ou 1)

    if (Sorteio==0) // Adiciona 1 em Jogador1 e imprime o número do sorteio e Cara.
      Jogador1++, printf("Sorteio %02d: Cara\n", NSorteios);
    else // Adiciona 1 em Jogador2 e imprime o número do sorteio e Coroa.
      Jogador2++, printf("Sorteio %02d: Coroa\n", NSorteios);
  }

  // Imprime o Resultado:
  if (Jogador1>Jogador2)
    printf("\nJogador1 Venceu");
  else if (Jogador1<Jogador2)
    printf("\nJogador2 Venceu");
  else if (Jogador1==Jogador2)
    printf("\nEmpate");

  return 0;
}