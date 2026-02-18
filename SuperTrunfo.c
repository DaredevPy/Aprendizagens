#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1, resultado2;
    char primeiroAtributo1, segundoAtributo;
       // Declaração das variáveis para a carta 1
    char estado[45];
    char codigo_carta[45];
    char nome_cidade[45];
    long int populaçao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;

    // Declaração das variáveis para a carta 2 usando a função rand() para gerar valores aleatórios
    srand (time(0));
    char estado_2[45] = "São Paulo";
    char codigo_carta_2[45] = "SP";
    char nome_cidade_2[45] = "São Paulo";
    long int populaçao_2 = rand() % 1000000000; // Gerar um número aleatório para a população
    float area_2 = rand() % 1000000; // Gerar um número aleatório para a área
    float PIB_2 = rand() % 1000000; // Gerar um número aleatório para o PIB
    int pontos_turisticos_2 = rand() % 100; // Gerar um número aleatório para os pontos turísticos
    float densidade_populacional_2 = (float)populaçao_2 / area_2; // Calcular a densidade populacional
    float PIB_per_capita_2 = PIB_2 / populaçao_2; // Calcular o PIB per capita

















}