/* Pedro Henrique Almeida de Paula - 333696
24/02/2022, Porto Alegre */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLIDOS 10

int main(void){

    float temp, input_array[MAXLIDOS], output_quadrados, output_raizes;
    int length_input, output_entre = 0;

    for (int i = 0; i < MAXLIDOS; i++){
        length_input = i;
        printf("Entre com o valor %d: ", i + 1);
        scanf("%f", &temp);

        if (temp < 0){
            break;
        }

        input_array[i] = temp;
        int max = i;
    }
    
    for (int i = 0; i < length_input; i++){
        output_quadrados += pow(input_array[i], 2);
    }
    output_quadrados /= length_input;

    printf("\nMedia dos quadrados dos valores: %g", output_quadrados);

    for (int i = 0; i < length_input; i++){
        output_raizes += sqrt(input_array[i]);
    }
    output_raizes /= length_input;

    printf("\nMedia das raizes dos valores: %g", output_raizes);

    if (output_quadrados > output_raizes){
        for (int i = 0; i < length_input; i++){
            if ((input_array[i] < output_quadrados) && (input_array[i] > output_raizes)){
                output_entre += 1;
            }

        } 
    }
    else{
        for (int i = 0; i < length_input; i++){
            if ((input_array[i] < output_raizes) && (input_array[i] > output_quadrados)){
                output_entre += 1;
            }
        } 
    }

    printf("\nNumero de valores entre as duas medias: %d", output_entre);

    return 0;
}