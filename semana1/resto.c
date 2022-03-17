#include <stdio.h>

int main(void){
    int dividendo, divisor;

    // faz um loop que roda infinitamente
    while (1)
    {
        // assinala o valor do dividendo
        printf("Digite o valor do dividendo: ");
        scanf("%d", &dividendo);

        // assinala o valor do divisor
        printf("Digite o valor do dividendo: ");
        scanf("%d", &divisor);

        // printa a funcao para os divisor e dividendo 
        printf("Resto da divisao de %d por %d: %d\n", dividendo, divisor, resto(dividendo, divisor));
    }
    return 0;
}

// funcao que toma a e b como valores inteiros
int resto(int a, int b){
    int c;

    // assinala c como o resto da divisao entre a e b
    c = a % b;

    //retorna c para a funcao
    return c;
}

