// 3) Use comando de repetição para desenhar na tela um retângulo de 60 colunas e 10 linhas, sendo que a borda deste retângulo será formada pelo caractere ‘+’. Lembre que somente a primeira e última linha deverão ter todas as colunas preenchidas com o caractere ‘+’. As demais linhas (entre 2 e 9) só terão as colunas 1 e 60 preenchidas. 
#include <stdio.h>

int main(void) {
  int i = 0 , j = 0;

  do {
    j = 0;
    do {
      if ((j == 0)||(j == 59)||(i == 0)||(i == 9))
        printf("+");
      else
        printf("%c", ' ');
    } while (++j < 60);
    printf("\n");
  } while (++i < 10);
  

  return 0;
}