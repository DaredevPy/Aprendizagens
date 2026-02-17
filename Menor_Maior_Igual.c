#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipocomparação;
    //Gerar numero aleatório para o computador
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // entre 1 e 100
    //inicio do jogo

    printf("Bem-vindo ao jogo maior menor ou igual!\n");
    printf("Você deve escolher um número e o tipo de comparação (>, <, =)\n");
    printf("M.maior\n");
    printf("N.menor\n");
    printf("I.igual\n");
    // Solicita a string do tipo de comparação
    printf("Escolha uma comparação (M, N, I): ");
    scanf(" %c", &tipocomparação);

    printf("Escolha um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);
    // Verificar o numero do computador
    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipocomparação)
    {
    case 'm':    
    case 'M':
        printf("Você escolheu o numero maior que o do computador.\n");
        resultado = numeroJogador > numeroComputador? 1 : 0;   
        break;
    case 'n':    
    case 'N':
        printf("Você escolheu o numero menor que o do computador.\n");
        resultado = numeroJogador < numeroComputador? 1 : 0;
        break;
    case 'i':    
    case 'I':
        printf("Você escolheu o numero igual ao do computador.\n");
        resultado = numeroJogador == numeroComputador? 1 : 0;
        break;
    
    default:
        printf("Opção de comparação inválida. Por favor, escolha 'M', 'N' ou 'I'.\n");
        break;
    }

    printf("O numero do computador é %d e o do jogador é %d\n", numeroComputador, numeroJogador);
    
    if (resultado == 1) {
        printf("Parabéns! Você ganhou!\n");
    } else if (resultado == 0) {
        printf("Que pena! Você perdeu. Tente novamente!\n");
    }

    return 0;
}