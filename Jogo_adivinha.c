#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite; /*Variáveis para o número secreto e o palpite do jogador*/

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);        /*Entrada de opção do usuário*/

  switch (opcao) {
    case 1:
      srand(time(0));                                /*Inicializa o gerador de números aleatórios*/
      numeroSecreto = rand() % 10 + 1;
      printf("Adivinhe o número (entre 1 e 10): \n");
      scanf("%d", &palpite);
                                                    /*Comparando numero gerado com a entrada de dados do Usuario*/
      if (palpite == numeroSecreto) {
        printf("Parabéns! Você adivinhou!\n");
        printf("O número secreto era %d.\n", numeroSecreto);      
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
        printf("O número secreto era %d.\n", numeroSecreto);
      }
      break;
    case 2:                                                  /*Indicando opções no menu*/
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}