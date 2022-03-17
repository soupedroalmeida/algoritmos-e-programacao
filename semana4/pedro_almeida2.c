/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
10 de fevereiro de 2022, Porto Alegre */

#include <stdio.h>
#include <math.h>

int main(void){

    float x, result;
    int numTermos;

    printf("\nEntre com o valor de x: ");
    scanf("%f", &x);

    printf("Entre com o numero de termos a ser usado na sequencia: ");
    scanf("%d", &numTermos);

    if (x > -1 && x < 1){
        for (int i = 1; i <= numTermos; i++){
            if (i % 2 == 0){
                result -= pow(x, 1 + (2 * (i - 1))) / (1 + (2 * (i - 1)));
            }
            else{
                result += pow(x, 1 + (2 * (i - 1))) / (1 + (2 * (i - 1)));
            }
        }
        printf("\nResultado para arctg(%g): %f", x, result);
    }
    else{
        printf("\nERRO: o valor informado deve estar entre -1 e 1!");
    }

    return 0;

}