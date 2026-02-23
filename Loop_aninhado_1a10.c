#include <stdio.h>
 // Loop para imprimir a tabuada de 1 a 10
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}