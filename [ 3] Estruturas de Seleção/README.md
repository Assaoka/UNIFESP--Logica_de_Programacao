<h1 align="center"> Estruturas de Seleção </h1>

# If-Else:
&emsp;&emsp; A estrutura de seleção if-else (se - se não) é usada para tomar decisões com base em condições. Ela permite que você execute um bloco de código se uma condição for verdadeira e execute um bloco alternativo se a condição for falsa. A sintaxe da estrutura de seleção if-else é a seguinte:

~~~c
if (condição1) {
    // código a ser executado se a condição1 for verdadeira
} else if (condição2) {
    // código a ser executado se a condição1 for falsa e a condição2 for verdadeira
// ...
} else if (condiçãoN) {
	// código a ser executado se a condição1, condição2, ... condiçãoN-1 forem falsas e a condiçãoN for verdadeira
} else {
    // código a ser executado se nenhuma das condições anteriores for verdadeira
}
~~~

&emsp;&emsp; É importante lembrar que apenas o bloco de código associado à primeira condição verdadeira será executado. Caso deseje que uma não impeça a outra, coloque em estruturas separadas da seguinte forma:
~~~c
if (condição1) {
	// código a ser executado se a condição1 for verdadeira
}
if (condição2) {
	// código a ser executado se a condição2 for verdadeira
}
// ...
~~~



# Switch-Case:
&emsp;&emsp; A estrutura de seleção switch-case é usada para tomar decisões com base em condições. Ela permite que você execute um bloco de código dependendo do valor de uma variável. A sintaxe da estrutura de seleção switch-case é a seguinte:
~~~c
switch (variável) {
	case valor1:
		// código a ser executado se a variável for igual a valor1
		break;
	case valor2:
		// código a ser executado se a variável for igual a valor2
		break;
	// ...
	case valorN:
		// código a ser executado se a variável for igual a valorN
		break;
	default:
		// código a ser executado se a variável não for igual a nenhum dos valores anteriores
}
~~~

## | Switch-Case com Múltiplos Casos Iguais:
&emsp;&emsp; Em algumas situações, pode ser necessário que duas ou mais condições tenham o mesmo resultado. Neste caso, é possível utilizar a seguinte sintaxe:
~~~c
switch (variável) {
	case valor1:
	case valor2:
	case valor3:
		// código a ser executado se a variável for igual a valor1, valor2 ou valor3
		break;
	// ...
	default:
		// código a ser executado se a variável não for igual a nenhum dos valores anteriores
}
~~~




# Operador Ternário:
&emsp;&emsp; 
O operador ternário é uma forma compacta de escrever uma estrutura de seleção if-else. Ele é composto por três partes:  a condição, o valor a ser retornado se a condição for verdadeira e o valor a ser retornado se a condição for falsa. A sintaxe do operador ternário é a seguinte:

~~~c
expressão_condicional ? valor_se_verdadeiro : valor_se_falso;
~~~

## | Exemplo:
~~~c
int x = 10;
int y = (x > 5) ? 1 : 0; // y será igual a 1, pois a condição (x > 5) é verdadeira
~~~

&emsp;&emsp; Essa linha substituí o seguinte bloco de código:
~~~c
int x = 10;
int y;
if (x > 5) {
	y = 1;
} else {
	y = 0;
}
~~~



# Exercícios:
## 1. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.
~~~c
#include <stdio.h>
#include <ctype.h>

int main() {
	int AnoNascimento, Ano_Atual;
	char VF;

	printf("Olá! Digite o Ano em que você nasceu: ");
	scanf(" %d", &AnoNascimento);
	printf("\nAgora digite o ano em que estamos: ");
	scanf(" %d", &Ano_Atual);
  	printf("\nVocê já fez aniversário esse ano? (S/N) ");
	scanf(" %c", &VF);

	if (toupper(VF) == 'S') {
		printf("\nEntão você tem %d anos hoje.", Ano_Atual-AnoNascimento);
	}  else {
		printf("\nEntão você tem %d anos hoje.", Ano_Atual-AnoNascimento-1);
	}
  	
	printf("\nJá em 2050, você fará %d!", 2050-AnoNascimento);
  return 0;
}
~~~

&emsp;&emsp; Outra forma de resolver o exercício 3 é utilizando a data de nascimento e a data atual, ao invés de apenas o ano. Neste caso, a solução seria:

~~~c
#include <stdio.h>

int main() {
	int DiaNascimento, MesNascimento, AnoNascimento, DiaAtual, MesAtual, AnoAtual;

	printf("Olá, utilize a seguinte formatação para datas: dd/mm/aaaa\n");
	printf("Digite a sua data de nascimento: ");
	scanf(" %d/ %d/ %d", &DiaNascimento, &MesNascimento, &AnoNascimento);
	printf("\nAgora digite a data em que estamos: ");
	scanf(" %d/ %d/ %d", &DiaAtual, &MesAtual, &AnoAtual);

	if ((MesAtual > MesNascimento) || ((MesAtual == MesNascimento) && (DiaAtual > DiaNascimento))) {
		printf("\nEntão você tem %d anos hoje.", AnoAtual-AnoNascimento);  
	} else {
		printf("\nEntão você tem %d anos hoje.", AnoAtual-AnoNascimento-1);
	}
	
	printf("\nJá em 2050, você fará %d!",2050-AnoNascimento);
	return 0;
}
~~~

## 2. Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe a qual cidade o DDD pertence, considerando a tabela abaixo. Se a entrada for qualquer outro DDD que não esteja presente na tabela, o programa deverá informar: DDD não cadastrado! Obs: use o comando switch-case.

| Exemplos de Entrada | Exemplos de Saída   |
| ------------------- | ------------------- |
| 61                  | Brasilia            |
| 71                  | Salvador            |
| 11                  | Sao Paulo           |
| 21                  | Rio de Janeiro      |
| 32                  | Juiz de Fora        |
| 19                  | Campinas            |
| 27                  | Vitoria             |
| 31                  | Belo Horizonte      |
| 999                 | DDD não cadastrado! |

~~~c
#include <stdio.h>

int main() {
	int DDD;
		printf("DDD: ");
		scanf(" %d",&DDD);

	switch(DDD) {
		case 61 :
			printf("Brasília");
			break;
		case 71 :
			printf("Salvador");
			break;
		case 11 :
			printf("Sao Paulo");
			break;
		case 21 :
			printf("Rio de Janeiro");
			break;
		case 32 :
			printf("Juiz de Fora");
			break;
		case 19 :
			printf("Campinas");
			break;
		case 27 :
			printf("Vitoria");
			break;
		case 31 :
			printf("Belo Horizonte");
			break;
		default:
			printf("DDD não cadastrado!");}
	return 0;
}
~~~

## 3. Crie um programa que leia um número inteiro e mostre na tela se ele é par ou ímpar. Utilize o operador ternário.
~~~c
#include <stdio.h>

int main() {
    int i;
    printf("Digite um Numero: "), scanf("%d", &i);
    printf("%d eh %s\n", i, (i % 2 == 0) ? "par" : "impar");    
    return 0;
}
~~~

## 4. Faça um programa que encontre as raízes de uma equação do segundo grau na forma: ax2 + bx + c = 0. Implemente o cálculo das raízes como uma função e considere os casos em que delta é igual a zero, maior que zero e menor que zero.
~~~c
#include <stdio.h>
#include <math.h>

int main() {
	float A, B , C, Delta, RaizPart, Raiz1, Raiz2;
	printf("---- CALCULADORA DE RAIZES ----\n");
	printf("\nA = "), scanf(" %f", &A);
	printf("B = "), scanf(" %f", &B);
	printf("C = "), scanf(" %f", &C);  
	
	Delta = B*B -4*A*C;

	if (Delta < 0) {
		RaizPart = -B/2*A;
		if (RaizPart == 0)
			printf("\nAs raizes são: ± %.3fi", (sqrt(-Delta))/2*A);
		else
			printf("\nAs raizes são: %.3f ± %.3fi", RaizPart, (sqrt(-Delta))/2*A);
	} else {
		Raiz1 = (-B+sqrt(Delta))/(2*A);
		Raiz2 = (-B-sqrt(Delta))/(2*A);
		if (Raiz1 == Raiz2)
			printf("\nA raiz é: %.3f",Raiz1); 
		else
			printf("\nAs raizes são: %.3f e %.3f",Raiz1,Raiz2);
	}

	printf("\n-----------------------------"); 
	return 0;
}
~~~


# BeeCrowd:
## 1. [Teste de Seleção 1 - 1035](https://judge.beecrowd.com/pt/problems/view/1035)
~~~c
#include <stdio.h>

int main() {
	int A, B, C, D;
	
	scanf(" %d %d %d %d", &A, &B, &C, &D);
	
	if ((((((B>C)&&(D>A))&&((C+D)>(A+B)))&&(C>0))&&(D>0))&&((A%2)==0))
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");
	return 0;
}
~~~

## 2. [Lanche - 1038](https://judge.beecrowd.com/pt/problems/view/1038)
~~~c
#include <stdio.h>

int main() {
	int C, N;
	
	scanf(" %d %d",&C,&N);
	
	switch (C) {
		case 1:
			printf("Total: R$ %.2f\n",4.0*N); 
			break;  
		case 2:
			printf("Total: R$ %.2f\n",4.5*N); 
			break;  
		case 3: 
			printf("Total: R$ %.2f\n",5.0*N); 
			break;  
		case 4: 
			printf("Total: R$ %.2f\n",2.0*N); 
			break;  
		case 5: 
			printf("Total: R$ %.2f\n",1.5*N); 
			break;  
	}
	return 0;
}
~~~

## 3. [Tipos de Triângulos - 1045](https://judge.beecrowd.com/pt/problems/view/1045)
~~~c
#include <stdio.h>

int main() {
	double  A, B, C, Temp;
	
	scanf(" %lf %lf %lf", &A, &B, &C);

	// Ordenando em ordem decrescente:
	if (B > A)
		Temp = B, B = A, A = Temp; // Observe que quando o if possui apenas uma linha, não é necessário usar chaves.
	if (C > A)
		Temp = C, C = A, A = Temp;
	if (C > B)
		Temp = C, C = B, B = Temp;

	// Resposta:
	if (A >= (B+C)) printf("NAO FORMA TRIANGULO\n"); // Outra coisa que pode ser feita é subir a linha caso o if tenha apenas uma linha.
	else {
		if ((A*A) == (B*B + C*C))
			printf("TRIANGULO RETANGULO\n");
		else if ((A*A) > (B*B + C*C))
			printf("TRIANGULO OBTUSANGULO\n");
		else if ((A*A) < (B*B + C*C))
			printf("TRIANGULO ACUTANGULO\n");
		
		if ((A==B)&&(A==C))
			printf("TRIANGULO EQUILATERO\n");
		else if ((A==B)||(A==C)||(B==C))
			printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
~~~

#
