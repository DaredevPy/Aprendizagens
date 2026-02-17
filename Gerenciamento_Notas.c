#include <stdio.h>

int main() {
    int opção;
    float nota1, nota2, media;

    printf("Gerenciamento de Notas\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar status do aluno\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opção);

    switch (opção) {
        case 1:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;
            printf("A média é: %.2f\n", media);
            break;
        case 2:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;
            if (media >= 7.0) {
                printf("Aluno aprovado!\n");
            } else if (media >= 5.0) {
                printf("Aluno em recuperação!\n");
            } else {
                printf("Aluno reprovado!\n");
            }
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }





    return 0;
}