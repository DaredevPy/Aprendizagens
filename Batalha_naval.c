#include <stdio.h>

int main() {
  
    // Criando o tabuleiro 10 x 10
    char  Tabuleiro [10][10];
    
    // Inicializando o tabuleiro com água ('0')
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            Tabuleiro[i][j] = '0';
        }
    }  // ********** O 'i' percorre colunas mas representa as linhas, e o 'j' percorre as linhas mas representa as colunas. *********
    
    // Posicionando um barco de 3 casas na horizontal
    // Exemplo: na linha 3 (índice 3), começando na coluna C (índice 2)
    int barco_horizontal = 3; // Corresponde à linha 3 (índice 3)
    int coluna_inicio = 2; // Corresponde à coluna C (índice 2)
    // Percorrendo as colunas para posicionar o barco horizontalmente na linha 3, começando na coluna C
    for (int j = coluna_inicio; j < coluna_inicio + 3; j++) {
        Tabuleiro[barco_horizontal][j] = '3'; // Substitui '0' por '3' para indicar a presença do barco de 3 casas
    }

    int barco_vertical = 3; // Corresponde à coluna 3 (índice 3)
    int linha_inicio = 7; // Corresponde à linha 7 (índice 7)

    for (int i = linha_inicio; i < linha_inicio + 3; i++) {
        Tabuleiro[i][barco_vertical] = '3';
    }

    // Imprimindo o tabuleiro
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