#include <stdio.h>

int main() {

    int index;
    
    char * nomes_alunos [3][3] = {
        {"Aluno_0", "Pt: 30", "Mat: 90"},
        {"Aluno_1", "Pt: 60", "Mat: 60"},
        {"Aluno_2", "Pt: 30", "Mat: 30"}
    };

    printf("Digite o nomumero do aluno \n");
    printf("Para o aluno 0, digite 0 \n ");
    printf("Para o aluno 1, digite 1 \n ");
    printf("Para o aluno 2, digite 2 \n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s ...\n", nomes_alunos[index][0], nomes_alunos[index][1], nomes_alunos[index][2]);

    return 0;
}