/* Pedro Henrique Almeida de Paula - 333696
01/31/2022, Porto Alegre 

Read the number of hours a employed worked on a month, how much BRL they earn 
per hour (ratio), how much children with less than 14 years old they have 
and output their salary*/

#include <stdio.h>

int main(void){
    float hours, ratio, children;

    printf("\nEnter the time the employed worked in hours: ");
    scanf("%f", &hours);

    printf("Enter the earning ratio in BRL per hour: ");
    scanf("%f", &ratio);

    printf("Enter the amount of children with less than 14 years old the employed have: ");
    scanf("%f", &children);

    printf("\nThe employed salary, for a 2022 standard, is: %.2f", 56.47 * children + hours * ratio);

    return 0;
}