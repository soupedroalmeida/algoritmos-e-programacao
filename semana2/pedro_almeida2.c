/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
27 de janeiro de 2022, Porto Alegre */

#include <stdio.h>

int main(void){
    float inicial, resultado;
    int dias, taxa;
    
    printf("\nEntre com a quantidade inicial a ser aplicada: ");
    scanf("%f", &inicial);

    printf("Entre com a taxa de rendimento mensal: ");
    scanf("%d", &taxa);

    printf("Entre com a quantidade de dias que a quantia ficara aplicada: ");
    scanf("%d", &dias);

    // x(1 + i/100)^(n), como n está em meses, divido os dias por 30.
    resultado = (inicial * pow((1 + taxa / 100.0), (dias / 30)));

    printf("\nMontante final: R$%.2f", resultado);
    
    return 0;
}