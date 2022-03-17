/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
10 de fevereiro de 2022, Porto Alegre */

#include <stdio.h>

int main(void){

    int numA, numF = 0, numVT = 0, tempV, i;
    char tempG;

    // assinala o numero de alunos
    printf("\nEntre com o numero de alunos: ");
    scanf("%d", &numA);

    // roda um loop "numero de alunos" vezes
    for (i = 1; i <= numA; i++){
        // assinala o genero a uma variavel temporaria
        printf("\nEntre com o genero do aluno: ");
        scanf(" %c", &tempG);
        
        // se o genero for feminino, soma 1 a numF
        if (tempG == 'f'){
            numF++;
        }
        
        //assinala o numero de vezes a outra variavel temporaria
        printf("Entre com o nro de vezes que o aluno prestou vestibular: ");
        scanf("%d", &tempV);
        
        // se esse numero for maior ou igual a 3, soma 1 a numVT 
        if (tempV >= 3){
            numVT++;
        }
    }

    // printa os resultados em porcentagem
    printf("\nPorcentagem de alunos do sexo feminino: %.2f", 100.0 * numF / numA);
    printf("\nPorcentagem de alunos que fizeram o vestibular 3 vezes ou mais: %.2f", 100.0 * numVT / numA);

    return 0;

}