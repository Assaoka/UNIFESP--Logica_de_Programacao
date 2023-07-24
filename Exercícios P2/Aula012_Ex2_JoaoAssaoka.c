// 2) Fazer um programa de “criptografia” (codificação de dados visando a privacidade de acesso às informações), onde dada uma string (vetor de caracteres) este programa codifique os dados através de um processo de substituição de letras. Implemente uma função que recebe o vetor de palavras e criptografe a frase substituindo cada caractere por 3 caracteres adjacentes a ele. Ex: “bom dia” -> mensagem criptografada = erp#gld

#include <stdio.h>

int main(void) {
  char txt[500];
  int i = 0;
  
  printf("Digite uma frase para ser criptografada (quando encerrar pressione enter): "), scanf(" %[^\n]", txt);

  do {
    printf("%c", txt[i] + 3);
  } while (txt[++i] != '\0');
  
  return 0;
}
