#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Comandos.h"

int main () {
	int n = 0, np = 0, nt = 0, entregadores[11];
	int CadApagados = 0, CardapioApagados = 0;
	int Aux, Menu, SubMenu, i = 0;
	char Aux2[100];
	CLIENTE *cad = malloc(n * sizeof(CLIENTE));
	PIZZAS *cardapio = malloc(np * sizeof(PIZZAS));
	PEDIDO *pedidos = malloc(nt * sizeof(PEDIDO));

	while (++i < 11) entregadores[i] = 0;
	
	do {
		system("clear");
		printf("╔═══════════════════════════════════════╗\n");
		printf("║            MENU PRINCIPAL             ║\n");
		printf("╠═══════════════════════════════════════╣\n");
		printf("║ Opções:                               ║\n");
		printf("║        1. Pizzaria                    ║\n");
		printf("║        2. Cliente                     ║\n");
		printf("║        3. Finalizar Programa          ║\n");
		printf("╚═══════════════════════════════════════╝\n");
		printf("Selecione uma opção: "), scanf(" %d", &Menu);
		switch (Menu) { // Fazer um menu com switch-case com as opções (usar funções)
			case 3: // Finzalizar Programa
			break;
			
			case 1: // Pizzaria
				do { // SubMenu
					system("clear");
					printf("╔═══════════════════════════════════════╗\n");
	  			printf("║               PIZZARIA                ║\n");
  				printf("╠═══════════════════════════════════════╣\n");
	 			 	printf("║        1. Cadastrar pizzas            ║\n");
	 				printf("║        2. Alterar dados da pizza      ║\n");
		 			printf("║        3. Remover uma pizza           ║\n");
			  	printf("║        4. Despacho da pizza           ║\n");
		  		printf("║        5. Exibir entregador           ║\n");
		  		printf("║        6. Exibir montante             ║\n");
		  		printf("║        7. Imprimir cadastros          ║\n");
					printf("║        8. Voltar para o Menu          ║\n");
		  		printf("╚═══════════════════════════════════════╝\n");
					printf("Selecione uma opção: "), scanf(" %d", &SubMenu);
					switch (SubMenu) {
						case 8: // Voltar para o Menu
							break;
					
						case 1: // 1) Cadastrar pizzas
							np++;
							if (CardapioApagados == 0)
								cardapio = realloc(cardapio, np * sizeof(PIZZAS));
							else
								CardapioApagados--;
							addpizza(cardapio, np - 1);
							break; // 1
					
						case 2: // 2) Alterar dados da pizza (busca pelo código/nome);
							if (np > 0)
								editarpizza(cardapio, np);
							else
								printf("\nAção invalida, não há pizzas.");
							break; // 2
						
						case 3: // 3) Remover uma pizza
							if (np > 0) {
								Aux = buscarpizza(cardapio, np, Aux2);
								if (Aux != -1) {
									np--;
									while (Aux < np) {
										cardapio[Aux] = cardapio[Aux + 1];									
										Aux++;
									}
									CardapioApagados++;
									} else
										printf("Ação invalida, pizza não encontrada.");
								} else
								printf("\nAção invalida, existem 0 Pizzas no momento.");
							break; // 3
						
						case 4: // 4) Despacho da pizza (apresenta os números de pedido, alterar o campo situação para “2 – a caminho” e o código do entregador para um valor inteiro que corresponde ao código dele)
							if (nt > 0)
								despacharpedido(pedidos, nt, entregadores);
							else
								printf("\nAção invalida, não há pedidos para despachar.");
							break; // 4
						
						case 5: // 5) Exibir entregador (mostrar os códigos dos entregadores e o número de entregas de cada um).
							i = 1;
							printf("\n╔═══════════════════╗");
							printf("\n║ Exibir Entregador ║");
							printf("\n╠════════╦══════════╣");
							printf("\n║ Código ║ Entregas ║\n");
							do {
								printf("║   %02d   ║   %04d   ║\n", i, entregadores[i]);
							} while (++i < 11);
							printf("╚════════╩══════════╝\n");
							break; // 5
						
						case 6: // 6) Exibir montante (mostrar a quantidade de pizzas vendidas e a fatura total).
							montante(pedidos, nt);
							break;	

						case 7: // EXTRA: Imprimir todos os cadastros
							i = 0;
							while (i < n) 
								printcad(cad, i++); 
							break;
						}
					printf("\nPressione Enter para Fazer Voltar ao Menu ... "), fflush(stdin), scanf("%*[^\n]"), scanf("%*c"), getchar();
				} while (SubMenu != 8);
				
				break;

			case 2:
				do { // SubMenu
					system("clear");
				  printf("╔═══════════════════════════════════════╗\n");
				  printf("║                CLIENTE                ║\n");
				  printf("╠═══════════════════════════════════════╣\n");
				  printf("║        1. Cadastrar cliente           ║\n");
				  printf("║        2. Alterar dados do cliente    ║\n");
				  printf("║        3. Remover conta               ║\n");
				  printf("║        4. Ver menu de pizzas          ║\n");
				  printf("║        5. Fazer pedido                ║\n");
				  printf("║        6. Recebimento do pedido       ║\n");
				  printf("║        7. Voltar para o Menu          ║\n");
				  printf("╚═══════════════════════════════════════╝\n");
					printf("Selecione uma opção: "), scanf(" %d", &SubMenu);
					switch (SubMenu) {
							case 7: // Voltar para o Menu
								break;
							
							case 1: // 1) Cadastrar cliente 
								n++;
								if (CadApagados == 0)
									cad = realloc(cad, n * sizeof(CLIENTE)); // Cria um espaço para o cadastro
								else
									CadApagados--;
								cadastro(cad, n - 1);
								break; // 1
							
							case 2: // 2) Alterar dados do cliente (busca pelo telefone/nome);
								if (n > 0)
									editarcad(cad, n);
								else 
									printf("\nAção invalida, não há cadastros.");
								break; // 2
							
							case 3: // 3) Remover conta
								if (n > 0){
									Aux = buscar(cad, n, Aux2); 
									if (Aux != -1) {
									n--;
									while (Aux < n) {
										cad[Aux] = cad[Aux + 1];									
										Aux++;
									}
									CadApagados++;
									} else
										printf("Ação invalida, cadastro não encontrada.");
								} else
								printf("\nAção invalida, existem 0 Contas no momento.");
								break; // 3
							
							case 4: // 4) Ver menu com as pizzas ordenadas
								printcardapio(cardapio, np);
								break; // 4
							
							case 5: // 5) Fazer pedido
								if ((n > 0)&&(np > 0)) {
									pedidos = realloc(pedidos, (++nt) * sizeof(PEDIDO));
									addpedido(pedidos, cad, cardapio, n, np, nt - 1);
								} else 
								printf("Ação invalida, você cadastrou %d clientes e %d pizzas", n, np);

								break; // 5
							
							case 6: // 6) Recebimento do pedido. situação = 3 e avaliação recebe nota “1-5”.
								if (nt > 0)
									receberpedido(pedidos, nt);
								else
									printf("\nAção invalida, não há pedidos.");
								break; // 6
					}
					printf("\nPressione Enter para Fazer Voltar ao Menu ... "), fflush(stdin), scanf("%*[^\n]"), scanf("%*c"), getchar();
				} while (SubMenu != 7);
				break;
		}
	} while (Menu != 3);
	return 0;
}
