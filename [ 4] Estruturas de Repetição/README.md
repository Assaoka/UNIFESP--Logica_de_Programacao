<h1 align="center"> Estruturas de Repetição </h1>

# While:
&emsp;&emsp; O comando while é uma estrutura de repetição que permite repetir instruções enquanto (while) certa condição for verdadeira. É importante inicializar as variáveis de controle do loop while antes do comando e garantir que a condição se torne falsa para terminar o looping. A sintaxe do comando while é a seguinte:
~~~c
while (condição) {
    // código a ser repetido
}
~~~

&emsp;&emsp; Da mesma forma que o if, o while pode ser utilizado com ou sem chaves (no caso de apenas uma instrução). O exemplo a seguir mostra um programa que imprime os números de 1 a 10:

~~~c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) { // Enquanto i for menor ou igual a 10, repita
        printf("%d\n", i);
        i++;
    }
    return 0;
}
~~~



# Do-While:
&emsp;&emsp; O comando do-while é uma estrutura de repetição que permite repetir instruções enquanto (while) certa condição for verdadeira. A diferença entre o do-while e o while é que o do-while executa o bloco de código pelo menos uma vez, mesmo que a condição seja falsa. A sintaxe do comando do-while é a seguinte:

~~~c
do {
    // código a ser repetido
} while (condição);
~~~

&emsp;&emsp; Um exemplo útil para o do-while é a validação de entrada de dados. O exemplo a seguir mostra um programa que lê um número até que ele seja maior que 3:
~~~c
#include <stdio.h>

int main() {
    int i;

    do {
        printf("\nN = "), scanf(" %d", &i);	
    } while (i < 3); // Enquanto i for menor que 3, repita

    // Utilização da variável
    return 0;
}
~~~



# For:
&emsp;&emsp; O comando for é uma estrutura de repetição que permite repetir instruções um número fixo de vezes. A sintaxe do comando for é a seguinte:
~~~c
for (inicialização; condição; incremento) {
    // código a ser repetido
}
~~~

&emsp;&emsp; Diferentemente do while e do-while, o for possui três partes: a inicialização, a condição e o incremento. A inicialização é executada uma única vez, antes do início do looping. A condição é testada a cada iteração do loop, e o incremento é executado após cada iteração. O exemplo a seguir mostra um programa que imprime os números de 1 a 10:

~~~c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) // Inicializa i com 1; enquanto i for menor ou igual a 10, repita; incrementa i
        printf("%d\n", i);

    return 0;
}
~~~

&emsp;&emsp; O comando for é muito útil para percorrer vetores e matrizes (assunto que será abordado mais adiante), pois permite controlar o índice de forma mais clara e concisa.



# Repetições Aninhadas:
&emsp;&emsp; Repetições aninhadas ocorrem quando uma estrutura de repetição está contida dentro de outra. A execução começa com o loop externo, que envolve o loop interno. O loop interno é executado repetidamente até que sua condição seja falsa, momento em que a execução retorna para o loop externo e avança para a próxima iteração. Esse processo continua até que o loop externo também termine.

&emsp;&emsp; Esse tipo de estrutura é muito importante (usamos para percorrer todas as casas de uma matriz, por exemplo), mas é importante ter cuidado ao usar repetições aninhadas, pois elas podem levar a um aumento significativo na complexidade e no tempo de execução do programa. 



# Break:
&emsp;&emsp; O comando break é um modo conveniente de terminar imediatamente a execução de um bloco controlado por uma estrutura de repetição, sem necessidade de esperar a próxima avaliação da condição. O exemplo a seguir mostra um programa que imprime os números de 1 a 10, mas interrompe a execução quando o número 5 é encontrado:
~~~c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Termina imediatamente o loop quando i é igual a 5
        }
        printf("%d ", i);
    } // Imprime 1 2 3 4
    return 0;
}
~~~

&emsp;&emsp; O comando break é muito útil para interromper a execução de um loop quando uma condição é atendida. No entanto, é importante usá-lo com moderação, pois o uso excessivo de break pode tornar o código difícil de entender e depurar.



# Continue:
&emsp;&emsp; O comando continue é um modo conveniente de pular o restante do bloco controlado por uma estrutura de repetição e continuar com a próxima iteração. O exemplo a seguir mostra um programa que imprime os números de 1 a 10, mas pula a impressão do número 5:
~~~c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Pula o restante do loop quando i é igual a 5
        }
        printf("%d ", i);
    } // Imprime 1 2 3 4 6 7 8 9 10
    return 0;
}
~~~

&emsp;&emsp; O comando continue é muito útil para pular a execução de um loop quando uma condição é atendida. No entanto, é importante usá-lo com moderação, pois o uso excessivo de continue pode tornar o código difícil de entender e depurar.



# Exercícios:
## 1. Dois jogadores irão fazer a seguinte disputa: Uma moeda será lançada 10 vezes. Quando der cara o jogador1 faz um ponto. Quando der coroa o jogador2 faz um ponto. Faça um programa que simule 10 jogadas com a função rand(), considere que 0 é cara e 1 é coroa. No final indique o jogador vencedor.
~~~c
#include <stdio.h> // Entrada e Saída de informações.
#include <stdlib.h> // Sorteios.
#include <time.h> // Semente para os Sorteios.

int main() {
	int NSorteios = 0, Sorteio, Jogador1 = 0, Jogador2 = 0; // Variáveis

	srand(time(NULL)); // Usa a hora para gerar semente.
	while ((NSorteios++) < 10) { // Loop para realizar 10 sorteios
		Sorteio = rand()%2; // Gera um número aleatório e pega o resto da divisão por 2 (Resulta Sempre em 0 ou 1)

		if (Sorteio==0) // Adiciona 1 em Jogador1 e imprime o número do sorteio e Cara.
			Jogador1++, printf("Sorteio %02d: Cara\n", NSorteios);
		else // Adiciona 1 em Jogador2 e imprime o número do sorteio e Coroa.
			Jogador2++, printf("Sorteio %02d: Coroa\n", NSorteios);
	}

	// Imprime o Resultado:
	if (Jogador1>Jogador2)
		printf("\nJogador1 Venceu");
	else if (Jogador1<Jogador2)
		printf("\nJogador2 Venceu");
	else if (Jogador1==Jogador2)
		printf("\nEmpate");

	return 0;
}
~~~

&emsp;&emsp; Como sabemos o número de sorteios, podemos utilizar o laço de repetição for, que é mais adequado para este tipo de situação. O código a seguir realiza a mesma tarefa que o código anterior, mas utiliza o laço de repetição for:
~~~c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int Sorteio;

	srand(time(NULL));
	for (NSorteios = 1, Jogador1 = 0, Jogador2 = 0; NSorteios <= 10; NSorteios++) {
        Sorteio = rand()%2;
        if (Sorteio == 0)
            Jogador1++, printf("Sorteio %02d: Cara\n", NSorteios);
        else
            Jogador2++, printf("Sorteio %02d: Coroa\n", NSorteios);
    }

	if (Jogador1>Jogador2)
		printf("\nJogador1 Venceu");
	else if (Jogador1<Jogador2)
		printf("\nJogador2 Venceu");
	else if (Jogador1==Jogador2)
		printf("\nEmpate");

	return 0;
}
~~~

## 2. Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
~~~c
#include <stdio.h>

int main() {
	int n;
	
	printf("Digite um número: "), scanf(" %d", &n);
	printf("\n----- Tabuada -----");
	
	for (int i = 1; i <= 10; i++)
		printf("\n%d * %d = %d", i, n, n*i);
	
	printf("\n-------------------\n");
	return 0;
}
~~~

## 3. Um determinado material perde metade de sua massa a cada 30 segundos. Dada a massa inicial informada pelo usuário, em gramas, fazer um programa em C que calcule o tempo necessário para que essa massa se torne menor que 1 grama. O programa em C deve escrever a massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.
~~~c
#include <stdio.h>

int main() {
	float massa;
	int tempo = 0;

	printf("Qual a massa inicial: ");
	scanf("%f", &massa);
	
	while (massa >= 1)
		massa /= 2, tempo += 30;
	
	printf("\nTempo Necessário: %02d:%02d:%02d\n",tempo/3600,(tempo%3600)/60, (tempo%3600)%60);
	
	return 0;
}
~~~



# BeeCrowd:
## 1. [PUM - 1142](https://judge.beecrowd.com/pt/problems/view/1142)
~~~c
#include <stdio.h>

int main() {
	int N;
	scanf(" %d",&N);
	
	for (int i = 1; N > 0; i += 4, N--)
		printf("%d %d %d PUM\n", i, i+1, i+2);
	
	/* Opção com while:
	int i = 1;
	while (N-- > 0) {
		printf("%d %d %d PUM\n", i, i+1, i+2);
		i += 4;
	}
	*/
	return 0;
}
~~~

## 2. [Sequência Crescente - 1146](https://judge.beecrowd.com/pt/problems/view/1146)
~~~c
#include <stdio.h>

int main() {
	int X, i;
	
	do {
		scanf(" %d", &X);
		if (X == 0) break;
		// Ficaria mais legível colocar o for dentro de um if (X != 0), mas utilizei o break para exemplificar.
		for (i = 1; i <= X; i++)
			if (i == X)	printf("%d\n", i);
			else printf("%d ", i);
	} while (X != 0);

	return 0;
}
~~~

## 3. [Fibonacci Fácil - 1151](https://judge.beecrowd.com/pt/problems/view/1151)
~~~c
#include <stdio.h>

int main() {
	int N, a = 0, b = 1, c;

	scanf(" %d", &N);
	for (; N > 0; N--, c = a, a += b, b = c) // Podemos deixar a inicialização e o incremento vazios se quisermos.
		if (N == 1)	printf("%d\n", a);
		else printf("%d ", a);
	
	return 0;
}
~~~

#
