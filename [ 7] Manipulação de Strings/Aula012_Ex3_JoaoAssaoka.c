// 3-) Faça um programa que leia uma string do teclado e diga se ela é palíndromo. Uma string é palíndromo quando pode ser lida tanto de trás pra frente quanto de frente para trás e possui exatamente a mesma sequência de caracteres. Ex.: ROMA É AMOR, arara, Anotaram a data da maratona

#include <stdio.h>

int main(void) {
  char txt[500], txt2[500];
  int i = 0, j = 0, P = 0;

  printf("Digite um texto sem acentos para verificar se ela é um palíndromo (quando encerrar pressione enter): ");
  scanf(" %[^\n]", txt);

  // Remover espaços em branco e converter para letras maiúsculas
  i = 0;
  do {
    if (txt[i] == ' ') {
      int k = i;
      while (txt[k] != '\0') {
        txt[k] = txt[k + 1];
        k++;
      }
      continue;
    }
    else if ((txt[i] >= 'a') && (txt[i] <= 'z')) {
      txt[i] -= ('a' - 'A');
    }
    i++;
  } while (txt[i] != '\0');

  // Achar o fim da string
  j = 0;
  do {
    j++;
  } while (txt[j] != '\0');

  // Duplicar a string
  i = 0;
  txt2[j] = '\0';
  do {
    txt2[i] = txt[j - i - 1];
    i++;
  } while (txt[j - i - 1] != '\0');

  // Comparar as strings
  i = 0;
  do {
    if (txt[i] != txt2[i]) {
      P = 33;
      break;
    }
    i++;
  } while (txt[i] != '\0');

  if (P == 33)
    printf("Não é um palíndromo!\n");
  else
    printf("É um palíndromo!\n");

  return 0;
}
