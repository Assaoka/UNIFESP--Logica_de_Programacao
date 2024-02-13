


## 3. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.
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




# BeeCrowd:
## 1. [Teste de Seleção 1](https://judge.beecrowd.com/pt/problems/view/1035)