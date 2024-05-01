#include <stdio.h>

void inicio()
{
    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("Olá! Seja bem-vindo.\n");
    printf("1- Multiplicação\n");
    printf("2- Divisão\n");
    printf("3- Adição\n");
    printf("4- Subtração\n");
    printf("5- Resto de uma divisão\n");
    printf("0- Sair\n");
}

int main()
{
    inicio();
    int oper = -1;
    float x, y;

    while (oper != 0)
    {
        printf("Escolha uma operação (0 para sair): ");
        scanf("%d", &oper);

        switch (oper)
        {
        case 1:
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);
            printf("Digite o segundo valor: ");
            scanf("%f", &y);
            printf("O resultado de %.2f * %.2f = %.2f\n", x, y, x * y);
            break;

        case 2:
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);
            printf("Digite o segundo valor: ");
            scanf("%f", &y);
            if (y == 0)
            {
                printf("Divisão por zero não é permitida.\n");
            }
            else
            {
                printf("O resultado de %.2f / %.2f = %.2f\n", x, y, x / y);
            }
            break;

        case 3:
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);
            printf("Digite o segundo valor: ");
            scanf("%f", &y);
            printf("O resultado de %.2f + %.2f = %.2f\n", x, y, x + y);
            break;

        case 4:
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);
            printf("Digite o segundo valor: ");
            scanf("%f", &y);
            printf("O resultado de %.2f - %.2f = %.2f\n", x, y, x - y);
            break;

        case 5:
            printf("Digite o primeiro valor: ");
            scanf("%f", &x);
            printf("Digite o segundo valor: ");
            scanf("%f", &y);
            printf("O resto da divisão entre %.2f e %.2f é %.2f\n", x, y, fmod(x, y));
            break;

        case 0:
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opção desconhecida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}