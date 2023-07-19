#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Comandos.h"
	
int buscar(CLIENTE cad[], int n, char procurar[100]) {
	printf("Digite um Telefone/Nome para Busca: "), scanf(" %[^\n]", procurar), fflush(stdin);
	int i = 0;
  do {
    if (strcmp(cad[i].telefone, procurar) == 0 || strcmp(cad[i].nome, procurar) == 0)
      return i; // Encontrou o telefone ou o nome
	} while (++i < n);
	return -1;
}

int cadastro(CLIENTE cad[], int n) {
	if (n == -1)
		return -1;
	
  printf("\n============== CADASTRO %02d ==============\n", n);
	int telefoneExistente = 0;
	do {
  	telefoneExistente = 0;
  	printf("Telefone (aa aaaaa-aaaa): "), scanf(" %[^\n]", cad[n].telefone), fflush(stdin);		
    for (int i = 0; i < n; i++) {
      if (strcmp(cad[i].telefone, cad[n].telefone) == 0) {
      	telefoneExistente = 1;
        printf("Telefone já cadastrado. Por favor, informe outro telefone.\n");
                break;
      }
    }
  } while (telefoneExistente);
	
	printf("Nome (Max 100 Caracteres): "), scanf(" %[^\n]", cad[n].nome), fflush(stdin);
  printf("Endereço:\n");
    printf(" - Rua: "), scanf(" %[^\n]", cad[n].endereco.rua), fflush(stdin);
    printf(" - Bairro: "), scanf(" %[^\n]", cad[n].endereco.bairro), fflush(stdin);
    printf(" - Cidade: "), scanf(" %[^\n]", cad[n].endereco.cidade), fflush(stdin);
    printf(" - Número: "), scanf("%d", &cad[n].endereco.n);
  printf("=========================================\n");
	return 0;
}

void printcad(CLIENTE cad[], int n) {
  printf("\n============== CADASTRO %02d ==============", n);
	printf("\nTelefone: %s", cad[n].telefone);
	printf("\nNome: %s", cad[n].nome);
	printf("\nEndereço:");
    printf("\n - Rua: %s", cad[n].endereco.rua);
    printf("\n - Bairro: %s", cad[n].endereco.bairro);
    printf("\n - Cidade: %s", cad[n].endereco.cidade);
    printf("\n - Número: %d\n", cad[n].endereco.n);
}

int editarcad (CLIENTE cad[], int n) {
	int busca = 0, Op = 1;
	char procurar[100];
	do {
		if (busca == -1)
			printf("\n[%s] não foi Encontrado... Digite 1 caso queira tentar novamente: ", procurar), scanf(" %d", &Op);
		
		if (Op != 1)
			return -1;
		
		busca = buscar(cad, n, procurar);
	} while (busca == -1);
	cad[busca].telefone[0] = '\0'; // Posiblita usar o mesmo telefone
	cadastro(cad, busca);
	return 0;
}

void addpizza (PIZZAS cardapio[], int np) {
	printf("\n================ PIZZA %d ================\n", np);
	printf("Nome da Pizza: "), scanf(" %[^\n]", cardapio[np].nome), fflush(stdin);
	printf("Descrição: "), scanf(" %[^\n]", cardapio[np].descricao), fflush(stdin);
	printf("Preço: R$ "), scanf(" %f", &cardapio[np].valor);
	cardapio[np].cod = np; // Codigo é definido Automaticamente
	printf("=========================================\n");
}

void printpizza (PIZZAS cardapio[], int np) {
	printf("\n║ %02d. %s\n", np, cardapio[np].nome);
	printf("║ Descrição: %s\n", cardapio[np].descricao);
	printf("║ Preço: R$ %0.2f\n", cardapio[np].valor);
}

int buscarpizza (PIZZAS cardapio[], int np, char procurar[100]) {
	int Op, i = 0, N;
		printf("Nome da Pizza: "), scanf(" %[^\n]", procurar);
		do {
	    if (strcmp(cardapio[i].nome, procurar) == 0)			
				return i;
		} while (++i < np);
	return -1;
}

int editarpizza (PIZZAS cardapio[], int np) {
	int busca = 0, Op = 1;
	char procurar[100];
	do {
		if (busca == -1)
			printf("\n[%s] não foi Encontrado... Digite 1 caso queira tentar novamente: ", procurar), scanf(" %d", &Op);
		
		if (Op != 1)
			return -1;
		
		busca = buscarpizza(cardapio, np, procurar);
	} while (busca == -1);

	addpizza(cardapio, busca);
	return 0;
}

void printcardapio (PIZZAS cardapio[], int np) {
	int i = 0;
	while (i < np)
		printpizza(cardapio, i++);
}

void addpedido (PEDIDO pedidos[], CLIENTE cad[], PIZZAS cardapio[],int n, int np, int nt) {
	int busca = -1;
	while (busca == -1) {
		busca = buscar(cad, n, pedidos[nt].cliente);
		if (busca == -1)
			printf("\n[%s] é invalido, tente novamente.\n", pedidos[nt].cliente);
	}
	
	busca = -1;
	while (busca == -1) {
		busca = buscarpizza(cardapio, np, pedidos[nt].pizza);
		if (busca == -1)
			printf("\n[%s] é invalido, tente novamente.\n", pedidos[nt].pizza);
	}

	pedidos[nt].valor = cardapio[busca].valor; // Pegando o Preço
	pedidos[nt].entregador = 0;
	pedidos[nt].etapa = 1;
	pedidos[nt].nota = 0;
}

void printpedido(PEDIDO pedidos[], int nt) {
	printf("\n║ Pedido %04d - %s (R$ %.2f)", nt, pedidos[nt].pizza, pedidos[nt].valor);
	printf("\n║ Cliente: %s", pedidos[nt].cliente);
	printf("\n║ Situação: ");
		
	switch (pedidos[nt].etapa) {
		case 1:	printf("Em Preparo.\n"); break;
		case 2: printf("A Caminho (Entregador %d).\n", pedidos[nt].entregador); break;
		case 3: printf("Entregue (Entregador %d).\n", pedidos[nt].entregador); break;
	}
		
	if (pedidos[nt].nota != 0)
		printf("║ Avaliação: %d★\n", pedidos[nt].nota);
}

int despacharpedido(PEDIDO pedidos[], int nt, int entregadores[]) {
	int i = 0, Cod, confirmar, sorteio;
	do {
		do {
			printf("\nCódigo do Pedido: "), scanf(" %d", &Cod);
		} while (Cod >= nt);
		if (pedidos[Cod].etapa == 1) {
			printpedido(pedidos, Cod);
			printf("\n\nDigite 1 Caso Seja o Pedido que Deseja Despachar: "), scanf(" %d", &confirmar);			
		} else {
			printf("\nAção invalida, a situação do pedido não é 1.");
			return -1;
		}
	} while (confirmar != 1);
	
	srand(time(NULL)); // Usa a hora para gerar semente.
	sorteio = rand()%10 + 1; // Aleatório entre os 10 entregadores (entre 1 e 10)

	pedidos[Cod].etapa = 2; // A caminho
	pedidos[Cod].entregador = sorteio; // Atribuindo Entregador
		entregadores[sorteio] += 1;
	return 0;
}

int receberpedido(PEDIDO pedidos[], int nt) {
	int i = 0, Cod, confirmar;
	do {
		do {
			printf("\nCódigo do Pedido: "), scanf(" %d", &Cod);
		} while (Cod >= nt);
		if (pedidos[Cod].etapa == 2) {
			printpedido(pedidos, Cod);
			printf("\n\nDigite 1 Caso Seja o Pedido Recebido: "), scanf(" %d", &confirmar);			
		} else {
			printf("\nAção invalida, a situação do pedido não é 2.");
			return -1;
		}
	} while (confirmar != 1);
	
	do {
		printf("\nAvaliação (1 a 5): "), scanf(" %d", &pedidos[Cod].nota);
	} while ((pedidos[Cod].nota < 1)&&(pedidos[Cod].nota > 5));
	
	pedidos[Cod].etapa = 3; // Recebido
	return 0;
}

void montante(PEDIDO pedidos[], int nt) {
	float valor = 0, NumAv = 0, SomAv = 0;
	int i = 0;
	while (i < nt){
		valor += pedidos[i].valor;
		if (pedidos[i].nota != 0) {
			NumAv++;
			SomAv += pedidos[i].nota;
		}
		i++;
	}
	printf("\n╔══════");
	printf("\n║ Montante Total: R$ %.2f", valor);
	printf("\n║ N° Pizzas: %d", nt);
	if (NumAv > 0)
		printf("\n║ Média Avaliação: %.2f★", SomAv/NumAv);
	printf("\n╚══════");

	i = 0;
	while (i < nt)
		printpedido(pedidos, i++);
}
