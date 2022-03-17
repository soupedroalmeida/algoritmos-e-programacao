/* Pedro Henrique Almeida de Paula - 333696
17/02/2022, Porto Alegre */

#include <stdio.h>

int main(void){
    char caractere;
    int maiusculos = 0, minusculos = 0;

    do{
        printf("Entre com um caractere: ");
        scanf(" %c", &caractere);
        if (caractere >= 'a' && caractere <= 'z'){
            minusculos++;
        }
        if (caractere >= 'A' && caractere <= 'Z'){
            maiusculos++;
        }
    }while (caractere != '!');

    printf("Voce digitou %d caracteres maiusculos e %d caracteres minusculos", maiusculos, minusculos);

    return 0;
}