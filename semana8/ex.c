/*
===============================================================================================
    Nome: Marcos Luiz Kurth Reckers
    Matricula: 00315653
    Data: 31/03/2022
===============================================================================================
*/
#include <stdio.h>

#define TAM 40

void calc_intersec(int a[], int na, int b[], int nb, int c[], int *nc)
{
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    *nc = k;
}

int main(void)
{
    // Declaração de Variaveis
    int vetor_a[TAM];
    int vetor_b[TAM];
    int vetor_inter[TAM];
    int num_a = 0;
    int num_b = 0;
    int num_inter = 0;
    //====================

    // Entrada de Dados //
    printf("Entre com o numero de elementos do vetor A: ");
    scanf("%d", &num_a);

    printf("entre com os elementos do vetor A: ");
    for (int i = 0; i < num_a; i++)
    {
        scanf("%d", &vetor_a[i]);
    }

    printf("Entre com o numero de elementos do vetor B: ");
    scanf("%d", &num_b);
    
    printf("entre com os elementos do vetor B: ");
    for (int i = 0; i < num_b; i++)
    {
        scanf("%d", &vetor_b[i]);
    }

    //====================

    // Processos/Saidas //

    calc_intersec( vetor_a, num_a, vetor_b, num_b, vetor_inter, &num_inter);

    printf("\nIntersecao: ");
    for (int i = 0; i < num_inter; i++)
    {
        printf("%d ", vetor_inter[i]);
    }
    
    //====================
    return 0;
}