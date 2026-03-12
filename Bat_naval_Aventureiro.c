#include <stdio.h>

// Define constante para número de linhas do tabuleiro
#define LINHA 10
// Define constante para número de colunas do tabuleiro
#define COLUNA 10

// Função principal do programa
int main() {
    // Declara matriz 2D de inteiros com dimensões LINHA x COLUNA
    int Tabuleiro[LINHA][COLUNA];
    
    // Loop externo: itera sobre todas as linhas
    for (int i = 0; i < LINHA; i++) {
        // Loop interno: itera sobre todas as colunas
        for (int j = 0; j < COLUNA; j++) {
            // Inicializa cada posição com 0 (representa água)
            Tabuleiro[i][j] = 0;
        }
    }
    
    // Variável que armazena a linha do barco horizontal
    int barco_horizontal_linha = 3;
    // Variável que armazena a coluna inicial do barco horizontal
    int coluna_inicio_h = 2;
    
    // Loop que coloca o barco horizontal (tamanho 3) nas colunas 2, 3, 4
    for (int j = coluna_inicio_h; j < coluna_inicio_h + 3; j++) {
        // Verifica se a posição está dentro dos limites do tabuleiro
        if (barco_horizontal_linha < LINHA && j < COLUNA) {
            // Marca a posição com 3 (representa barco)
            Tabuleiro[barco_horizontal_linha][j] = 3;
        }
    }
    
    // Variável que armazena a coluna do barco vertical
    int barco_vertical_coluna = 5;
    // Variável que armazena a linha inicial do barco vertical
    int linha_inicio_v = 4;
    
    // Loop que coloca o barco vertical (tamanho 3) nas linhas 4, 5, 6
    for (int i = linha_inicio_v; i < linha_inicio_v + 3; i++) {
        // Verifica se a posição está dentro dos limites do tabuleiro
        if (i < LINHA && barco_vertical_coluna < COLUNA) {
            // Marca a posição com 3 (representa barco)
            Tabuleiro[i][barco_vertical_coluna] = 3;
        }
    }
    
    // Variável que armazena a linha inicial do barco diagonal
    int linha_inicio_d = 6;
    // Variável que armazena a coluna inicial do barco diagonal
    int coluna_inicio_d = 1;
    
    // Loop que coloca o barco diagonal (tamanho 3)
    for (int i = 0; i < 3; i++) {
        // Calcula a linha atual incrementando a partir da linha inicial
        int linha_atual = linha_inicio_d + i;
        // Calcula a coluna atual incrementando a partir da coluna inicial
        int coluna_atual = coluna_inicio_d + i;
        
        // Verifica se a posição está dentro dos limites do tabuleiro
        if (linha_atual < LINHA && coluna_atual < COLUNA) {
            // Marca a posição com 3 (representa barco)
            Tabuleiro[linha_atual][coluna_atual] = 3;
        }
    }
   
   
        // Variável que armazena a linha inicial do barco diagonal inversa
        int linha_inicio_d2 = 6;
        // Variável que armazena a coluna inicial do barco diagonal inversa
        int coluna_inicio_d2 = 8;
    
        // Loop que coloca o barco diagonal inversa (tamanho 3)
    for (int i = 0; i < 3; i++) {
        // Calcula a linha atual incrementando a partir da linha inicial
        int linha_atual_d = linha_inicio_d2 + i;
        // Calcula a coluna atual decrementando a partir da coluna inicial
        int coluna_atual_d = coluna_inicio_d2 - i;
    // Verifica se a posição está dentro dos limites do tabuleiro
        if (linha_atual_d < LINHA && coluna_atual_d >= 0) {
            // Marca a posição com 3 (representa barco)
            Tabuleiro[linha_atual_d][coluna_atual_d] = 3;
        }        
    
    }
    
    // Imprime o cabeçalho com as dimensões do tabuleiro
    printf("Tabuleiro %dx%d:\n", LINHA, COLUNA);
    // Imprime espaçamento antes da linha de colunas
    printf("   ");
    // Loop que imprime os números das colunas (0 a 9)
    for (int j = 0; j < COLUNA; j++) {
        // Imprime cada número de coluna formatado com 2 dígitos
        printf("%2d ", j);
    }
    // Pula para a próxima linha
    printf("\n");
    
    // Loop externo: itera sobre cada linha do tabuleiro
    for (int i = 0; i < LINHA; i++) {
        // Imprime o número da linha (0 a 9) formatado com 2 dígitos
        printf("%2d ", i);
        // Loop interno: itera sobre cada coluna da linha atual
        for (int j = 0; j < COLUNA; j++) {
            // Imprime o valor da posição no tabuleiro (0 ou 3) formatado com 2 dígitos
            printf("%2d ", Tabuleiro[i][j]);
        }
        // Pula para a próxima linha após imprimir todas as colunas
        printf("\n");
    }
    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}

