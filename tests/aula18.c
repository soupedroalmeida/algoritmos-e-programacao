/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
30 de março de 2022, Porto Alegre */

#include <stdio.h>

int main(void)
{
    int vet[3] = {10, 11, 12};
    int *pi;

    pi = vet; //&vet[0];
    printf("\n%p", pi);
    pi++;
    printf("\n%p", pi);
    pi++;
    printf("\n%p", pi);

    return 0;
}