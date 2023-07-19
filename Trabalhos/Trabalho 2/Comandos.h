#define Comandos_H

int Start(int M[10][10]);
  // Coloca 0 em todas as posições

int Printf_Tabuleiro (int M[10][10]);
  // Imprime o Tabuleiro de um Jogador (Usado no posicionamento de Navios)

int Preencher_Tabuleiro (int M[10][10]);
  // Usa o posicionar varias vezes para colocar todas as casas

int Posicionar (int M[10][10], int X);
  // Posicionamento de navio tamanho X

int Printf_Tudo (int M[10][10], int N[10][10]);
  // Imprime as duas matrizes uma do lado da outra

int Vencedor (int M[10][10], int N[10][10]);
  // Vê se alguém ganhou
