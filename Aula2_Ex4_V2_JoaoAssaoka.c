#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(void) {
  int DiaNascimento, MesNascimento, AnoNascimento, DiaAtual, MesAtual, AnoAtual;
  char VF;

  printf("Olá, utilize a seguinte formatação para datas: dd/mm/aaaa\n");
  printf("Digite a sua data de nascimento: ");
    scanf(" %d/ %d/ %d", &DiaNascimento, &MesNascimento, &AnoNascimento);
  printf("\nAgora digite a data em que estamos: ");
    scanf(" %d/ %d/ %d",&DiaAtual, &MesAtual, &AnoAtual);

  if ((MesAtual == MesNascimento) && (DiaAtual == DiaNascimento)) {
  printf("\nFeliz Aniversário!!! Hoje você completou %d anos de idade.",AnoAtual-AnoNascimento);
} else if ((MesAtual >= MesNascimento) && (DiaAtual > DiaNascimento)) {
    printf("\nEntão você tem %d anos hoje.",AnoAtual-AnoNascimento);  
} else {
    printf("\nEntão você tem %d anos hoje.",AnoAtual-AnoNascimento-1);
}
  printf("\nJá em 2050, você fará %d!",2050-AnoNascimento);
  
  return 0;
}