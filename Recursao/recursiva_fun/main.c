#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex1();
int ex2();
int divisao (int, int);
int ex3();
int resp (int, int);


int main()
{
    system ("CLS");
    setlocale(LC_ALL, "portuguese");
    int op;
    do
    {
        printf("\nMenu\n");
        printf("1-Exercício 1\n");
        printf("2-Exercício 2\n");
        printf("3-Exercício 3\n");
        printf("4- Sair do programa\n");
        printf("Digite o código do exercício que deseja ver:");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        }
        if(op!=4)
        {
            system("Pause");
        }
    }
    while(op!=4);
    return 0;
}

/*1 - Faça um programa que peça ao usuários dois valores e imprima o resto inteiro da divisão de X por Y –você não pode
utilizar o operador % */

int ex1()
{
    int a,b,div,resto;
    printf("\nExercicio 1 - Divisão\n");
    printf("Digite o primeiro número:");
    scanf("%d", &a);
    printf("Digite o segundo número:");
    scanf("%d", &b);

    div=a/b;
    resto= a - (div*b);
    printf("O resto da divisão é: %d\n", resto);

    return 0;
}

/*2 – Faça uma função que receba dois parâmetros (passados por valor) e retorne o resto inteiro da divisão de X por Y –
você não pode utilizar o operador % */

int ex2()
{
    int a,b,result;
    printf("\nExercicio 2 - Função Divisão\n");
    printf("Digite o primeiro número:");
    scanf("%d", &a);
    printf("Digite o segundo número:");
    scanf("%d", &b);
    result= divisao(a,b);
    printf("O resto da divisão é: %d\n", result);
    return 0;
}

int divisao (int x, int y)
{
    int div,result;
    div=x/y;
    result= x - (div*y);
    return result;
}

/*3 – Faça uma função RECURSIVA que receba dois parâmetros (passados por valor) e retorne o resto inteiro da divisão de X
por Y*/

int ex3()
{
    int a,b,resto;
    printf("\nExercicio 3 - Função Recursiva Divisão\n");
    printf("Digite o primeiro número:");
    scanf("%d", &a);
    printf("Digite o segundo número:");
    scanf("%d", &b);
    resto= resp(a,b);
    printf("O resto da divisão é: %d\n", resto);
    return 0;
}

int resp (int x, int y)
{
    if (x<y){
        return x;
    }
    else{
        return resp(x-y,y);
    }
}








