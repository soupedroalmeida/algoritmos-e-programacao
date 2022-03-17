/* Pedro Henrique Almeida de Paula - 333696
17/02/2022, Porto Alegre */

#include <stdio.h>
#include <math.h>

int main(void){
    int index = 1, i, tempFatorial = 1;
    float erro, angulo, result, tempTermo;

    printf("\nEntre com o valor do angulo em graus: ");
    scanf("%f", &angulo);

    angulo *= (M_PI / 180);
    tempTermo = angulo;

    printf("Entre com o erro desejado: ");
    scanf("%f", &erro);

    while (1){
        if (index != 1){
            tempFatorial *= (1 + 2 * (index - 1));
            tempFatorial *= (1 + 2 * (index - 1) - 1);
        }

        tempTermo = pow(angulo, 1 + 2 * (index - 1)) / tempFatorial;
        
        if (tempTermo <= erro){
            break;
        }

        if (index % 2 == 0){
            result -= tempTermo;
        }
        else{
            result += tempTermo;
        }
        index++;
    }

    printf("\nValor a proximado para sen(%g): %f", angulo * 180 / M_PI, result);

    return 0;
}