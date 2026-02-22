#include <stdio.h>

int main() {


int i = 0;
while (i <= 10){
    if(i % 2 == 0){  //(i % 2 !== 0) para imprimir os números ímpares
        printf("O numero é: %d é par!\n", i);
    }
    i++;
}
return 0;
}