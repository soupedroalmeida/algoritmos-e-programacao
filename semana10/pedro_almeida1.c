/* Pedro Henrique Almeida de Paula - 333696
14/04/2022, Porto Alegre */

#include <stdio.h>

typedef struct carro{ // struct que define um carro
    int cod;
    char modelo[45];
    char marca[45];
    float preco;
    int ano;
} CARRO;

int menu(){ // cria o menu e retorna a opcao escolhida
    int opcao = 0;
    printf("\n1 – Cadastro de carro\n2 – Consulta de carro\n3 – Preco médio dos carros\n4 – Imprime estoque revenda\n5 – Fim\n");
    do // loop roda enquanto a opcao for invalida
    {
        printf("Entre com sua opção: ");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 5);
    
    return opcao;
}

void cadastraCarro(CARRO *c){ // assinala valores para cada campo da struct passada
    printf("\nEntre com o codigo do carro: ");
    scanf("%d", &c->cod);
    printf("Entre com a marca do carro: ");
    scanf("%s", c->marca);
    printf("Entre com o modelo do carro: ");
    scanf("%s", c->modelo);
    printf("Entre com o preco do carro: ");
    scanf("%f", &c->preco);
    printf("Entre com o ano do carro: ");
    scanf("%d", &c->ano);  
}

void print_carro(CARRO c){ // printa todos os campos da struct passada
    printf("\nCodigo: %d\n", c.cod); 
    printf("Marca: %s\n", c.marca);
    printf("Modelo: %s\n", c.modelo);
    printf("Preco: %.2f\n", c.preco);
    printf("Ano: %d\n", c.ano);
}

float calcMediaPreco(CARRO carros[], int ncarros){ // calcula e retorna a media de precos 
    int media = 0; // inicia media em 0
    for (int carro = 0; carro < ncarros; carro++){ 
        media += carros[carro].preco; 
    } // media se torna a soma de todos os valores
    media /= ncarros; // media é dividida pelo numero de carros

    return media;
}

CARRO procuraCarro(CARRO carros[], int ncarros, int cod){ // essencialmente checa se um carro existe
    CARRO c;
    for (int carro = 0; carro < ncarros; carro++) // para cada carro na lista de carros
    {
        if (carros[carro].cod == cod) // se o codigo do carro coincidir com o codigo passado como parametro
        {
            c = carros[carro]; // torna os codigos iguais
        }
        else{ // se nao existir o carro com tal codigo
            c.cod = -1; // codigo de c se torna -1
        }
    }
    return c;
}

int main(void){
    int opcao = 0; // inicia opcao como 0
    CARRO carros[3]; // cria uma array de no maximo 3 carros
    int ncarros = 0; // inicia um contador de carros

    do // loop roda enquanto opcao for diferente de 5
    {
        opcao = menu();

        switch (opcao)
        {
            case 1:
            {
                CARRO carro = {0}; // cria um carro e zera todos os campos da estrutura
                cadastraCarro(&carro); // gera um carro para o carro criado
                carros[ncarros] = carro; // escreve o carro na lista
                ncarros++; // aumenta o contador de carros 
            } break;
            case 2:
            {
                int codigo = 0; // cria e inicia o codigo em 0, codigo impossivel de se conseguir
                do // loop para checar se o codigo e valido
                {
                    printf("Entre com o codigo do carro: ");
                    scanf("%d", &codigo);
                    if (procuraCarro(carros, ncarros, codigo).cod == -1) // checa se o carro nao existe
                    {
                        printf("Este carro nao existe!\n");
                    }
                } while (codigo > ncarros || codigo < 0);
                print_carro(procuraCarro(carros, ncarros, codigo)); // print_carro do carro com tal codigo, se existir
            } break;
            case 3:
            {
                printf("Preco medio dos carros: %.2f\n", calcMediaPreco(carros, ncarros)); // printa a media de precos
            } break;
            case 4:
            {
                for (int carro = 0; carro < ncarros; carro++) // printa cada carro existente 
                {
                    print_carro(carros[carro]);
                    printf("\n");
                }
            } break;
            case 5: break;
        }
    } while (opcao != 5);

    return 0;
}