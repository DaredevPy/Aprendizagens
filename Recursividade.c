#include <stdio.h>

void recursivo (int numero) {
    if (numero > 0) {
        
        printf("%d \n ", numero);
        recursivo(numero - 1); // Colocando i printf depois da chamada recursiva, a contagem será crescente
    }
}
int main () {

    int quantidade = 10;

    printf("Contagem regressiva: \n");
    recursivo(quantidade);
    


    return 0;
}