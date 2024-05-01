#include <stdio.h>

void main()
{
    printf("Olá! Seja bem-vindo, vamos verficar o seu IMC.\n");
    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }
    char nome[50];
    int idade;
    float peso, altura;
    printf("\n");
    printf("Diga qual o seu nome: ");
    scanf("%s", &nome);
    printf("Diga qual a sua idade: ");
    scanf("%d", &idade);
    printf("Diga qual a seu peso: ");
    scanf("%f", &peso);
    printf("Diga qual a altura: ");
    scanf("%f", &altura);

    float imc;
    imc = peso / (altura * altura);

    printf("%s seu imc é %.2f\n", nome, imc);

    if (imc <= 16.9)
    {
        printf("Você está muito abaixo do peso! \n");
    }
    else if (imc <= 18.5 && imc <= 24.9)
    {
        printf("Você está abaixo do peso! \n");
    }
    else if (imc <= 24.9 && imc <= 25)
    {
        printf("Você possui o peso normal! \n ");
    }
    else if (imc <= 25 && imc <= 29.9)
    {
        printf("Você possui sobrepeso! \n");
    }
    else if (imc <= 29.9 && imc <= 30)
    {
        printf("Você possui obesidade grau 1! \n");
    }
    else if (imc <= 30 && imc <= 34.9)
    {
        printf("Você possui obesidade grau 2! \n");
    }
    else if (imc <= 35 && imc <= 40)
    {
        printf("Você possui obesidade grau 3! \n");
    }
}