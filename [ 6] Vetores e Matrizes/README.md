<h1 align="center"> Vetores e Matrizes </h1>

# Vetores:
&emsp;&emsp; Vetores são estruturas indexadas utilizadas para armazenar vários dados do mesmo tipo. Para declarar um vetor, basta informar o tipo de dado que será armazenado, seguido do nome do vetor e o número de elementos que ele terá entre colchetes:
~~~c
tipo nome_vetor[n];
~~~

&emsp;&emsp; Ao declarar o vetor, o compilador reserva n "gavetas" consecutivas na memória, onde cada "gaveta" armazenará um elemento do vetor. Para acessar um elemento do vetor, basta informar o nome do vetor seguido do índice do elemento (que varia de 0 a n-1) entre colchetes:

~~~c
nome_vetor[0]; // acessa o PRIMEIRO elemento do vetor
nome_vetor[1]; // acessa o SEGUNDO elemento do vetor
...
nome_vetor[n-1]; // acessa o ÚLTIMO elemento do vetor
~~~

## | Inicializar um Vetor Informando os Valores dos Elementos entre Chaves:
~~~c
int vetor[5] = {1, 2, 3, 4, 5};
~~~

&emsp;&emsp; O número de elementos informados entre chaves deve ser menor ou igual ao número de elementos do vetor. Se for menor, os elementos restantes do vetor serão inicializados com 0. Caso coloque as chaves vazias, todos os elementos do vetor serão inicializados com 0.
~~~c
int vetor[5] = {1, 2, 3}; // vetor = {1, 2, 3, 0, 0}
~~~

&emsp;&emsp; Podemos também omitir o número de elementos do vetor e inicializá-lo com os valores dos elementos entre chaves. Nesse caso, o compilador contará o número de elementos entre chaves e inicializará o vetor com esse número de elementos.
~~~c
int vetor[] = {1, 2, 3, 4, 5}; // vetor = {1, 2, 3, 4, 5}
~~~

  
## | Inicializar um Vetor Atribuindo Valores aos Elementos do Vetor um por um:
&emsp;&emsp; Outra forma de inicializar um vetor é atribuindo valores aos elementos do vetor um por um, utilizando um laço de repetição. Podemos fazer a mesma declaração do vetor[] = {1, 2, 3, 4, 5} da seguinte forma:

~~~c
int vetor[5];
for (int i = 0; i < 5; i++)
    vetor[i] = i + 1;
~~~



# Matrizes:
&emsp;&emsp; Matrizes são vetores de duas dimensões, ou seja, vetores de vetores. Para declarar uma matriz, basta informar o tipo de dado que será armazenado, seguido do nome da matriz e o número de linhas e colunas que ela terá entre colchetes:
~~~c
tipo nome_matriz[n_linhas][n_colunas];
~~~

&emsp;&emsp; Ao declarar a matriz, o compilador reserva n_linhas * n_colunas "gavetas" consecutivas na memória, onde cada "gaveta" armazenará um elemento da matriz. Para acessar um elemento da matriz, basta informar o nome da matriz seguido do índice da linha e da coluna do elemento entre colchetes:

~~~c
nome_matriz[0][0]; // acessa o PRIMEIRO elemento da matriz (linha 0, coluna 0)
nome_matriz[0][1]; // acessa o SEGUNDO elemento da matriz (linha 0, coluna 1)
// ...
nome_matriz[n_linhas-1][n_colunas-1]; // acessa o ÚLTIMO elemento da matriz (linha n_linhas-1, coluna n_colunas-1)
~~~

&emsp;&emsp; Essa é a definição de uma matriz tradicional, podemos ter matrizes com mais de duas dimensões dependendo do problema. Basta adicionar mais colchetes informando o número de dimensões que a matriz terá. Exemplo de uma matriz de três dimensões:
~~~c
int matriz[2][3][4];
matriz[0][0][0]; // acessa o PRIMEIRO elemento da matriz (linha 0, coluna 0, profundidade 0)
matriz[0][0][1]; // acessa o SEGUNDO elemento da matriz (linha 0, coluna 0, profundidade 1)
// ...
matriz[1][2][3]; // acessa o ÚLTIMO elemento da matriz (linha 1, coluna 2, profundidade 3)
~~~

## | Inicializar uma Matriz Informando os Valores dos Elementos entre Chaves:
~~~c
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
~~~

&emsp;&emsp; A declaração acima inicializa a seguinte matriz:

| `X`       | `Coluna 0` | `Coluna 1` | `Coluna 2` |
| --------- | ---------- | ---------- | ---------- |
| `Linha 0` | 1          | 2          | 3          |
| `Linha 1` | 4          | 5          | 6          |

&emsp;&emsp; Da mesma forma que os vetores, podemos omitir o número de linhas e colunas da matriz e inicializá-la com os valores dos elementos entre chaves. O compilador contará o número de linhas e colunas entre chaves e inicializará a matriz com esse número de linhas e colunas.
~~~c
int matriz[][] = {{1, 2, 3},
                  {4, 5, 6}};
~~~

&emsp;&emsp; Podemos também inicializar uma matriz com valores ausentes, eles serão inicializados com 0 como nos vetores.
~~~c
int matriz[2][3] = {{1, 2}, {4, 5, 6}};
~~~

&emsp;&emsp; A declaração acima inicializa a mesma matriz da declaração anterior, mas com o valor 0 na posição [0][2] que estava ocupada pelo valor 3.

## | Inicializar uma Matriz Atribuindo Valores aos Elementos da Matriz um por um:
&emsp;&emsp; Outra forma é inicializar uma matriz com repetições aninhadas, onde a primeira repetição percorre as linhas da matriz e a segunda repetição percorre as colunas da matriz. Podemos fazer a mesma declaração da matriz[][] = {{1, 2, 3}, {4, 5, 6}} da seguinte forma:
~~~c
int matriz[2][3];
for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
        matriz[i][j] = i * 3 + j + 1;
~~~



# Exercícios:
## 1. 





