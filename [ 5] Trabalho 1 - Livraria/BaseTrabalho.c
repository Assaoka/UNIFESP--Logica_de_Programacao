#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
// Variáveis:
  // Variáveis Base:
    int ValorFuncao; // Representa o que o usuário que usar.
    int ApertouEnter = 0; // É o que faz o "Pressione Enter para continuar..." só aparecer a partir da segunda vez.
    FILE *variaveis = fopen("variáveis.txt", "r+"); // Arquivo que guarda o estoque da última execução.
  // Variáveis da Parte 1 e 4:
    int Mat, Est, Fis, Qui, Comp; // Disponível por categoria.
    float VMat = 150.00, VEst = 100.00, VFis = 160.00, VQui = 160.00, VComp = 200.00; // Valores de cada categoria.
  // Variáveis da Parte 2:
    FILE *FMat = fopen("Mat.txt", "r"), *FEst = fopen("Est.txt", "r"), *FFis = fopen("Fis.txt", "r"), *FQui = fopen("Qui.txt", "r"), *FComp = fopen("Comp.txt", "r"), *Arquivo; // Endereços das descrições.
    char txt[100]; int t=777; // Usados para ler .txt e verificar se uma opção foi escolhida, respectivamente.
  // Variaveis da parte 3:
    int QMat, QEst, QFis, QQui, QComp; // Quantidade que deseja comprar.
    int Op = 2; // Opção escolhida para finalizar parte 3


// Recuperar as variáveis da última execução:
  fscanf(variaveis, " %02d %02d %02d %02d %02d", &Mat, &Est, &Fis, &Qui, &Comp); // Lê e define os valores.
  fclose(variaveis);

  
// Código:
  while (ValorFuncao != 5) { // Enquanto não escolher encerrar pergunta o que quer fazer.
    if (ApertouEnter == 1) {
      printf("\nPressione Enter para voltar ao menu... ");
      scanf("%*[^\n]"), scanf("%*c"), getchar();} // Limpa a entrada e espera apertar enter.    
    ApertouEnter = 1;
    system("clear");
    
// Menu de Opções:
    do {
    printf("\n-------------------- Menu de Opções --------------------");
    printf("\n--------------------------------------------------------");
    printf("\n1) Mostrar total de unidades e valor de cada categoria");
    printf("\n2) Mostrar descrição da categoria");
    printf("\n3) Comprar livros");
    printf("\n4) Mostrar total vendido e montante em caixa");
    printf("\n5) Encerrar");
    printf("\n--------------------------------------------------------");

    printf("\n\nSelecione uma das opções acima: "), scanf(" %d", &ValorFuncao);
    system("clear");
    } while (((((ValorFuncao!=1)&&(ValorFuncao!=2))&&(ValorFuncao!=3))&&(ValorFuncao!=4))&&(ValorFuncao!=5));
  
  switch (ValorFuncao) {
// QUESTÃO 1
    case 1:// Mostrar total de unidades e valor de cada categoria.
      printf("\n----------- Exibindo total de Unidades e Valor -----------");
      printf("\n----------------------------------------------------------\n");
      printf(" Categoria   | Disponível | Vendido  | Código |   Valor");
      printf("\n-------------|------------|----------|--------|-----------");  
        
      printf("\n Matemática  |     %02d     |    %02d    |   01   | R$ %.2f", Mat, 10-Mat,VMat);
      printf("\n Prob. Estat.|     %02d     |    %02d    |   02   | R$ %.2f", Est, 10-Est, VEst);
      printf("\n Física      |     %02d     |    %02d    |   03   | R$ %.2f", Fis, 10-Fis, VFis);
      printf("\n Química     |     %02d     |    %02d    |   04   | R$ %.2f", Qui, 10-Qui, VQui);
      printf("\n Computação  |     %02d     |    %02d    |   05   | R$ %.2f", Comp, 10-Comp, VComp);
      printf("\n----------------------------------------------------------\n");
      break;


// QUESTÃO 2
    case 2:// Mostrar descrição da categoria.
      do { // Executa uma vez, depois mantem loop até digitar um valor válido.
        system("clear");
        printf("\n----------------- Categorias -----------------");
        printf("\n----------------------------------------------");
        printf("\n1) Matemática");
        printf("\n2) Probabilidade Estatística");
        printf("\n3) Física");
        printf("\n4) Química");
        printf("\n5) Computação");
        printf("\n----------------------------------------------\n\n");
        
        if (t == -777)
          printf("Valor invalido, escolha uma das opções acima.\n");
        printf("Qual descrição gostaria de ver: "), scanf(" %d",&t);
          
        switch (t) {
          case 1: Arquivo = FMat;
            break;
          case 2: Arquivo = FEst;
            break;
          case 3: Arquivo = FFis;
            break;
          case 4: Arquivo = FQui;
            break;
          case 5: Arquivo = FComp;
            break;
          default: t = -777;
            break;}} while (t == -777);
      
      // Imprimir na tela a descrição escolhida:
        system("clear");  
        printf("\n------------ Exibindo Descrição da Categoria ------------");
        printf("\n---------------------------------------------------------\n");
        while (fgets(txt, 100, Arquivo) != NULL){
          printf("%s", txt);}
        printf("\n---------------------------------------------------------\n");
        rewind(Arquivo);
      break;


// QUESTÃO 3    
    case 3: // Comprar livros.
      do {
        switch (Op){ 
          case 2: // Fazer ou Editar Compra
            // Força valores válidos para compra:
              printf("\n------------------- Compra -------------------");
              printf("\n----------------------------------------------\n");
              printf("Coloque a  quantidade que  deseja  comprar  na\nfrente da respectiva categoria.");
              printf("\n----------------------------------------------\n");
            
              do {printf("\nMatemática (Disponível: %d): ",Mat), scanf(" %d", &QMat);
                  if (Mat<QMat) printf("Excede a quantidade disponível em %d\n",QMat-Mat);
                } while (Mat<QMat);
                
                do {printf("\nProbabilidade Estatística (Disponível: %d): ",Est), scanf(" %d", &QEst);
                  if (Est<QEst) printf("Excede a quantidade disponível em %d\n",QEst-Est);
                } while (Est<QEst);
                
                do {printf("\nFísica (Disponível: %d): ",Fis), scanf(" %d", &QFis);
                  if (Fis<QFis) printf("Excede a quantidade disponível em %d\n",QFis-Fis);
                } while (Fis<QFis);
                
                do {printf("\nQuímica (%d): ",Qui), scanf(" %d", &QQui);
                  if (Qui<QQui) printf("Excede a quantidade disponível em %d\n",QQui-Qui);
                } while (Qui<QQui);
                
                do {printf("\nComputação (%d): ",Comp), scanf(" %d", &QComp);
                  if (Comp<QComp) printf("Excede a quantidade disponível em %d\n",QComp-Comp);
                } while (Comp<QComp);
            
            // Apresenta total da compra:
              system("clear");  
              printf("\n------------------ Carrinho ------------------");
              printf("\n----------------------------------------------");
              printf("\nMatemática: %d", QMat);
              printf("\nProbabilidade Estatística: %d", QEst);
              printf("\nFísica: %d", QFis);
              printf("\nQuímica: %d", QQui);
              printf("\nComputação: %d", QComp);
              printf("\n\nTotal: R$ %.2f",(QMat*VMat)+(QEst*VEst)+(QFis*VFis)+(QQui*VQui)+(QComp*VComp));
              printf("\n----------------------------------------------\n");
            
            // Escolhe o que fazer
              printf("1 = Confirmar Compra\n2 = Editar Compra\n3 = Cancelar Compra");
              printf("\n----------------------------------------------\n");
              do printf("\nSelecione uma das opção acima: "), scanf(" %d",&Op); while ((Op!=1)&&(Op!=2)&&(Op!=3));
          break;
          
          case 1:{ // Confirmar Compra
            Mat = Mat - QMat, Est = Est - QEst, Fis = Fis - QFis, Qui = Qui - QQui, Comp = Comp - QComp;
            variaveis = fopen("variáveis.txt", "w");
            fprintf(variaveis, "%02d%02d%02d%02d%02d", Mat, Est, Fis, Qui, Comp);
            fclose(variaveis);
            variaveis = fopen("variáveis.txt", "r+");
            Op = 3;}}
      } while (Op!=3); Op = 2;
      break;


// QUESTÃO 4    
    case 4: // Apresentar Total Vendido e Montante em Caixa.
      printf("\n----- Exibindo Total Vendido e Caixa -----");
      printf("\n------------------------------------------\n");
      printf(" N° | Categoria   | Vendido  | Total");
      printf("\n----|-------------|----------|------------");  
      printf("\n 01 | Matemática  |    %02d    | R$ %.2f", 10-Mat, (10-Mat)*VMat);
      printf("\n 02 | Prob. Estat.|    %02d    | R$ %.2f", 10-Est, (10-Est)*VEst);
      printf("\n 03 | Física      |    %02d    | R$ %.2f", 10-Fis, (10-Fis)*VFis);
      printf("\n 04 | Química     |    %02d    | R$ %.2f", 10-Qui, (10-Qui)*VQui);
      printf("\n 05 | Computação  |    %02d    | R$ %.2f", 10-Comp, (10-Comp)*VComp);
      printf("\n------------------------------------------\n");
      printf("Total de Livros Vendidos: %02d Unidades \n",(50 - Mat - Est - Fis - Qui - Comp));
      printf("Montante Obtido: R$ %.2f\n",((10-Mat)*VMat)+((10-Est)*VEst)+((10-Fis)*VFis)+((10-Qui)*VQui)+((10-Comp)*VComp));
    break;
  } // Switch  
} // Loop
  return 0;
}
