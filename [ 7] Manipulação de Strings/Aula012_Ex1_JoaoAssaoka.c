// 1-) Dada uma sequência de caracteres representando um texto, determinar a frequência relativa de vogais no texto (por exemplo, no texto “Em terra de cego quem tem um olho é caolho”, essa frequência é 16 vogais/42 caracteres).

#include <stdio.h>

int main() {
  char txt[500];
  int i = 0, vogais = 0;
  
  printf("Digite um texto sem acentos (quando encerrar pressione enter): "), scanf(" %[^\n]", txt);
  
  do {
    if ((txt[i] == 'a')||(txt[i] == 'A')||(txt[i] == 'e')||(txt[i] == 'E')||(txt[i] == 'i')||(txt[i] == 'I')||(txt[i] == 'o')||(txt[i] == 'O')||(txt[i] == 'u')||(txt[i] == 'U'))
      vogais++;
  } while (txt[++i] != '\0');

  printf("Frequência: %d vogais / %d caracteres", vogais, i);
  return 0;
}
