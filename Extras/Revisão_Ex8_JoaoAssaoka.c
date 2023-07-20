// 8) Crie uma struct que representa contas bancárias (Nome, saldo, código);
	// a) Leia N, e em seguida N contas.
	// b) Leia M, e execute M operações (altere o saldo).
	// c) Imprima todas as contas com os valores atualizados

#include <stdio.h>

typedef struct {
    char nome[100];
    int num; // Código da conta, é definido como a posição na criação
    float saldo;
} CLIENTE;

int main() {

  int i, N, M, Num;
  char Op;
  float Val;
  CLIENTE contas[N];

	printf("N = "), scanf(" %d", &N);
	i = 0;
  do { // Cadastrando N contas
  	printf("\n\nNome: "), scanf(" %[^\n]", contas[i].nome);
    contas[i].num = i;
    printf("Numero da Conta: %d\n", i);
    printf("Saldo: "), scanf(" %f", &contas[i].saldo);
  } while (++i < N);

	printf("\n\nM = "), scanf(" %d", &M);
	i = 0;
  do { // Operações
  	printf("\n\nNumero da Conta: "), scanf(" %d", &Num);
    printf("Operação (C / D): "), scanf(" %c", &Op);
    printf("Valor: "), scanf(" %f", &Val);
    if ((Op == 'c')||(Op == 'C'))
    	contas[Num].saldo += Val;
    else if ((Op == 'd')||(Op == 'D'))
    	contas[Num].saldo -= Val;
  } while (++i < M);

    i = 0;
    do { // Imprimindo Atualização
        printf("\n\nNome: %s", contas[i].nome);
        printf("\nNumero da Conta: %d", i);
        printf("\nSaldo: %.2f", contas[i].saldo);
    } while (++i < N);

    return 0;
}
