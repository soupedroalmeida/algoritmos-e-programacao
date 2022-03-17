/* Pedro Henrique Almeida de Paula - Cartão UFRGS: 333696
03 de fevereiro de 2022, Porto Alegre */

#include <stdio.h>
#include <ctype.h>

int main(void){

    char jogadaUm, jogadaDois;
    int result;

    printf("\nEntre com as duas jogadas separadas por espaco: ");
    scanf("%c %c", &jogadaUm, &jogadaDois);

    result = jogadaUm + jogadaDois; 

    if (result == 227){
        if (jogadaUm == 'p'){
            printf("Tesoura corta papel! O jogador 2 venceu.");
        }
        else{
            printf("Tesoura corta papel! O jogador 1 venceu.");
        }
    }
    else if (result == 226){
        if (jogadaUm == 'p'){
            printf("Papel cobre pedra! O jogador 1 venceu.");
        }
        else{
            printf("Papel cobre pedra! O jogador 2 venceu.");
        }
    }
    else if (result == 229){
        if (jogadaUm == 'r'){
            printf("Pedra quebra tesoura! O jogador 1 venceu.");
        }
        else{
            printf("Pedra quebra tesoura! O jogador 2 venceu.");
        }
    }
    else{
        printf("EMPATE!");
    }
    

    return 0;

}