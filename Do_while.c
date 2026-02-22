#include <stdio.h>
int main() {
    int i  = 1;
    do {printf("%d ", i);
        i++;
    } while (i == 5); // Verificou a condição depois de executar o bloco de código


    return 0;
} // Neste bloco de código, a condição é falsa, mas o bloco de código é executado pelo menos uma vez devido à estrutura do do-while.