#include <stdio.h>
#define QUANTIDADE 4

int main()
{

    int contaMulher = 0;
    int contaHomem = 0;
    float maiorAltura = 0, menorAltura = 999, somaMulher = 0, somaHomem = 0, somaAltura = 0;
    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("\n Leitura das fichas \n");
        printf("\n (%d) - Qual seu gênero (1 - Masculino / 2 - Feminino): ", i + 1);
        int genero;
        scanf("%d", &genero);
        printf("\n (%d) - Insira sua altura: ", i + 1);
        float altura;
        scanf("%f", &altura);
        somaAltura += altura;
        if(genero == 1){
            somaHomem += altura;
            contaHomem++;
        }
        if (genero == 2)
        {
            somaMulher += altura;
            contaMulher++;
        }
        if (altura > maiorAltura)
            maiorAltura = altura;
        if (altura < menorAltura)
            menorAltura = altura;
    }
    printf("\n Resultados: \n");
    printf("\n A média de altura das mulheres é: %0.1f", somaMulher / contaMulher);
    printf("\n A média de altura dos homens é: %0.1f", somaHomem / contaHomem);
    printf("\n A maior altura da turma é: %0.1f", maiorAltura);
    printf("\n A menor altura da turma é: %0.1f", menorAltura);
    printf("\n A média de altura da turma é: %0.1f", somaAltura / QUANTIDADE);
}