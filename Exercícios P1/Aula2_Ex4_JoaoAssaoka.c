#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
  int AnoNascimento, Ano_Atual;
  char VF;
  
  printf("Olá! Digite o Ano em que você nasceu: ");
    scanf(" %d",&AnoNascimento);
  printf("\nAgora digite o ano em que estamos: ");
    scanf(" %d",&Ano_Atual);
  printf("\nVocê já fez aniversário esse ano? (S/N) ");
    scanf(" %c",&VF);

  if (toupper(VF) == 'S') {
    printf("\nEntão você tem %d anos hoje.",Ano_Atual-AnoNascimento);
}  else {
    printf("\nEntão você tem %d anos hoje.",Ano_Atual-AnoNascimento-1);
}
  printf("\nJá em 2050, você fará %d!",2050-AnoNascimento);
    
  return 0;
}
