#include <stdio.h>

int main(void){
    int val1; 
    int val2;
    int val3;

    printf("Digite o primeiro termo da soma:\n");
    scanf("%d", &val1);

    printf("Digite o segundo termo da soma:\n");
    scanf("%d", &val2);

    printf("Digite o terceiro termo da soma:\n");
    scanf("%d", &val3);

    printf("\nResultado da soma: %d\n", val1 + val2 + val3);
    printf("Resultado do produto: %d", val1 * val2 * val3);
    return 0;
}