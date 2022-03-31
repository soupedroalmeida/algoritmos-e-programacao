/* Pedro Henrique Almeida de Paula - 333696
31/03/2022, Porto Alegre */

#include <stdio.h>

void calc_intersec(int a[], int na, int b[], int nb, int c[], int *nc){
    int counter;
    for (int i = 0; i < na; i++){
        for (int j = 0; j < nb; j++){
            if (*(a + i) == *(b + j)){
                c[counter] = *(a + i);
                counter++;
            }
        }
    }
    *nc = counter;
}

int main(void){
    int na, nb, nc, cond;

    do{
        cond = 0;
        printf("entre com o numero de elementos do vetor a: ");
        scanf("%d", &na);
        if (na > 40 || na < 1){
            printf("entre com um numero valido de elementos");
            cond = 1;
        }
    } while (cond);

    int a[na];

    printf("entre com os %d numeros de a: ", na);
    for (int i = 0; i < na; i++){
        scanf("%d", &a[i]);
    }

    do{
        cond = 0;
        printf("entre com o numero de elementos do vetor b: ");
        scanf("%d", &nb);
        if (nb > 40 || nb < 1){
            printf("entre com um numero valido de elementos");
            cond = 1;
        }
    } while (cond);

    int b[nb], c[40];
    
    printf("entre com os %d numeros de b: ", nb);
    for (int j = 0; j < nb; j++){
        scanf("%d", &b[j]);
    }

    calc_intersec(a, na, b, nb, c, &nc);
    printf("vetor interseccao: ");
    for (int i = 0; i < nc; i++){
        printf("%d ", c[i]);
    }

    return 0;
}