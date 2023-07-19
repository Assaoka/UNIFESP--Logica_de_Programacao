#define Comandos_H

// Structs
typedef struct {
	char rua[100], bairro[100], cidade[100];
	int n;
} ENDERECO;

typedef struct {
	char telefone[15] /* aa aaaaa-aaaa*/, nome[100];
	ENDERECO endereco;
} CLIENTE;

typedef struct {
	int cod;
	float valor;
	char nome[100], descricao[200];
} PIZZAS; 

typedef struct {
	int etapa; // “1 - em preparo, 2 - a caminho, 3 – entregue”,
	int entregador, nota;
	float valor;
	char cliente[100], pizza[100];
// O código é a posição no vetor
} PEDIDO;


// Funções
int buscar(CLIENTE cad[], int n, char procurar[100]);
	// Procura a posição de Cadastro

int cadastro(CLIENTE cad[], int n);
	// Cadastra um Cliente na Posição n

void printcad(CLIENTE cad[], int n);
	// Imprime a Struct de cadastro de um Cliente

int editarcad (CLIENTE cad[], int n);
	// É um combo entre Buscar e Cadastrar

void addpizza (PIZZAS cardapio[], int np);
	// Cadastra uma Pizza

void printpizza (PIZZAS cardapio[], int np);
	// Imprime as informações de uma Pizza

int buscarpizza (PIZZAS cardapio[], int np, char procurar[100]);
	// Busca Pizza por nome ou código

int editarpizza (PIZZAS cardapio[], int np);
	// Edita Pizza

void printcardapio (PIZZAS cardapio[], int np);
	// Imprime todas as pizzas

void addpedido (PEDIDO pedidos[], CLIENTE cad[], PIZZAS cardapio[],int n, int np, int nt);
	// Fazer pedido

void printpedido(PEDIDO pedidos[], int nt);
	// Imprime pedido

int despacharpedido(PEDIDO pedidos[], int nt, int entregadores[]);
	// alterar etapa para 2 e o código do entregador para um inteiro entre 1 e 10

int receberpedido(PEDIDO pedidos[], int nt);
	// recebe pedido, altera etapa para 3

void montante(PEDIDO pedidos[], int nt);
	// Imprime os resltados do dia
