/* Pedro Henrique Almeida de Paula - 333696
07/04/2022, Porto Alegre */

#include <stdio.h>

int checa_intersec(float pri_retangulo[], float seg_retangulo[]){
    int resultado = 0;

    if (pri_retangulo[0] <= seg_retangulo[0] && pri_retangulo[2] >= seg_retangulo[0] && pri_retangulo[1] <= seg_retangulo[3] && pri_retangulo[1] >= seg_retangulo[1])
    {
        resultado = 1;
    }
    if (pri_retangulo[2] >= seg_retangulo[0] && pri_retangulo[2] <= seg_retangulo[2] && pri_retangulo[3] >= seg_retangulo[1] && pri_retangulo[3] <= seg_retangulo[3])
    {
        resultado = 1;
    }
    if (pri_retangulo[0] <= seg_retangulo[2] && pri_retangulo[0] >= seg_retangulo[0] && pri_retangulo[1] <= seg_retangulo[3] && pri_retangulo[1] >= seg_retangulo[1])
    {
        resultado = 1;
    }
    if (pri_retangulo[0] >= seg_retangulo[0] && pri_retangulo[0] <= seg_retangulo[2] && pri_retangulo[3] >= seg_retangulo[1] && pri_retangulo[3] <= seg_retangulo[3])
    {
        resultado = 1;
    }

    return resultado;
}

int main(void){
    int nro_retangulos;
    do
    {
        printf("Entre com o numero de retangulos: ");
        scanf("%d", &nro_retangulos);
    } while (nro_retangulos > 10 || nro_retangulos < 2);

    float lista_retangulos[nro_retangulos][4];
    
    for (int retangulo = 0; retangulo < nro_retangulos; retangulo++)
    {
        printf("Retangulo %d", retangulo + 1);

        printf("\nEntre com a cordenada esquerda (x, y): ");
        scanf("%f %f", lista_retangulos[retangulo], lista_retangulos[retangulo] + 1);

        printf("Entre com a cordenada direita (x, y): ");
        scanf("%f %f", lista_retangulos[retangulo] + 2, lista_retangulos[retangulo] + 3);
    }

    int contador = 0;

    for (int pri_retangulo = 0; pri_retangulo < nro_retangulos; pri_retangulo++)
    {
        for (int seg_retangulo = 0; seg_retangulo < nro_retangulos; seg_retangulo++)
        {
            if (pri_retangulo < seg_retangulo)
            {
                if (checa_intersec(lista_retangulos[pri_retangulo], lista_retangulos[seg_retangulo]))
                {
                    printf("\nInterseccao entre os retangulos %d e %d", pri_retangulo, seg_retangulo);
                    contador++;
                }
            }
        }
    }
    printf("\nNumero de interseccoes: %d\n", contador);

    return 0;
}