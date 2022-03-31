/* Pedro Henrique Almeida de Paula - 333696
31/03/2022, Porto Alegre */

#include <stdio.h>

int avalia_aposta(int aposta[], int sorteio[], int tam){
    int acertos;
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if(*(aposta + i) == *(sorteio + j)){
                acertos++;
            }
        }
    }

    return acertos;
}

int main(void){
    int tam = 6, acertos;
    int sorteio[tam], aposta[tam], cond;
    
    do{
        printf("entre com as seis dezenas sorteadas: ");
        cond = 0; // zera a condicao do loop
        for (int i = 0; i < tam; i++){
            scanf("%d", sorteio + i);
            if (*(sorteio + i) > 80 || *(sorteio + i) < 1){ // checa se existem numeros invalidos
                printf("voce entrou com um numero invalido\n");
                cond = 1; // reseta condicao do loop
            }
            for (int j = 0; j < i; j++){
                if (*(sorteio + j) == *(sorteio + i)){ // checa se existem numeros iguais
                    printf("voce entrou com numeros iguais\n");
                    cond = 1; // reseta condicao do loop
                }
            }
        }
    } while (cond);
    
    do{
        printf("entre com as seis dezenas da sua aposta: ");
        cond = 0; // zera a condicao do loop
        for (int i = 0; i < tam; i++){ 
            scanf("%d", aposta + i);
            if (*(aposta + i) > 80 || *(aposta + i) < 1){ // checa se existem numeros invalidos
                printf("voce entrou com um numero invalido\n");
                cond = 1; // reseta condicao do loop
            }
            for (int j = 0; j < i; j++){
                if (*(aposta + j) == *(aposta + i)){ // checa se existem numeros iguais
                    printf("voce entrou com numeros iguais\n");
                    cond = 1; // reseta condicao do loop
                }
            }
        }
    } while (cond);

    acertos = avalia_aposta(aposta, sorteio, tam);
    printf("numero de acertos: %d\n", acertos);
    switch (acertos)
    {
    case 4:{
        printf("QUADRA!\n");
    } break;
    case 5:{
        printf("QUINA!\n");
    } break;
    case 6:{
        printf("SENA!\n");
    } break;   
    default: break;
    }
    
    return 0;
}