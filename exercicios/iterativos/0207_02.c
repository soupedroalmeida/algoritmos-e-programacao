/* Pedro Henrique Almeida de Paula - 333696
02/07/2022, Porto Alegre  */

#include <stdio.h>

int main(void){
    float x, result;
    int index;

    printf("\nEntre com o numero desejado: ");
    scanf("%f", &x);

    for (index = 1; index <= 25; index++){
        if (index % 2 == 0){
            result -= pow(x, 26 - index) / index;
        }
        else{
            result += pow(x, 26 - index) / index;
        }
    }

    printf("Resultado da soma: %f", result);

    return 0;
}
