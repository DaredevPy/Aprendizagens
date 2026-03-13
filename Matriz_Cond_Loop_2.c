#include <stdio.h>

#define LINHAS  5
#define COLUNAS 5
 
int main() {
    
    int matriz[LINHAS][COLUNAS];
    int target = 5; // Variavel para armazenar o elemento a ser buscado
    int found = 0; // Variavel para indicar se o elemento foi encontrado ou não
    int soma = 1; // Variavel para armazenar a soma dos elementos da matriz

     for (int i = 0; i < LINHAS; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = soma;   // Loop interno para as colunas
            soma ++; // Incrementa a soma para o próximo elemento
            printf("%d ", matriz[i][j]); // Imprime o elemento da matriz    
        }
        printf("\n"); // Imprime uma nova linha após cada linha da matriz
    }
    

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