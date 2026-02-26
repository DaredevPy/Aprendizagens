#include <stdio.h>
 
int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) { //enquanto i for menor que 5 e j for maior que 5, o loop continua
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}