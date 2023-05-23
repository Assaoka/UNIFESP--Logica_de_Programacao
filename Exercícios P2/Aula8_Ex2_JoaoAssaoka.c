#include <stdio.h>

int main(void) {
  float dia[7], min = 10000, max = -273, media = 0;
  int i = 0;

  printf("Escreva a temperatura de cada dia da semana (C°):\n\n");
  do {
    scanf(" %f", &dia[i]);
    if (dia[i]<min) // Define Menor
      min = dia[i];
    if (dia[i]>max) // Define Maior
      max = dia[i];    
    media += dia[i]; // Soma a temperatura, depois vai dividir 
  } while (++i<7);
  
  media = media/7; // Dividir a soma das temperaturas pela quantidade de dias
  printf("\nMenor temperatura da semana: %.2f C°\nMaior temperatura da semana: %.2f C°\nTemperatura média semanal: %.2f C°", min, max, media);
  
  return 0;
}
