#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < j; i++, j--) { // Repete enquanto i for menor que j
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
} // Repete 5 vezes, imprimindo os valores de i e j a cada iteração ate que i seja igual a j