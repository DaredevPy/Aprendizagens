#include <stdio.h>

#define LINHAS  5
#define COLUNAS 5
 
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Matriz 3x3 inicializada com valores definidos
    int target = 5; // Variavel para armazenar o elemento a ser buscado
    int found = 0; // Variavel para indicar se o elemento foi encontrado ou não
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHAS; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}