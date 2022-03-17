/* Pedro Henrique Almeida de Paula - 333696
02/01/2022, Porto Alegre */

#include <stdio.h>
#include <ctype.h>

int main(void){

    char cod;
    int qua;

    printf("\nEntre com o tipo de ovo: ");
    scanf("%c", &cod);

    printf("\nEntre com a quantidade de ovos: ");
    scanf("%d", &qua);

    if ((tolower(cod) == 'a' && qua <= 50) || (tolower(cod) == 'b' && qua <= 30) || (tolower(cod) == 'c' && qua <= 20))
    {
        switch (tolower(cod))
        {
        case 'a':
            printf("\nTipo de ovo solicitado: %c", cod);
            printf("\nQuantidade de ovos solicitada: %d", qua);
            printf("\nTotal a ser pago: R$%.2f", (float)qua * 12);
            break;
        case 'b':
            printf("\nTipo de ovo solicitado: %c", cod);
            printf("\nQuantidade de ovos solicitada: %d", qua);
            printf("\nTotal a ser pago: R$%.2f", (float)qua * 15.5);
            break;
        case 'c':
            printf("\nTipo de ovo solicitado: %c", cod);
            printf("\nQuantidade de ovos solicitada: %d", qua);
            printf("\nTotal a ser pago: R$%.2f", (float)qua * 21.3);
            break;
        }
    } else{
        switch (tolower(cod))
        {
        case 'a':
            printf("\nO pedido nao podera ser atendido pois a quantidade maxima para '%c' e %d", toupper(cod), 50);
            break;
        case 'b':
            printf("\nO pedido nao podera ser atendido pois a quantidade maxima para '%c' e %d", toupper(cod), 30);
            break;
        case 'c':
            printf("\nO pedido nao podera ser atendido pois a quantidade maxima para '%c' e %d", toupper(cod), 20);
            break;
        }
    }

    return 0;

}



