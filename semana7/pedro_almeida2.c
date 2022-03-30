/* Pedro Henrique Almeida de Paula - 333696
04/03/2022, Porto Alegre */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float aproxSqrt(float initX, float r, float t){
    float x;
    x = initX - (pow(initX, 3) - r) / (3 * pow(initX, 2));

    return x;
}

int main(void){
    float initX, r, t, aproxRes;

    printf("Entre com o valor de r: ");
    scanf("%f", &r);

    printf("Entre com o valor de x0: ");
    scanf("%f", &initX);

    printf("Entre com a tolerancia: ");
    scanf("%f", &t);

    aproxRes = aproxSqrt(initX, r, t);

    while (fabs(pow(aproxRes, 3) - r) >= t){
        aproxRes = aproxSqrt(aproxRes, r, t);
    }

    printf("A raiz cubica aproximada de %.2f e: %f", r, aproxRes);

    return 0;
}