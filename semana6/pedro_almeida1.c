/* Pedro Henrique Almeida de Paula - 333696
24/02/2022, Porto Alegre */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAM 25

int main(void){

    int index = 0;
    char input_string[TAM], output_alpha[TAM], output_beta[TAM];

    printf("\nEntre com a string desejada:  ");
    scanf("%s", input_string);

    for (int i = 0; i < TAM; i++){
        output_alpha[i] = toupper(input_string[i]);
    }

    for (int i = strlen(input_string) - 1; i >= -1; i -= 1){
        output_beta[index] = input_string[i];
        index++;
    }

    printf("\nString maiuscula: %s", output_alpha);
    printf("\nString invertida: %s", output_beta);

    return 0;
}