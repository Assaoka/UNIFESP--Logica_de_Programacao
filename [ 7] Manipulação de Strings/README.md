<h1 align="center"> Manipulação de Strings </h1>

&emsp;&emsp; Strings são vetores de caracteres que armazenam uma sequência de caracteres terminada pelo caractere nulo '\0'. Para declarar uma string, basta informar o tipo de dado char seguido do nome da string e o número de caracteres que ela terá entre colchetes:
~~~c
char nome_string[n];
~~~

&emsp;&emsp; Valem as mesmas regras de vetores para strings, como inicializar um vetor informando os valores dos elementos entre chaves e atribuindo valores aos elementos da string um por um. Porém, elas possuem uma forma mais simples de inicialização:
~~~c
char nome_string[] = "Hello, World!";
~~~

&emsp;&emsp; Caracteres são armazenados na string de acordo com a tabela ASCII, onde cada caractere é representado por um número inteiro. A tabela a seguir mostra os caracteres que podem ser impressos na tela e seus respectivos códigos ASCII:

## | Tabela ASCII de Caracteres Imprimíveis:
| `Número` | `Char` | `Descrição`                                     |
| -------- | ------ | ----------------------------------------------- |
| 32       |        | Espaço                                          |
| 33       | !      | Ponto de exclamação                             |
| 34       | "      | Aspas duplas                                    |
| 35       | #      | Sustenido (Jogo da velha / Hashtag / Cerquilha) |
| 36       | $      | Sinal de dólar (ou cifrão)                      |
| 37       | %      | Sinal de porcentagem                            |
| 38       | &      | E comercial                                     |
| 39       | '      | Aspas simples                                   |
| 40       | (      | Parêntese esquerdo (abre parênteses)            |
| 41       | )      | Parêntese direito (fecha parênteses)            |
| 42       | *      | Asterisco                                       |
| 43       | +      | Sinal de adição                                 |
| 44       | ,      | Vírgula                                         |
| 45       | -      | Sinal de subtração                              |
| 46       | .      | Ponto final                                     |
| 47       | /      | Barra (ou traço)                                |
| 48       | 0      | Número zero                                     |
| 49       | 1      | Número um                                       |
| 50       | 2      | Número dois                                     |
| 51       | 3      | Número três                                     |
| 52       | 4      | Número quatro                                   |
| 53       | 5      | Número cinco                                    |
| 54       | 6      | Número seis                                     |
| 55       | 7      | Número sete                                     |
| 56       | 8      | Número oito                                     |
| 57       | 9      | Número nove                                     |
| 58       | :      | Dois pontos                                     |
| 59       | ;      | Ponto e vírgula                                 |
| 60       | <      | Menor que                                       |
| 61       | =      | Sinal de igual                                  |
| 62       | >      | Maior que                                       |
| 63       | ?      | Ponto de interrogação                           |
| 64       | @      | Arroba                                          |
| 65       | A      | Letra A maiúscula                               |
| 66       | B      | Letra B maiúscula                               |
| 67       | C      | Letra C maiúscula                               |
| 68       | D      | Letra D maiúscula                               |
| 69       | E      | Letra E maiúscula                               |
| 70       | F      | Letra F maiúscula                               |
| 71       | G      | Letra G maiúscula                               |
| 72       | H      | Letra H maiúscula                               |
| 73       | I      | Letra I maiúscula                               |
| 74       | J      | Letra J maiúscula                               |
| 75       | K      | Letra K maiúscula                               |
| 76       | L      | Letra L maiúscula                               |
| 77       | M      | Letra M maiúscula                               |
| 78       | N      | Letra N maiúscula                               |
| 79       | O      | Letra O maiúscula                               |
| 80       | P      | Letra P maiúscula                               |
| 81       | Q      | Letra Q maiúscula                               |
| 82       | R      | Letra R maiúscula                               |
| 83       | S      | Letra S maiúscula                               |
| 84       | T      | Letra T maiúscula                               |
| 85       | U      | Letra U maiúscula                               |
| 86       | V      | Letra V maiúscula                               |
| 87       | W      | Letra W maiúscula                               |
| 88       | X      | Letra X maiúscula                               |
| 89       | Y      | Letra Y maiúscula                               |
| 90       | Z      | Letra Z maiúscula                               |
| 91       | [      | Colchete esquerdo (abre colchetes)              |
| 92       | \      | Barra invertida                                 |
| 93       | ]      | Colchete direito (fecha colchetes)              |
| 94       | ^      | Acento circunflexo                              |
| 95       | _      | Underline (sublinhado)                          |
| 96       | `      | Acento grave                                    |
| 97       | a      | Letra a minúscula                               |
| 98       | b      | Letra b minúscula                               |
| 99       | c      | Letra c minúscula                               |
| 100      | d      | Letra d minúscula                               |
| 101      | e      | Letra e minúscula                               |
| 102      | f      | Letra f minúscula                               |
| 103      | g      | Letra g minúscula                               |
| 104      | h      | Letra h minúscula                               |
| 105      | i      | Letra i minúscula                               |
| 106      | j      | Letra j minúscula                               |
| 107      | k      | Letra k minúscula                               |
| 108      | l      | Letra l minúscula                               |
| 109      | m      | Letra m minúscula                               |
| 110      | n      | Letra n minúscula                               |
| 111      | o      | Letra o minúscula                               |
| 112      | p      | Letra p minúscula                               |
| 113      | q      | Letra q minúscula                               |
| 114      | r      | Letra r minúscula                               |
| 115      | s      | Letra s minúscula                               |
| 116      | t      | Letra t minúscula                               |
| 117      | u      | Letra u minúscula                               |
| 118      | v      | Letra v minúscula                               |
| 119      | w      | Letra w minúscula                               |
| 120      | x      | Letra x minúscula                               |
| 121      | y      | Letra y minúscula                               |
| 122      | z      | Letra z minúscula                               |
| 123      | {      | Chave esquerda (ou abre chaves)                 |
| 124      | \|     | Barra vertical (ou pipe)                        |
| 125      | }      | Chave direita (ou fecha chaves)                 |
| 126      | ~      | Tilde (Til)                                     |

&emsp;&emsp; Além dos caracteres que podem ser impressos na tela, a tabela ASCII possui caracteres de controle que não podem ser impressos na tela. A tabela a seguir mostra os caracteres de controle e seus respectivos códigos ASCII:

## | Tabela ASCII de Caracteres de Controle:
| `Número` | `Símbolo` | `Descrição`                                             |
| -------- | --------- | ------------------------------------------------------- |
| 0        | NULL      | Indica ausência de informação (Null Character)          |
| 1        | SOH       | Início de cabeçalho (Start of Header)                   |
| 2        | STX       | Início de texto (Start of Text)                         |
| 3        | ETX       | Fim de texto (End of Text)                              |
| 4        | EOT       | Fim de transmissão (End of Transmission)                |
| 5        | ENQ       | Requisição (Enquiry)                                    |
| 6        | ACK       | Confirmação (Acknowledge)                               |
| 7        | BEL       | Alerta sonoro (Bell)                                    |
| 8        | BS        | Retrocesso (Backspace)                                  |
| 9        | HT        | Tabulação horizontal (Horizontal Tab)                   |
| 10       | LF        | Nova linha (Line Feed)                                  |
| 11       | VT        | Tabulação vertical (Vertical Tab)                       |
| 12       | FF        | Nova página (Form Feed)                                 |
| 13       | CR        | Retorno de carro (Carriage Return)                      |
| 14       | SO        | Deslocamento para fora (Shift Out)                      |
| 15       | SI        | Deslocamento para dentro (Shift In)                     |
| 16       | DLE       | Escape de link de dados (Data Link Escape)              |
| 17       | DC1       | Controle de dispositivo 1 (Device Control 1)            |
| 18       | DC2       | Controle de dispositivo 2 (Device Control 2)            |
| 19       | DC3       | Controle de dispositivo 3 (Device Control 3)            |
| 20       | DC4       | Controle de dispositivo 4 (Device Control 4)            |
| 21       | NAK       | Negação (Negative Acknowledge)                          |
| 22       | SYN       | Síncrono inativo (Synchronous Idle)                     |
| 23       | ETB       | Fim de bloco de transmissão (End of Transmission Block) |
| 24       | CAN       | Cancelar (Cancel)                                       |
| 25       | EM        | Fim de meio (End of Medium)                             |
| 26       | SUB       | Substituto (Substitute)                                 |
| 27       | ESC       | Escape (Escape)                                         |
| 28       | FS        | Separador de arquivo (File Separator)                   |
| 29       | GS        | Separador de grupo (Group Separator)                    |
| 30       | RS        | Separador de registro (Record Separator)                |
| 31       | US        | Separador de unidade (Unit Separator)                   |
| 127      | DEL       | Excluir (Delete)                                        |

## | Outros Tópicos Importantes:
&emsp;&emsp; Caso seja necessário fazer alguma comparação com um caractere manualmente, podemos utilizar o código ASCII do caractere. Fique tranquilo, você não precisa decorar essas tabelas. Podemos descobrir o número ASCII de um caractere em C colocando o caractere entre aspas simples:
~~~c
int codigo_ASCII = 'A';
printf("%d\n", codigo_ASCII); // Imprime 65
~~~

&emsp;&emsp; `ATENÇÃO:` Uma diferença entre vetores e strings é que uma string sempre termina com o caractere `‘\0’`, tudo que vem após é considerado lixo de memória. Isso é importante caso queira calcular o tamanho da string (uma string de tamanho 100, por exemplo, tem 99 espaços ocupáveis por causa do ‘\0’).

&emsp;&emsp; Podemos ler strings no scanf com duas formas. A primeira é lendo com o `'%s'` e a segunda é lendo com o `'%[^\n]'`. A diferença é que o `%s` lê apenas até o primeiro espaço em branco (e substituí o ultimo espaço em branco por `\0`), enquanto o `%[^\n]` lê até o `\n` (e substituí o `\n` por `\0`).

&emsp;&emsp; Se você deseja ler uma palavra (ou uma string sem espaços em branco), podemos simplesmente usar o `%s`:
~~~c
char palavra[100];
scanf(" %s", palavra); // Observe que não é necessário o & para ler strings. Isso ficará mais claro quando estudarmos ponteiros.
~~~

&emsp;&emsp; Se você deseja ler uma frase, podemos usar o `%[^\n]`:
~~~c
char frase[100];
scanf(" %[^\n]", frase);
~~~

&emsp;&emsp; Para imprimir strings no printf, basta usar o `%s`. No printf, o `%s` imprime a string até o `\0`. Podemos imprimir uma string com o printf da seguinte forma:
~~~c
char nome[] = "João Assaoka";
printf("Autor: %s\n", nome);
~~~
