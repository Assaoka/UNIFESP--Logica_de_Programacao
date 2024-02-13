// Aula 2 - Exercício 1 - João Assaoka
// Faça um programa que lê o valor da cotação do dólar em um determinado dia e em seguida lê uma quantia em dólares. Realize a conversão para reais.
#include <stdio.h>

int main() {
    float Cot_Dolar, N_Dolar;

    printf("Qual a cotação do dolar hoje? ");
    scanf("%f", &Cot_Dolar);
    printf("Quantos dólares você tem? $ ");
    scanf("%f", &N_Dolar);

    printf("Você tem $ %.2f, considerando a cotação atual como %.2f, você tem R$ %.2f!", N_Dolar, Cot_Dolar, N_Dolar*Cot_Dolar);

    return 0;
}
