/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
03 de fevereiro de 2022, Porto Alegre */

#include <stdio.h>

int main(void){

    int n, somaAlgarismos;
    char unidades[][7] = {
        "um",
        "dois",
        "tres",
        "quatro",
        "cinco",
        "seis",
        "sete",
        "oito",
        "nove"
    };
    char dezenas[][7] = {
        "Vinte",
        "Trinta"
    };

    printf("\nEntre com o valor de N: ");
    scanf("%d", &n);

    if (n < 20 || n > 39) {
        printf("Valor fora do intervalo!");
    }
    else {
        somaAlgarismos = (int)(n / 10) + n % 10;
        printf("Soma dos algarismos = %d", somaAlgarismos);
        
        if (n % 10 == 0){
            printf("\nExtenso: %s", dezenas[n / 10 - 2]);
        }
        else{
           printf("\nExtenso: %s e %s", dezenas[n / 10 - 2], unidades[n % 10 - 1]); 
        }
    }

    return 0;

}