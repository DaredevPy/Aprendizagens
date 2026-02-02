#include <stdio.h>

int main()
{   // Declarando as variaveis
    char produto_a[30] = "Produto A";
    char produto_b[30] = "Produto B";

    unsigned int estoque_a = 1000;
    unsigned int estoque_b = 2000;

    float valor_a = 10.00;
    float valor_b = 20.00;

    unsigned int estoqueminimo_a = 500;
    unsigned int estoqueminimo_b = 2500;

    double valor_total_a;
    double valor_total_b;

    int resultado_a, resultado_b;
   
    // Exibindo as informacoes iniciais dos produtos
    printf("Produto %s tem estoque %u e o valor unitario é R$: %.2f\n", produto_a, estoque_a, valor_a);
    printf("Produto %s tem estoque %u e o valor unitario é R$: %.2f\n", produto_b, estoque_b, valor_b);
    
    // Comparação dos estoques dos produtos
    resultado_a = estoque_a > estoqueminimo_a;
    resultado_b = estoque_b > estoqueminimo_b;
    
    printf("O produto %s tem estoque minimo %d\n", produto_a, resultado_a);
    printf("O produto %s tem estoque minimo %d\n", produto_b, resultado_b);
    
}