<h1 align="center"> Definição de variáveis, Leitura e Escrita de Dados </h1>

# Declarando variáveis:
&emsp;&emsp; Para declarar uma variável em C, precisamos definir o tipo e o nome da variável.
~~~c
tipo nome_da_variavel;
~~~

## | Tipos de variáveis:
&emsp;&emsp; C possui quatro tipos de variáveis básicas:
| Tipo     | Descrição                                                                      |
| -------- | ------------------------------------------------------------------------------ |
| `char`   | Um byte que armazena o código de um caractere do conjunto de caracteres local. |
| `int`    | Um inteiro cujo tamanho depende do processador, tipicamente 16 ou 32 bits.     |
| `float`  | Um número real com precisão simples.                                           |
| `double` | Um número real com precisão dupla.                                             |

## | Nomeando variáveis:
1. O primeiro caractere tem que ser uma letra ou “_” . O restante do nome pode conter letras, dígitos e sublinhados.
2. Palavras-chave de C (int, for, while, etc...) não podem ser utilizadas.
3. Não pode conter espaços em branco, letras com acentos ou símbolos (exceto  “_”).
4. C é case-sensitive, então caracteres em caixa alta e em caixa baixa são tratados de modo diferente (contador ≠ Contador ≠ CONTADOR).



# Leitura e Escrita de Dados:
&emsp;&emsp; Para ler e escrever dados em C, podemos utilizar as funções `scanf` e `printf` da biblioteca stdio.h (standard input/output header -> cabeçalho padrão de entrada/saída). A função `scanf` é utilizada para ler dados do teclado e a função `printf` é utilizada para escrever dados na tela. 

## | Sintaxe:
&emsp;&emsp; Ambas as funções utilizam o conceito de formatação para ler e escrever os dados de acordo com o tipo de variável. Para isso, utilizamos a seguinte sintaxe:
| Função       | Sintaxe                                                                                                                 |
| ------------ | ----------------------------------------------------------------------------------------------------------------------- |
| `%c`         | Leitura/escrita de caractere (char).                                                                                    |
| `%d`         | Leitura/escrita de números inteiros (int).                                                                              |
| `%f` e `%lf` | Leitura/escrita de número reais (float e double).                                                                       |
| `%s`         | Leitura de uma string até encontrar um espaço ou um '\n'. Escrita de uma string até encontrar um '\0' (caractere nulo). |
| `%[^\n]`     | Leitura de uma string até encontrar um ‘\n’.                                                                            |

## | Exemplo de Uso:
~~~c
int n;
printf("Digite um número inteiro: ");
scanf(" %d", &n); # ATENÇÃO: O “&” é utilizado para indicar o endereço da variável. Isso fica mais claro quando estudarmos funções e ponteiros.
printf("O número digitado foi: %d", n);
~~~



# Exercícios:
## 1. Ler dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.

~~~c
#include <stdio.h>

int main() {
	int A, B, C;

	printf("Digite um valor para A: ");
	scanf(" %d", &A);
	printf("Digite um valor para B: ");
	scanf(" %d", &B);

	printf("A vale %d, já B vale %d!\n", A, B);

	C = A;
	A = B;
	B = C;

	printf("Depois da troca, A vale %d, B vale %d!\n", A, B);
	return 0;
}
~~~

&emsp;&emsp; O código acima funciona para números inteiros, mas e se quisermos trocar o valor de duas strings? Podemos utilizar a função `strcpy` da biblioteca string.h para isso.

~~~c
#include <stdio.h>
#include <string.h>

int main() {
	char A[100],B[100],C[100];

	printf("Digite uma palavra para guardar em A: ");
	scanf(" %s", A);
	printf("Digite outra palavra para guardar em B: ");
	scanf(" %s", B);

	printf("Em A guardamos %s, já em B guardamos %s!\n", A, B);

	strcpy(C, A);
	strcpy(A, B);
	strcpy(B, C);

	printf("Depois da troca, A vale %s, B vale %s!\n", A, B);
	return 0;
}
~~~

#
