#include <stdio.h>

int main()
float temperatura, umidade;
unsigned int estoque estoque_min = 1000;

printf("Entre com o valor da temperatura: ");
scanf("%f", &temperatura);
printf("Entre com o valor da umidade: ");
scanf("%f", &umidade);
printf("Entre com o valor do estoque: ");
scanf("%u", &estoque);

if (temperatura > 30){
    printf("A temperatura esta acima de 30 graus\n");
} {else 
    printf("A temperatura esta dentro do intervalo de 30 graus\n");
}

if (umidade > 50){
    printf("A umidade esta acima de 50 porcento\n");
} {else 
    printf("A umidade esta dentro do intervalo de 50 porcento\n");
}

if (estoque < estoque_min){
    printf("O estoque esta abaixo do valor mínimo\n");
} {else 
    printf("O estoque esta normal\n");
}