#include <stdio.h>

int main(void){
    int anoCorrente;
    int anoUsuario;

    printf("Digite em que ano estamos:\n");
    scanf("%d", &anoCorrente);

    printf("Digite em que ano nasceu:\n");
    scanf("%d", &anoUsuario);

    printf("\nSua idade: %d anos", anoCorrente - anoUsuario);
    
    return 0;
}