<h1 align="center"> Operadores </h1>

# Operadores Aritméticos:
&emsp;&emsp; Como o próprio nome sugere, os operadores aritméticos são utilizados para realizar operações matemáticas. Eles são utilizados para realizar operações aritméticas elementares, como adição, subtração, multiplicação, divisão, etc. Os operadores aritméticos são os seguintes:
| Operador | Descrição                                      |
| -------- | ---------------------------------------------- |
| `+`      | Realiza a adição de dois valores.              |
| `-`      | Realiza a subtração de dois valores.           |
| `*`      | Realiza a multiplicação de dois valores.       |
| `/`      | Realiza a divisão de dois valores.             |
| `%`      | Retorna o resto da divisão entre dois valores. |
| `++`     | Aumenta o valor de uma variável em 1.          |
| `--`     | Diminui o valor de uma variável em 1.          |

`ATENÇÃO:` A divisão entre dois números inteiros sempre resulta em um número inteiro (Mesmo que o resultado seja armazenado em uma variável do tipo float/double). Se você deseja que o resultado seja um número decimal, pelo menos um dos números deve ser decimal. Por exemplo:

~~~
#include <stdio.h>
int main () {
    int A, B;
    float C;

    printf("Digite um valor para A: ");
    scanf(" %d", &A);
    printf("Digite um valor para B: ");
    scanf(" %d", &B);
    
    C = A/B;
    printf("A/B = %.2f\n", C);

    return 0;
}
~~~

&emsp;&emsp; Se você digitar 3 para A e 2 para B, o resultado será 1.00. Isso ocorre porque ambas as variáveis A e B são do tipo inteiro, então a divisão entre elas também será inteira. Para que o resultado seja 1.50, pelo menos uma das variáveis deve ser do tipo float/double. Por exemplo:

~~~c
int main () {
    int A;
    float B, C;

    printf("Digite um valor para A: ");
    scanf(" %d", &A);
    printf("Digite um valor para B: ");
    scanf(" %f", &B);
    
    C = A/B;
    printf("A/B = %.2f\n", C);

    return 0;
}
~~~

&emsp;&emsp; Neste caso, se você digitar 3 para A e 2 para B, o resultado será 1.50. Isso ocorre porque a variável B é do tipo float, então a divisão entre A e B também será float.

| Tipo de Variável | Tipo de Variável | Resultado |
| ---------------- | ---------------- | --------- |
| Inteiro          | Inteiro          | Inteiro   |
| Inteiro          | Real             | Real      |
| Real             | Inteiro          | Real      |



# Operadores de Atribuição:
&emsp;&emsp; Vamos chamar o valor antes do operador de `A` e o valor depois do operador de `B`. Os operadores de atribuição são os seguintes:

| Operador | Descrição                                                                                             |
| -------- | ----------------------------------------------------------------------------------------------------- |
| `=`      | Operação de atribuição básico. Atribui a variável da esquerda o valor da direita. Lê-se "A recebe B". |
| `+=`     | A recebe A + B.                                                                                       |
| `-=`     | A recebe A - B.                                                                                       |
| `*=`     | A recebe A * B.                                                                                       |
| `/=`     | A recebe A / B.                                                                                       |
| `%=`     | A recebe A % B.                                                                                       |



# Operadores Relacionais:
&emsp;&emsp; Os operadores relacionais são utilizados para comparar dois valores. Eles são utilizados para verificar se uma condição é verdadeira ou falsa. Os operadores relacionais são os seguintes:

| Operador | Descrição                                                             |
| -------- | --------------------------------------------------------------------- |
| `==`     | Verifica se dois valores são iguais.                                  |
| `!=`     | Verifica se dois valores são diferentes.                              |
| `>`      | Verifica se o valor da esquerda é maior que o valor da direita.       |
| `<`      | Verifica se o valor da esquerda é menor que o valor da direita.       |
| `>=`     | Verifica se o valor da esquerda é maior ou igual ao valor da direita. |
| `<=`     | Verifica se o valor da esquerda é menor ou igual ao valor da direita. |



# Operadores Lógicos:
&emsp;&emsp; Os operadores lógicos são utilizados para combinar duas ou mais expressões condicionais. Eles são utilizados para verificar se duas ou mais condições são verdadeiras ou falsas. Os operadores lógicos são os seguintes:

| Operador | Descrição                                                                        |
| -------- | -------------------------------------------------------------------------------- |
| `&&`     | Retorna verdadeiro se ambas as expressões condicionais forem verdadeiras.        |
| `\|\|`   | Retorna verdadeiro se pelo menos uma das expressões condicionais for verdadeira. |
| `!`      | Retorna verdadeiro se a expressão condicional for falsa.                         |

## | Tabela Verdade:
<img src="./Bob%20Esponja.png" alt="Tabela Verdade" width="100%"/>



# Exercícios:
## 1. Faça um programa que lê o valor da cotação do dólar em um determinado dia e em seguida lê uma quantia em dólares. Realize a conversão para reais.
~~~c
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
~~~

## 2. Leia um valor inteiro e apresente os resultados do quadrado, do cubo e da raiz quadrada do valor lido.
~~~c
#include <stdio.h>
#include <math.h>

int main() {
	int N;
	
	printf("Digite um Valor Inteiro: ");
	scanf(" %d", &N);
	
	printf("--------------------------\n");
	printf("%d^2 = %d\n", N, N*N);
	printf("%d^3 = %d\n",N , N*N*N);
	printf("√%d = %f\n", N, sqrt(N));    
	printf("--------------------------\n");
	
	return 0;
}
~~~

## 3. A professora Lilian usa a seguinte avaliação:
`M1:` é a média de duas provas (P1+P2/2);

`M2:` é a média de três trabalhos (T1+T2+T3/3);

`M3:` é a média de 30 exercícios (M3).

&emsp;&emsp; Leia seis números (P1, P2, T1, T2, T3, M3) correspondente às notas de um aluno. Calcule as médias M1 e M2 e a NOTA FINAL com pesos 60%, 30% e 10%, respectivamente. Informe a nota final ao aluno.

~~~c


# BeeCrowd:
## 1. [Média 2 - 1006](https://judge.beecrowd.com/pt/problems/view/1006)
~~~c
#include <stdio.h>

int main() {
    double A, B, C;
    scanf(" %lf %lf %lf",&A,&B,&C);
    printf("MEDIA = %.1lf\n",(2*A+3*B+5*C)/10);
    return 0;
}
~~~



## 2. [Salário - 1008](https://judge.beecrowd.com/pt/problems/view/1008)
~~~c
#include <stdio.h>

int main() {
	int N, Ht;
	float VpH;

	scanf(" %d %d %f",&N,&Ht,&VpH);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", N, Ht*VpH);
	return 0;
}
~~~

## 3. [Idade em Dias - 1020](https://judge.beecrowd.com/pt/problems/view/1020)
~~~c
#include <stdio.h>

int main() {
	int D, Anos, Meses, Dias;
	scanf(" %d",&D);

	Anos = D / 365;
	Meses = (D % 365) / 30;
	Dias = (D % 365) % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Anos, Meses, Dias);
    return 0;
}
~~~
