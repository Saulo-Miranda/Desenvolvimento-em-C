#include <stdio.h>
int main()
{
    float n1, n2, n3, oper;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    oper = (n1 + n2 + n3) / 3;
    printf("Sua média foi: %.2f\n", oper);
    if (oper >= 7)
    {
        printf("Parabéns você foi aprovado!\n");
    }
    else
    {
        printf("Você foi reprovado e vai para a recuperação\n");
    }
}