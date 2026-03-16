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
 // 1. QUADRADO (posição: canto superior esquerdo)
    // Usando valor 1 para representar o quadrado
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            Tabuleiro[i][j] = 4; // Quadrado 3x3
        }
    }

    // 2. CRUZ (posição: canto superior direito)
    // Usando valor 2 para representar a cruz
    int centro_linha = 2;
    int centro_coluna = 7;
    
    // Linha horizontal da cruz
    for (int j = centro_coluna - 2; j <= centro_coluna + 2; j++) {
        if (j >= 0 && j < COLUNA) {
            Tabuleiro[centro_linha][j] = 7;
        }
    }
    
    // Linha vertical da cruz
    for (int i = centro_linha - 2; i <= centro_linha + 2; i++) {
        if (i >= 0 && i < LINHA) {
            Tabuleiro[i][centro_coluna] = 7;
        }
    }

    // 3. TRIÂNGULO (posição: centro esquerdo)
    // Usando valor 3 para representar o triângulo
    int triangulo_linha_base = 8;
    int triangulo_coluna_inicio = 1;
    
    for (int i = 0; i < 4; i++) {
        for (int j = triangulo_coluna_inicio; j <= triangulo_coluna_inicio + i; j++) {
            if (triangulo_linha_base - i >= 0 && j < COLUNA) {
                Tabuleiro[triangulo_linha_base - i][j] = 3;
            }
        }
    }

    // 4. X (posição: canto inferior direito)
    // Usando valor 4 para representar o X
    int x_linha_inicio = 6;
    int x_coluna_inicio = 6;
    
    for (int i = 0; i < 4; i++) {
        // Diagonal principal do X
        if (x_linha_inicio + i < LINHA && x_coluna_inicio + i < COLUNA) {
            Tabuleiro[x_linha_inicio + i][x_coluna_inicio + i] = 6;
        }
        
        // Diagonal secundária do X
        if (x_linha_inicio + i < LINHA && x_coluna_inicio + 3 - i < COLUNA) {
            Tabuleiro[x_linha_inicio + i][x_coluna_inicio + 3 - i] = 6;
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