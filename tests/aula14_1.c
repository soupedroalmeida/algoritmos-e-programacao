#include <stdio.h>

#define NALUNOS 4
#define NNOTAS 3

int main(void){
    float notas[NALUNOS][NNOTAS];

    for (int i = 0; i < NALUNOS; i++){
        for (int j = 0; j < NNOTAS; j++){
            printf("Entre com a nota %d do aluno %d: ", j, i);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < NALUNOS; i++){
        printf("Aluno %d: ", i);
        for (int j = 0; j < NNOTAS; j++){
            printf("%g ", notas[i][j]);
        }
    }
}