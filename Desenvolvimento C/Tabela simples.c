#include <stdio.h>

int main()
{
    // Definindo as dimensões da matriz
    int linhas = 3;
    int colunas = 3;

    // Declarando a matriz
    int matriz[linhas][colunas];

    // Preenchendo a matriz com valores
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite os números para montar a tabela: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    // Imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}