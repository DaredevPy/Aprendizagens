#include <stdio.h>

int main()
{
    int numero = 4, resultado;
    resultado = numero % 2; // % significa resto da divisão

    if (resultado == 0){
        printf("O número é par\n");
   }

    return 0;
}