# Exercícios
🔹 Aula 1 - Sem exercícios, aula de introdução.
<br>🔹 [Aula 2](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Exerc%C3%ADcios.md#aula-2) (12/04/2023)
<br>🔹 [Aula 3](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Exerc%C3%ADcios.md#aula-3) (15/04/2023)
<br>&nbsp;&nbsp;&nbsp;&nbsp;🔹 [Aula 3.1](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Exerc%C3%ADcios.md#aula-31) (20/04/2023)
<br>🔹 [Aula 4](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Exerc%C3%ADcios.md#aula-4) (25/04/2023)

## Aula 2
1-) Faça um programa que lê o valor da cotação do dólar em um determinado dia e em seguida lê uma quantia em dólares. Realize a conversão para reais.
<br>🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula2_Ex1_JoaoAssaoka.c)

2-) Ler dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.
<br>🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula2_Ex2_JoaoAssaoka.c)

3-) Leia um valor inteiro e apresente os resultados do quadrado, do cubo e da raiz quadrada do valor lido.
<br>🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula2_Ex3_JoaoAssaoka.c)

4-) Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.
<br>🔹 [Primeira Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula2_Ex4_JoaoAssaoka.c)
<br>🔹 [Resolução Aprimorada](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula2_Ex4_V2_JoaoAssaoka.c)

## Aula 3
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Está aula foi feita no [BeeCrowd](https://www.beecrowd.com.br/), então todas as questões podem ser encontradas [aqui](https://www.beecrowd.com.br/judge/pt/problems/index/1), mas irei anexar as questões aqui para facilitar para os leitores.
Nome das Atividades:  "Média 2", "Salário" e "Idade em Dias".

1-) Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
<br><br>ENTRADA: O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).
<br><br>SAÍDA: Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade. Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|5.0<br>6.0<br>7.0|MEDIA = 6.3|
|5.0<br>10.0<br>10.0|MEDIA = 9.0|
|10.0<br>10.0<br>5.0|MEDIA = 7.5|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3_Ex1_JoaoAssaoka.c)

<br>2-) Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
<br><br>ENTRADA: O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.
<br><br>SAÍDA: Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|25<br>100<br>5.50|NUMBER = 25<br>SALARY = U$ 550.00|
|1<br>200<br>20.50|NUMBER = 1<br>SALARY = U$ 4100.00|
|6<br>145<br>15.55|NUMBER = 6<br>SALARY = U$ 2254.75|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3_Ex2_JoaoAssaoka.c)


<br>DESAFIO-) Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias. Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
<br><br>ENTRADA: O arquivo de entrada contém um valor inteiro.
<br><br>SAÍDA: Imprima a saída conforme exemplo fornecido.
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|400|1 ano(s)<br>1 mes(es)<br>5 dia(s)|
|800|2 ano(s)<br>2 mes(es)<br>10 dia(s)|
|30|0 ano(s)<br>1 mes(es)<br>0 dia(s)|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3_Desafio_JoaoAssaoka.c)

## Aula 3.1
1-) A professora Lilian usa a seguinte avaliação:
- M1: é a média de duas provas (P1+P2/2);
- M2: é a média de três trabalhos (T1+T2+T3/3);
- M3: é a média de 30 exercícios (M3).

Leia seis números (P1, P2, T1, T2, T3, M3) correspondente às notas de um aluno. Calcule as médias M1 e M2 e a NOTA FINAL com pesos 60%, 30% e 10%, respectivamente. Informe a nota final ao aluno.

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3.1_Ex1_JoaoAssaoka.c)

### BeeCrowd: "Área", "Cédulas" e "Conversão de Tempo"

2-) Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
<br>a) a área do triângulo retângulo que tem A por base e C por altura.
<br>b) a área do círculo de raio C. (pi = 3.14159)
<br>c) a área do trapézio que tem A e B por bases e C por altura.
<br>d) a área do quadrado que tem lado B.
<br>e) a área do retângulo que tem lados A e B.
<br><br>ENTRADA: O arquivo de entrada contém três valores com um dígito após o ponto decimal.
<br><br>SAÍDA: O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|3.0<br>4.0<br>5.2|TRIANGULO: 7.800<br>CIRCULO: 84.949<br>TRAPEZIO: 18.200<br>QUADRADO: 16.000<br>RETANGULO: 12.000|
|12.7<br>10.4<br>15.2|TRIANGULO: 96.520<br>CIRCULO: 725.833<br>TRAPEZIO: 175.560<br>QUADRADO: 108.160<br>RETANGULO: 132.080|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3.1_Ex2_JoaoAssaoka.c)

3-) Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
<br><br>ENTRADA: O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
<br><br>SAÍDA: Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|576|576<br>5 nota(s) de R$ 100,00<br>1 nota(s) de R$ 50,00<br>1 nota(s) de R$ 20,00<br>0 nota(s) de R$ 10,00<br>1 nota(s) de R$ 5,00<br>0 nota(s) de R$ 2,00<br>1 nota(s) de R$ 1,00|
|11257|11257<br>112 nota(s) de R$ 100,00<br>1 nota(s) de R$ 50,00<br>0 nota(s) de R$ 20,00<br>0 nota(s) de R$ 10,00<br>1 nota(s) de R$ 5,00<br>1 nota(s) de R$ 2,00<br>0 nota(s) de R$ 1,00|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3.1_Ex3_JoaoAssaoka.c)

4-) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
<br><br>ENTRADA: O arquivo de entrada contém um valor inteiro N.
<br><br>SAÍDA: IImprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
<br><br>EXEMPLOS:
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|556|0:9:16|
|1|0:0:1|
|140153|38:55:53|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula3.1_Ex4_JoaoAssaoka.c)

obs: A partir da proxima aula passarei a postar apenas o link das questões do beecrowd, com o objetivo de facilitar a leitura.

## Aula 4
1-) Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe a qual cidade o DDD pertence, considerando a tabela abaixo. Se a entrada for qualquer outro DDD que não esteja presente na tabela, o programa deverá informar: DDD não cadastrado! Obs: use o comando switch-case.
|Exemplos de Entrada|Exemplos de Saída|
|--|--|
|61|Brasilia|
|71|Salvador|
|11|Sao Paulo|
|21|Rio de Janeiro|
|32|Juiz de Fora|
|19|Campinas|
|27|Vitoria|
|31|Belo Horizonte|
|999|DDD não cadastrado!|

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula4_Ex1_JoaoAssaoka.c)

2-) Faça um programa que encontre as raízes reais de uma equação do segundo grau na forma: ax2 + bx + c = 0. Implemente o cálculo das raízes como uma função e considere os casos em que delta é igual a zero, maior que zero e menor que zero.
<br>x = (-b +- raiz(Delta))/2a
<br>Delta = b^2 - 4ac

🔹 [Minha Resolução](https://github.com/Assaoka/Minha-Jornada-de-Aprendizado-em-C/blob/main/Aula4_Ex2_JoaoAssaoka.c)
