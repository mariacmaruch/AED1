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
        printf("1-Exerc�cio 1\n");
        printf("2-Exerc�cio 2\n");
        printf("3-Exerc�cio 3\n");
        printf("4- Sair do programa\n");
        printf("Digite o c�digo do exerc�cio que deseja ver:");
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

/*1 - Fa�a um programa que pe�a ao usu�rios dois valores e imprima o resto inteiro da divis�o de X por Y �voc� n�o pode
utilizar o operador % */

int ex1()
{
    int a,b,div,resto;
    printf("\nExercicio 1 - Divis�o\n");
    printf("Digite o primeiro n�mero:");
    scanf("%d", &a);
    printf("Digite o segundo n�mero:");
    scanf("%d", &b);

    div=a/b;
    resto= a - (div*b);
    printf("O resto da divis�o �: %d\n", resto);

    return 0;
}

/*2 � Fa�a uma fun��o que receba dois par�metros (passados por valor) e retorne o resto inteiro da divis�o de X por Y �
voc� n�o pode utilizar o operador % */

int ex2()
{
    int a,b,result;
    printf("\nExercicio 2 - Fun��o Divis�o\n");
    printf("Digite o primeiro n�mero:");
    scanf("%d", &a);
    printf("Digite o segundo n�mero:");
    scanf("%d", &b);
    result= divisao(a,b);
    printf("O resto da divis�o �: %d\n", result);
    return 0;
}

int divisao (int x, int y)
{
    int div,result;
    div=x/y;
    result= x - (div*y);
    return result;
}

/*3 � Fa�a uma fun��o RECURSIVA que receba dois par�metros (passados por valor) e retorne o resto inteiro da divis�o de X
por Y*/

int ex3()
{
    int a,b,resto;
    printf("\nExercicio 3 - Fun��o Recursiva Divis�o\n");
    printf("Digite o primeiro n�mero:");
    scanf("%d", &a);
    printf("Digite o segundo n�mero:");
    scanf("%d", &b);
    resto= resp(a,b);
    printf("O resto da divis�o �: %d\n", resto);
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








