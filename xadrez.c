#include <stdio.h>

// Função para mover o cavalo - Opção 1 (Frente, Frente, Direita)
void mover_cavalo_opcao1() {
    int i, j;
    
    printf("\nMovendo cavalo - Opção 1 (Frente, Frente, Direita):\n");
    
    // Usando WHILE para os movimentos para frente
    j = 1;
    while(j <= 2) {
        printf(" %d: Frente \n", j);
        j++;
    }
    
    // Usando FOR para o movimento para direita
    for(i = 1; i <= 1; i++) {
        printf(" %d: Direita \n", i);
    }
}

// Função para mover o cavalo - Opção 2 (Frente, Frente, Esquerda)
void mover_cavalo_opcao2() {
    int i, j;
    
    printf("\nMovendo cavalo - Opção 2 (Frente, Frente, Esquerda):\n");
    
    // Usando WHILE para os movimentos para frente
    j = 1;
    while(j <= 2) {
        printf(" %d: Frente \n", j);
        j++;
    }
    
    // Usando FOR para o movimento para esquerda
    for(i = 1; i <= 1; i++) {
        printf(" %d: Esquerda \n", i);
    }
}

int main() {
    
    // Declarando variaveis para o número de casas que cada peça irá mover
    int i; // Variável para controlar os loops
    int j; // Variável auxiliar para o movimento do cavalo
    int casas_torre = 5;      // Quantidade de casas que a Torre irá mover
    int casas_rainha = 8;     // Quantidade de casas que a Rainha irá mover
    int casas_bispo = 5;      // Quantidade de casas que o Bispo irá mover
    int opcao_movimento;      // Variável para armazenar a opção de movimento do cavalo escolhida pelo usuário
                      
    
 
    // MOVIMENTO DA TORRE
    printf("\n*** MOVIMENTO DA TORRE ***\n");
    printf("Movendo 5 casas para a FRENTE:\n");
    
    // __________________Utilizando for_________________
    for(i = 1; i <= casas_torre; i++) {
        printf(" %d: Frente\n", i);
    }
    printf("Torre moveu %d casas para a frente!\n\n", casas_torre);
    
   
    //MOVIMENTO DO BISPO
    printf("*** MOVIMENTO DO BISPO ***\n");
    printf("Movendo 5 casas na diagonal (CIMA e DIREITA):\n");
    
    //________________ Utilizando while_________________
    i = 1;  // Reinicializando o contador
    while(i <= casas_bispo) {
        printf(" %d: Cima, Direita\n", i);
        i++;  // Incrementa o contador
    }
    printf("Bispo moveu %d casas na diagonal superior direita!\n\n", casas_bispo);
    
  
    //MOVIMENTO DA RAINHA
    printf("*** MOVIMENTO DA RAINHA ***\n");
    printf("Movendo 8 casas para a ESQUERDA:\n");
    
    // ___________________Utilizando do while_____________________
    i = 1;  // Reinicializando o contador
    do {
        printf(" %d: Esquerda\n", i);
        i++;  // Incrementa o contador
    } while(i <= casas_rainha);
    printf("Rainha moveu %d casas para a esquerda!\n\n", casas_rainha);
    
  //MOVIMENTO DO CAVALO

printf("Escolha o movimento do cavalo:\n");
    printf("1 - Frente, Frente, Direita\n");
    printf("2 - Frente, Frente, Esquerda\n");
    printf("Digite sua opção (1 ou 2): ");
    scanf("%d", &opcao_movimento);
    
    switch (opcao_movimento) {
        case 1:
            mover_cavalo_opcao1();  // Chamando a função para opção 1
            break;
            
        case 2:
            mover_cavalo_opcao2();  // Chamando a função para opção 2
            break;
            
        default:
            printf("Opção inválida! Escolha 1 ou 2.\n");
            break;
    }
    
    printf("\nCavalo completou o movimento em L!\n");
    
    return 0;
}
    

        



