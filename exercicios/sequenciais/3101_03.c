/* Pedro Henrique Almeida de Paula - 333696
01/31/2022, Porto Alegre 

Read three values and output their arithmetic and harmonic means */

#include <stdio.h>

int main(void){
    float a, b, c;

    printf("\nEnter three values separeted by spaces: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nTheir arithmetic mean is: %.2f", (a + b + c) / 3);
    printf("\nTheir harmonic mean is: %.2f", 3 / ( 1 / a + 1 / b + 1 / c));

    return 0;
}