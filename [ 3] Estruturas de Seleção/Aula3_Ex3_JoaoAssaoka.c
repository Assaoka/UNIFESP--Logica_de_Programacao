// Aula 3 - Exercício 3 - João Assaoka
// Crie um programa que leia um número inteiro e mostre na tela se ele é par ou ímpar. Utilize o operador ternário.
#include <stdio.h>

int main() {
    int i;
    printf("Digite um Numero: "), scanf("%d", &i);
    printf("%d eh %s\n", i, (i % 2 == 0) ? "par" : "impar");    
    return 0;
}
