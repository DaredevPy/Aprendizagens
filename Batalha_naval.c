#include <stdio.h>

int main() {

    
    // Criando o vetor de colunas
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    // Criando o tabuleiro 10 x 10
    char  Tabuleiro [10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Tabuleiro[i][j] = '0'; // Inicializando o tabuleiro com água
        }
    }
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%c ", Tabuleiro[i][j]); // Imprime o conteúdo do tabuleiro
        }
        printf("\n");
    }
 

    return 0;
}