/* Pedro Henrique Almeida de Paula - 333696
02/07/2022, Porto Alegre  */

#include <stdio.h>

int main(void){

    int index;
    float sum;

    for (index = 0; (1 + index * 2) / pow(index + 1, 2) >= 0.01; index++){
        sum += (1 + index * 2) / pow(index + 1, 2);
    }

    printf("\nResultado da soma: %f", sum);
    printf("\nForam usados %d termos na soma", index + 1);

    return 0;
}