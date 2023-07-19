#include <stdio.h>
#include <stdlib.h>
#include "Comandos.h"

/* Legenda dos Números nos Tabuleiros:
0 = Mar (Posição Sem Navio, será exibido como sua linha e coluna com cor diferente dos navios)
1 = submarinos (um quadrado | Sub).
2 = contratorpedeiros (dois quadrados | CTp)
3 = navios-tanque (três quadrados | NvT)
4 = porta-aviões (quatro quadrados | PAv)
10X = X descoberto (ex: 104 = porta-aviões descoberto)
*/ 

int main(void) {
  int NaviosJ0[10][10], NaviosJ1[10][10], Alc[2]; // Declara Tabuleiros e Um auxiliar ([0] marca de se J0 Jogou, [1] faz o mesmo para J1)
  int i = 5, j = 5, aux = 33, aux2 = 0, aux3, Rodada = 0; // aux (Acerto e Chute Repetido), aux2 (Opção Menu), aux3 (Qual Jogador vai Alocar)
  char jogador0[100], jogador1[100]; // Nome dos Jogadores
  Alc[0] = Alc[1] = 0; 
  
do { // Repete até aux2 receber 3, que representa sair do jogo 
  do { // Enquanto aux2 não receber 1, 2 ou 3
    system("clear");
    printf("+------ MENU ------+");
    printf("\n 1-) Alocar Navios\n 2-) Iniciar Jogo\n 3-) Sair do Jogo\n+------------------+\nOpção: ");
    scanf(" %d", &aux2);    
  } while ((aux2 < 1)||(aux2 > 3));
  
  switch (aux2) { //  5) Faça um menu com switch-case e use funções:
   case 1: // Alocar Navios:
     do { // Enquanto aux3 não receber 0, 1, 2 ou 3.
      system("clear");
      printf("+-----------------------+\n 0-) Jogador 0\n 1-) Jogador 1\n 2-) Ambos os Jogadores\n 3-) Voltar ao Menu\n+-----------------------+\n Quem Vai Alocar: "), scanf(" %d", &aux3);
     } while ((aux3 < 0)||(aux3 > 3));
     
     if ((aux3 == 0)||(aux3 == 2)) { // Start Jogador 0  
        system("clear");
        printf("\nDigite Seu Nome Jogador 0: "), scanf(" %[^\n]", jogador0); 
        Start(NaviosJ0);
        Preencher_Tabuleiro (NaviosJ0);
        Alc[0] = 1;
      }
      
     if ((aux3 == 1)||(aux3 == 2)) { // Start Jogador 1  
        system("clear");
        setbuf(stdin,NULL); // Limpar Buffer
        printf("\nDigite Seu Nome Jogador 1: "), scanf(" %[^\n]", jogador1); 
        Start(NaviosJ1);
        Preencher_Tabuleiro (NaviosJ1);
        Alc[1] = 1;
      }
      break;
    
    case 2: // iniciar jogo
      if ((Alc[0] == 0) && (Alc[0] == 0)) { // Verifica se um dos dois jogadores não preencheu
        system("clear");
        printf("Navios Não Foram Alocados, você não pode jogar ainda.\n");
        printf("Pressione Enter para Fazer Voltar ao Menu ... "), scanf("%*[^\n]"), scanf("%*c"), getchar();
        break;
      } else { // Se ambos preencheram, começa o jogo
        // Jogadas
          while ((Vencedor(NaviosJ0, NaviosJ1)) == 33) { // Equanto alguém não ganhar
            setbuf(stdin,NULL); // Limpar Buffer
            if (aux != Rodada) {
              // Transição de Jogador
              system("clear");
              if ((Rodada%2) == 0)
                printf("%s", jogador0);
              else
                printf("%s", jogador1);
              printf(", Pressione Enter para Fazer sua Jogada ... "), scanf("%*[^\n]"), scanf("%*c"), getchar();
            } 
            
          // Atirar
            system("clear");
            if ((Rodada%2) == 0)
              Printf_Tudo(NaviosJ0, NaviosJ1);
            else
              Printf_Tudo(NaviosJ1, NaviosJ0);


            if (aux == Rodada) { // Acertou o tiro
                if ((Rodada%2) == 0)
                  printf("Parabéns %s, você acertou!!! Jogue Novamente.", jogador0);
                else
                  printf("Parabéns %s, você acertou!!! Jogue Novamente.", jogador1);
            }
            
            do {
              do {
                if ((i < 0) || (i > 9) || (j < 0) || (j > 9)) // MUDANÇA PÓS VÍDEO: i e j são inciadas como 5, para evitar cair aqui da primeira vez 
                  printf("\n------------------\nPosição Invalida.");
                
                if (aux == 1) {
                  printf("\nVocê Já fez essa Jogada."); 
                  aux = 0;
                }
                
                printf("\nLinha: "), scanf(" %d", &i);
                printf("Coluna: "), scanf(" %d", &j);                
              } while ((i < 0) || (i > 9) || (j < 0) || (j > 9)); // Garante Linha e Coluna Dentro da Matriz
              
              if ((Rodada%2) == 0) {
                if (NaviosJ1[i][j] >= 100)
                  aux = 1;
                else
                  aux = 0;
              } else {
                if (NaviosJ0[i][j] >= 100)
                  aux = 1;
                else
                  aux = 0;
              }
            } while (aux != 0); // Se auxiliar der 0, os valores são validos
        
            aux = Rodada; // Ver se acertou
            if ((Rodada%2) == 0) { // Jogador0
              NaviosJ1[i][j] += 100; 
              if (NaviosJ1[i][j] > 100) // Se o jogador acertou, joga novamente
                Rodada--; 
            } else { // Jogador1
              NaviosJ0[i][j] += 100;
              if (NaviosJ0[i][j] > 100) // Se o jogador acertou, joga novamente
                Rodada--;
            }
            Rodada++; // Proxima rodada (Note que se o jogador acertar, a rodada se repetirá)
          }
          
          if (Vencedor(NaviosJ0, NaviosJ1) == 0) { // Declara Vitória
            printf("\n\nParabéns %s!!! Você Venceu!!!\n", jogador0);
          } else {
            printf("\n\nParabéns %s!!! Você Venceu!!!\n", jogador1);
          }
        printf("Pressione Enter para Fazer Voltar ao Menu ... "), scanf("%*[^\n]"), scanf("%*c"), getchar(); // Espera Enter
        Alc[0] = Alc[1] = 0; // Muda os auxiliares que validam se já posicionou os navios
        aux = 33; // Reseta o Vencedor Para poder Jogar Novamente
        break;
      }
    }
  } while (aux2 != 3);
return 0;
}
