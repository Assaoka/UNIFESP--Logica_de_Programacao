#include <stdio.h>
#include <stdlib.h>

/* Legenda dos Números nos Tabuleiros:
0 = Mar (Posição Sem Navio, será exibido como sua linha e coluna com cor diferente dos navios)
1 = submarinos (um quadrado | Sub).
2 = contratorpedeiros (dois quadrados | CTp)
3 = navios-tanque (três quadrados | NvT)
4 = porta-aviões (quatro quadrados | PAv)
10X = X descoberto (ex: 104 = porta-aviões descoberto)
*/

// Cores Printf
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int Start(int M[10][10]) {
  int i = 0, j = 0;

  do {
    j = 0;
    do {
      M[i][j] = 0;
    } while (++j < 10);
  } while (++i < 10); 

  return 0;
}

int Printf_Tabuleiro (int M[10][10]) {
  int i, j;
  
  i = 0;
  printf("\n%s     0     1     2     3     4     5     6     7     8     9     ", KWHT);
  do {
    j = 0;
    printf("\n%s  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+", KWHT);
    printf("%s \n%d", KWHT, i);
    printf("%s |",  KWHT);
    
    do {
      if (M[i][j] < 1)
        printf("%s %d/%d", KBLU, i, j);
      else if (M[i][j] == 1)
        printf("%s Sub", KYEL);
      else if (M[i][j] == 2)
        printf("%s CTp", KYEL);
      else if (M[i][j] == 3)
        printf("%s NvT", KYEL);
      else if (M[i][j] == 4)
        printf("%s PAv", KYEL);
      
      printf("%s |",  KWHT);
    } while (++j < 10);
  } while (++i < 10);
  printf("\n  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+");

  return 0;
}

int Posicionar (int M[10][10], int X) {
  int linha, coluna, linha1, coluna1, ini, i, min, max, cont = 0, aux;

  do {
    if (cont > 0)
      printf("\n------------------\nPosição Invalida.");
    cont = 0;
    
    do {
      do {
        setbuf(stdin,NULL); // Limpar Buffer
        printf("\n%sPosição Inicial", KWHT);
        printf("\nLinha: "), scanf(" %d", &linha);
        printf("Coluna: "), scanf(" %d", &coluna);
      } while ((linha < 0) || (linha > 9) || (coluna < 0) || (coluna > 9)); // Corrigido após o vídeo, tinha um erro na condição (antes o limite fazia o contrario do desejado)
        
      do {
        setbuf(stdin,NULL); // Limpar Buffer
        printf("\nPosição Final");
        printf("\nLinha: "), scanf(" %d", &linha1);
        printf("Coluna: "), scanf(" %d", &coluna1);
      } while ((linha1 < 0) || (linha1 > 9) || (coluna1 < 0) || (coluna1 > 9));

      if (!(((linha == linha1)&&(abs((coluna - coluna1)) == (X - 1))) || ((coluna == coluna1)&&(abs((linha - linha1)) == (X - 1)))))
        printf("\n------------------\nPosição Invalida.");
    } while (!(((linha == linha1)&&(abs((coluna - coluna1)) == (X - 1))) || ((coluna == coluna1)&&(abs((linha - linha1)) == (X - 1)))));

    // Descobre quem está variando, e atribui min e max
    if (linha == linha1) {
      ini = 0; // Coluna Variando
      if (coluna > coluna1)
        min = coluna1, max = coluna;
      else
        min = coluna, max = coluna1;
    } else {
      ini = 1; // Linha Variando
      if (linha > linha1)
        min = linha1, max = linha;
      else
        min = linha, max = linha1;
    }

    // Confere se o intervalo está vazio
    aux = min;
    if (ini == 0) { // ini == 0, Coluna Variando
      do {
        if (M[linha][aux] != 0) {
          cont++;
        }
      } while (++aux <= max);

    } else { // ini == 1, Linha Variando
      do {
        if (M[aux][coluna] != 0) {
          cont++;
        }      
      } while (++aux <= max);
    }
  } while (cont != 0);

  // Preenche o intervalo X
  if (ini == 0) { // Coluna Variando
    do {
      M[linha][min] = X;      
    } while (++min <= max);
  } else { // Linha Variando
    do {
      M[min][coluna] = X;      
    } while (++min <= max);
  }
  
  return ini;
}

int Preencher_Tabuleiro (int M[10][10]) {
  int i = 0, aux, linha, coluna;

  system("clear");
  printf("\n%s------------------ Posicione seu porta-aviões ------------------\n", KWHT);
  printf("Quatro Quadrados: | PAv | PAv | PAv | PAv |\n");
  Printf_Tabuleiro(M);
  Posicionar(M, 4);

  i = 0;
  do {
    system("clear");
    printf("\n%s----------------- Posicione seu navio-tanque %d ----------------\n", KWHT, i);
    printf("Três Quadrados: | NvT | NvT | NvT |\n");
    Printf_Tabuleiro(M);
    Posicionar(M, 3);
  } while (++i < 2);

  i = 0;
  do {
    system("clear");
    printf("\n%s--------------- Posicione seu contratorpedeiro %d --------------\n", KWHT, i);
    printf("Dois Quadrados: | CTp | CTp |\n");
    Printf_Tabuleiro(M);
    Posicionar(M, 2);
  } while (++i < 3);

  i = 0;
  do {
    system("clear");
    printf("\n%s------------------ Posicione seu submarino %d ------------------\n", KWHT, i);
    printf("Um Quadrado: | Sub |\n");
    Printf_Tabuleiro(M);

    if (aux == i) {
      printf("\n------------------\nPosição Invalida.");
      printf("\n%sPosição", KWHT);
      printf("\nLinha: %d", linha);
      printf("\nColuna: %d\n", coluna);      
    }
    
    do {
      setbuf(stdin,NULL); // Limpar Buffer
      printf("\n%sPosição", KWHT);
      printf("\nLinha: "), scanf(" %d", &linha);
      printf("Coluna: "), scanf(" %d", &coluna);      
    } while ((linha < 0) || (linha > 9) || (coluna < 0) || (coluna > 9)); 

    aux = i;
    if (M[linha][coluna] > 0)
      i--;
    else
      M[linha][coluna] = 1;
  } while (++i < 4);  
  return 0;
}

int Printf_Tudo (int M[10][10], int N[10][10]) {
  int i, j, k;
  
  i = 0;
  printf("\n%s     0     1     2     3     4     5     6     7     8     9    |||      0     1     2     3     4     5     6     7     8     9   ", KWHT);
  do {
    j = 0, k = 0;
    printf("\n%s  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+ |||   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+", KWHT);
    printf("%s \n%d", KWHT, i);
    printf("%s |",  KWHT);
    
    do {
      if (k < 10) {       
        if (M[i][k] == 0)
          printf("%s    ", KBLU);    
        else if (M[i][k] == 1)  
          printf("%s Sub", KBLU);  
        else if (M[i][k] == 2)
          printf("%s CTp", KBLU);  
        else if (M[i][k] == 3)
          printf("%s NvT", KBLU);  
        else if (M[i][k] == 4)
          printf("%s PAv", KBLU);  

        else if (M[i][k] == 100) // A partir daqui, Atacado
          printf("%s  X ", KWHT);    
        else if (M[i][k] == 101)  
          printf("%s Sub", KYEL);  
        else if (M[i][k] == 102)
          printf("%s CTp", KYEL);  
        else if (M[i][k] == 103)
          printf("%s NvT", KYEL);  
        else if (M[i][k] == 104)
          printf("%s PAv", KYEL);  

        printf("%s |",  KWHT);
      k++, j--;
      } else {
        if (j == 0) {
          printf("%s ||| %d", KWHT, i);
          printf("%s |",  KWHT);
        } 
        if (N[i][j] == 100) // A partir daqui, Atacado
          printf("%s    ", KGRN);    
        else if (N[i][j] == 101)  
          printf("%s Sub", KGRN);  
        else if (N[i][j] == 102)
          printf("%s CTp", KGRN);  
        else if (N[i][j] == 103)
          printf("%s NvT", KGRN);  
        else if (N[i][j] == 104)
          printf("%s PAv", KGRN);  
        else // Não Atacado
          printf("%s %d/%d", KRED, i, j);
        
        printf("%s |",  KWHT);
      }
    } while (++j < 10);
  } while (++i < 10);
  printf("\n  +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+ |||   +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");

  return 0;
}

int Vencedor (int M[10][10], int N[10][10]) {
  int Constante = 1*4*4 + 2*3*3 + 3*2*2 + 4*1*1;
  int i, j, aux = 0;

  do {
    j = 0;
    do {
      if (M[i][j] > 100)
        aux += (M[i][j]%100);
    } while (++j < 10);
  } while (++i < 10);
  
  if (aux == Constante)
    return 1;

  aux = 0;
  i = 0;
  do {
    j = 0;
    do {
      if (N[i][j] > 100)
        aux += (N[i][j]%100);
    } while (++j < 10);
  } while (++i < 10);

  if (aux == Constante)
    return 0;

  return 33;
}
