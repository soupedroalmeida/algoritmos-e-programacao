/*
===============================================================================================
    Nome: Marcos Luiz Kurth Reckers
    Matricula: 00315653
    Data: 14/04/2022
===============================================================================================
*/

#include <stdio.h>

typedef struct carro
{
    int cod;
    char marca[45];
    char modelo[45];
    float preco;
    int ano;
} CARRO;

// Imprime menu na tela, faz validação e retorna a opção desejada
int menu()
{
    int opcao;
    do
    {
    printf("1- Cadastrar carro\n");
    printf("2- Consultar carro\n");
    printf("3- Preço médio dos carros\n");
    printf("4- Imprime estoque da revenda\n");
    printf("5- Fim\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    } while(opcao < 1 || opcao > 5);

    return opcao;
}

// Le informações e cadastra um carro
void cadastraCarro(CARRO *c)
{
    printf("Digite o código do carro: ");
    scanf("%d", &c->cod);
    printf("Digite a marca do carro: ");
    scanf("%s", c->marca);
    printf("Digite o modelo do carro: ");
    scanf("%s", c->modelo);
    printf("Digite o preço do carro: ");
    scanf("%f", &c->preco);
    printf("Digite o ano do carro: ");
    scanf("%d", &c->ano);
}
// imprime as informações de um determinado carro na tela na opção consulta de carro. Esta função deverá ser usada também para a impressão de todo o estoque da revenda.
void print_carro(CARRO c)
{
    printf("Código: %d\n", c.cod);
    printf("Marca: %s\n", c.marca);
    printf("Modelo: %s\n", c.modelo);
    printf("Preço: %.2f\n", c.preco);
    printf("Ano: %d\n", c.ano);
}
// calcula o preco médio de todos os carroscadastrados
float calcMediaPreco(CARRO carros[], int ncarros)
{
    float media = 0;
    for (int i = 0; i < ncarros; i++)
    {
        media += carros[i].preco;
    }
    media /= ncarros;
    return media;
}
// Procura um carrocom o código fornecido entre todos os cadastrados. Caso não exista o carro, retorna -1 no campo cod do CARRO.
CARRO procuraCarro(CARRO carros[], int ncarros, int cod)
{
    for (int i = 0; i < ncarros; i++)
    {
        if (carros[i].cod == cod)
        {
            return carros[i];
        }
    }
    CARRO c;
    c.cod = -1;
    return c;
}

int main(void)
{
    int opcao, ncarros = 0;
    CARRO carros[100];
    do
    {
        switch (menu())
        {
        case 1:
            cadastraCarro(&carros[ncarros]);
            ncarros++;
            break;
        case 2:
            print_carro(procuraCarro(carros, ncarros, 3));
            break;
        case 3:
            printf("%.2f\n", calcMediaPreco(carros, ncarros));
            break;
        case 4:
            for (int i = 0; i < ncarros; i++)
            {
                print_carro(carros[i]);
            }
            break;
        }
    } while (opcao != 5);
    return 0;
}
