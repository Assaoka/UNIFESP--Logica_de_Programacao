<h1 align="center"> Vetores, Matrizes e Strings </h1>

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

&emsp;&emsp; Você pode inicializar um vetor de duas formas:
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
Em breve...
