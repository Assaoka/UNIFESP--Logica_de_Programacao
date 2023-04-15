#include <stdio.h>

int main(void) {
  int D, Anos, Meses, Dias;
  scanf(" %d",&D);

Anos = D / 365;
Meses = (D%365)/30;
Dias = (D%365)%30;
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Anos,Meses,Dias);
}