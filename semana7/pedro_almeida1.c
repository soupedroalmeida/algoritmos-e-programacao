/* Pedro Henrique Almeida de Paula - 333696
04/03/2022, Porto Alegre */

#include <stdio.h>

void ctoF(void){
    float tempF, tempC;

    printf("Entre com a temperatura em Centigrados: ");
    scanf("%f", &tempC);

    tempF = 9 * tempC / 5 + 32;

    printf("Temperatura equivalente em Fahrenheit: %.2f", tempF);
}

void ftoC(void){
    float tempF, tempC;

    printf("Entre com a temperatura em Fahrenheit: ");
    scanf("%f", &tempF); 
    
    tempC = 5 * (tempF - 32) / 9;

    printf("Temperatura equivalente em Centigrados: %.2f", tempC);
}

void menu(void){
    printf("Entre com uma das opcoes:\n1 - Converte Centigrados para Fahrenheit\n2 - Converte Fahrenheit para Centigrados\n3 - Sair\n");
}

int main(void){
    int opt;
    float temp;
    
    menu();

    printf("Opcao: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
    {
        ctoF();
    } break;
    
    case 2:
    {
        ftoC();
    } break;
    default: break;
    }

    return 0;
}