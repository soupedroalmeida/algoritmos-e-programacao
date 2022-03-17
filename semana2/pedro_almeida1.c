/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
27 de janeiro de 2022, Porto Alegre */

#include <stdio.h>

int main(void){
    float comprimento, largura;
    int potencia, resultado;

    printf("\nEntre com a largura e o comprimento do quarto em metros separados por um espaco: ");
    scanf("%f %f", &comprimento, &largura);

    printf("Entre com a potencia das lampadas em watts: ");
    scanf("%d", &potencia);

    /* Torna arredondada, a força, a operação: 16 [W/(m^2)] * comprimento [m] * largura [m] / potencia [w/lâmpada]
    gerando, por análise dimencional, apenas [lâmpadas] como um número inteiro arredondado para cima */
    resultado = ceil((16 * comprimento * largura) / potencia);

    printf("\nNumero de lampadas a ser utilizado: %d", resultado);

    return 0;
}