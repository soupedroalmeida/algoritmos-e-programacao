/* Pedro Henrique Almeida de Paula - 333696
01/31/2022, Porto Alegre 

Read a product price in BRL, read the conversion ratio 
(from BRL to USD) and output the prince in USD */

#include <stdio.h>

int main(void){
    float price, ratio;

    printf("\nEnter the product price in BRL: ");
    scanf("%f", &price);

    printf("Enter the conversion ratio from BRL to USD: ");
    scanf("%f", &ratio);

    printf("\nThe converted amount of %.2f BRL is: %.2f USD", price, price * ratio);

    return 0;
}