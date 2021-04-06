#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int ex1();
int maiorZero (int);
int ex2();
float potencia(float, float);
int ex3();
int ex4();
int bissexto (int);
int ex5();
int divisao (int,int);
int ex6();
float tabela (int);
int ex7();
int ex8();
int fibonacci(int);
int ex9();
float pot(int, int);
int ex11();
float calc_exp(int termo, int x);



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
        printf("4-Exercício 4\n");
        printf("5-Exercício 5\n");
        printf("6-Exercício 6\n");
        printf("7-Exercício 7\n");
        printf("8-Exercício 8\n");
        printf("9-Exercício 9\n");
        printf("10-Exercício 10\n");
        printf("11-Exercício 11\n");
        printf("12-Exercício 12\n");
        printf("15- Sair do programa\n");
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
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        case 8:

            ex8();
            break;
        case 9:
            ex9();
            break;
        /*case 10:
            ex10();
            break;*/
        case 11:
            ex11();
            break;

        }
        if(op!=15)
        {
            system("Pause");
        }
    }
    while(op!=15);
    return 0;
}

/*1 ) Escrever uma função que peça ao usuário um valor, caso o valor seja menor do que zero mostre a mensagem “Valor
deverá ser maior ou igual a zero” e peça novamente um novo número. A função só poderá retornar um valor válido.*/

int ex1()
{
    int n,valido;
    printf("\n1-Digite um valor:");
    scanf("%d", &n);
    valido= maiorZero (n);
    printf("Valor válido=%d\n", valido);
    return 0;
}

int maiorZero (int num)
{
    if (num<0)
    {
        printf("Valor deverá ser maior ou igual a zero\n");
        printf("Digite um novo valor:");
        scanf("%d", &num);
    }
    return num;
}

/*2) Escrever uma função para retornar o valor da hipotenusa de um triângulo retângulo dado os valores dos catetos.*/

int ex2()
{
    float resp,c1,c2;
    printf("\n2-Digite o valor do primeiro cacteto do triângulo:");
    scanf("%f", &c1);
    printf("Digite o valor do segundo cacteto do triângulo:");
    scanf("%f", &c2);
    resp= potencia(c1,c2);
    printf("Valor da hipotenusa=%.2f\n", resp);
    return 0;
}

float potencia(float a, float b)
{
    float soma,resp;
    soma= pow(a,2) + pow(b,2);
    return resp=(sqrt(soma));
}

/*3) Faça um programa principal que leia um conjunto indeterminado de valores (cada valor correspondendo a um cateto de
um triangulo retângulo) e imprima o valor da hipotenusa. (Utilize as funções criadas nos exercícios 1 e 2) – (FLAG 0).*/

int ex3()
{
    float n1=0,n2=0,resp=0,valido,c1,c2;
    printf("\n3-Vamos ler um conjunto indeterminado de valores. Digite o primeiro valor:");
    scanf("%f",&n1);
    valido= maiorZero(n1);
    c1=valido;
    printf("Digite o segundo valor:");
    scanf("%f",&n2);
    valido= maiorZero(n2);
    c2=valido;
    resp= potencia(c1,c2);
    printf("Valor da hipotenusa=%.2f\n", resp);
    return 0;
}

/*4) Construa um método que verifique se um ano qualquer é bissexto ou não. Projete o parâmetros de entrada (inteiro e
positivo) e o valor de retorno.
Teste-o a partir de main().
Para ser bissexto, o ano deve ser:
Divisível por 4. Não pode ser divisível por 100. Pode ser que seja divisível por 400.*/

int ex4()
{
    int ano;
    printf("\n4-Digite o ano que deseja verificar se é bissexto:");
    scanf("%d",&ano);
    bissexto (ano);
    return 0;
}

int bissexto (int ano)
{

    if (((ano%4==0) && (ano%100!=0)) || (ano%400==0))
    {

        printf("%d é bissexto!\n", ano);

    }
    else
    {
        printf("%d não é bissexto!\n", ano);

    }
    return ano;
}

/*5) Fazer um algoritmo para :
- definir uma função para determinar se um número inteiro é divisível por outro;
- ler um número indeterminado de pares de dados inteiros;
- o último par de dados será igual a (zero, zero) e não deverá ser considerado;
- usando a função, mostrar que pares lidos têm o primeiro valor divisível pelo segundo.*/


int ex5()
{
    int x,y,resp;

    printf("\n5-Digite o primeiro número do par:");
    scanf("%d", &x);
    printf("Digite o segundo número do par:");
    scanf("%d", &y);

    resp=divisao(x,y);
    printf("É divisível? %d\n", resp);

    while (x!=0 && y!=0)
    {
        printf("\nDigite o primeiro número do par:");
        scanf("%d", &x);
        printf("Digite o segundo número do par:");
        scanf("%d", &y);
        resp=divisao(x,y);
        printf("É divisível? %d\n", resp);
    }

    return 0;
}

int divisao (int a, int b)
{
    if (a%b==0)
    {
        printf("Par= %d / %d\n", a, b);
    }
    return (a%b==0);
}

/*6) Faça uma função que receba como parâmetro de entrada o código de um produto, e como parâmetro de saída irá disponibilizar
o preço da mercadoria de acordo com a tabela abaixo:
Código Preço
100 1,20
101 1,50
102 2,50
103 2,75 */

int ex6()
{
    int cod;
    float valor;
    printf("\n6-Mercadorias:\n");
    printf("Código Preço\n");
    printf(" 100   1,20\n 101   1,50\n 102   2,50\n 103   2,75\n");
    printf("Digite o código do produto que deseja:");
    scanf("%d", &cod);
    valor = tabela (cod);
    printf("%d = R$%.2f\n", cod, valor);
    return 0;
}

float tabela (int num)
{
    float valor;
    switch(num)
    {
    case 100:
        valor=1.20;
        break;
    case 101:
        valor=1.50;
        break;
    case 102:
        valor=2.50;
        break;
    case 103:
        valor=2.75;
        break;
    default:
        printf("Erro! Código inválido\n");
        system("pause");
    }
    return valor;
}

/*7) Faça um programa que utilize a função do exercício anterior. Este programa irá pedir ao usuário vários códigos
e quantidades dos produtos. Para cada par de valores deverá chamar a função para obter o preço da mercadoria
e devolver ao usuário o valor total – ao final de todos os códigos (flag código =0)
o programa deverá mostrar o valor total da compra. Obs caso o código não exista na tabela deverá mostrar uma
mensagem de erro e pedir novo código*/

int ex7()
{
    int cod, quant;
    float valor, total,soma=0;
    printf("\n7-Se desejar sair do programa digite 0!\n");
    printf("De acordo com as mercadorias do execício anterior, digite o código do produto que deseja:");
    scanf("%d", &cod);
    while(cod != 0)
    {
        if ((cod == 100) || (cod == 101) || (cod == 102) || (cod == 103))
        {
            valor = tabela (cod);
            printf("Digite a quantidade que deseja deste produto:");
            scanf("%d", &quant);
            total= valor*quant;
            soma=total+soma;
            printf("\nDigite o código do produto que deseja:");
            scanf("%d", &cod);
        }
        else
        {
            printf("Erro! Digite código válido:");
            scanf("%d", &cod);
        }
    }
    printf("Valor total=R$%f\n",soma);
    return 0;
}

/*8) Construa um método que calcule e retorne o k-ésimo termo Fibonacci.
Parâmetros de entrada: a posição do termo na sequência Fibonacci.
Valor de retorno: o termo Fibonacci.
Teste o método a partir de main().*/

int ex8()
{
    int n,termo;
    printf("\n8-Digite a posição do termo que deseja visualizar:");
    scanf("%d", &n);
    termo=fibonacci(n);
    printf("Fibonacci %d= %d\n", n, termo);
    return 0;
}

int fibonacci(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}

/*9) Construa um método que calcule a potenciação. Projete os parâmetros de entrada (inteiros e positivos)
e o valor de retorno. Teste-o a partir de main(). Obs. Você não pode utilizar a função pow*/

int ex9()
{
    int p, b;
    float resp;
    printf("\n9-Qual a base?");
    scanf("%d", &b);
    printf("E sua potencia?");
    scanf("%d", &p);
    resp=pot(b,p);
    printf("%d elevado a %d = %.1f\n", b, p, resp);
    return 0;
}

float pot(int b, int p)
{
    if (p==0)
    {
        return 1;
    }
    else
    {
        return b*pot(b,p-1);
    }
}

/*10) Elabore um procedimento para calcular o dígito verificador de um CPF, deverá receber como parâmetro de
entrada uma string com os 9 primeiros dígitos do cpf e deverá devolver dois parâmetros um com o primeiro digito
e outro com o segundo digito. Teste o método a partir de main().*/

/* ERRO!

int ex10()
{
    char cpf[9];
    int digito,d1,d2,calculo=0;
    calculo=vf_cpf(cpf[9],&d1,&d2);
    printf("Digitos verificadores do CPF: %d %d", d1,d2);
    return 0;
}

int vf_cpf(char cpf[9],int *d1, int *d2)
{
    int i,aux1=10,aux2=11,digito;
    printf("Digite os 9 primeiros dígitos do CPF:");
    scanf("%d", &digito);
    cpf=atoi(digito);
    for(i=0; cpf[i]!='\0'; i++)
    {
        *d1+=cpf[i]*aux1;
        *d2+=cpf[i]*aux2;
        aux1--;
        aux2--;
    }

    *d1=(*d1*10)%11;
    if(*d1==10)
    {
        *d1=0;
    }
    *d2+=(*d2*10)%11;
    if(*d2==10)
    {
        *d2=0;
    }
    return (*d1,*d2);

}
*/

/*11 - Faça uma função que receba como parâmetro de entrada o número de termos e o valor de x e calcule seu cosseno
utilizando a seguinte expressão: Teste a função a partir do main() cos(x,n)=1-x²/2!+x4/2!-x6/6!+.. */

int ex11()
{
    int n,x;
    float resp;
    printf("\n11-Digite o termo da serie que deseja visualizar:");
    scanf("%d",&n);
    printf("\nDigite o valor de x:");
    scanf("%d",&x);
    resp=calc_exp(n,x);
    printf("Resultado da expressão=%.2f\n", resp);
    return 0;
}

float calc_exp(int termo, int x)
{
    int den=2,par=2,fat,i,cont=0;
    float resp;
    resp=1-(pow(x,par)/den);
    for (i=1; i<termo; i++)
    {
        par=par+2;
        for(fat=1; par>1; par=par-1)
        {
            {
                fat=fat*i;
            }

            cont++;
            if (cont%2==0)
            {
                resp=resp+(pow(x,par)/fat);
            }
            else
            {
                resp=resp-(pow(x,par)/fat);
            }
        }
    }
    return (resp);
}








