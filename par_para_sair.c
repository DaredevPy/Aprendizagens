#include <stdio.h>
int main() {
   int numero;

   do {
    printf("Digite um numero par para sair do programa: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("É par! %d\n", numero);
    }else{
        printf("É ímpar! %d\n", numero);
    }
   }while (numero % 2 != 0); 
   
   printf("Programa encerrado!\n");
   
   return 0;
}