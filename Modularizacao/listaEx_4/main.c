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
        printf("1-Exerc�cio 1\n");
        printf("2-Exerc�cio 2\n");
        printf("3-Exerc�cio 3\n");
        printf("4-Exerc�cio 4\n");
        printf("5-Exerc�cio 5\n");
        printf("6-Exerc�cio 6\n");
        printf("7-Exerc�cio 7\n");
        printf("8-Exerc�cio 8\n");
        printf("9-Exerc�cio 9\n");
        printf("10-Exerc�cio 10\n");
        printf("11-Exerc�cio 11\n");
        printf("12-Exerc�cio 12\n");
        printf("15- Sair do programa\n");
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

/*1 ) Escrever uma fun��o que pe�a ao usu�rio um valor, caso o valor seja menor do que zero mostre a mensagem �Valor
dever� ser maior ou igual a zero� e pe�a novamente um novo n�mero. A fun��o s� poder� retornar um valor v�lido.*/

int ex1()
{
    int n,valido;
    printf("\n1-Digite um valor:");
    scanf("%d", &n);
    valido= maiorZero (n);
    printf("Valor v�lido=%d\n", valido);
    return 0;
}

int maiorZero (int num)
{
    if (num<0)
    {
        printf("Valor dever� ser maior ou igual a zero\n");
        printf("Digite um novo valor:");
        scanf("%d", &num);
    }
    return num;
}

/*2) Escrever uma fun��o para retornar o valor da hipotenusa de um tri�ngulo ret�ngulo dado os valores dos catetos.*/

int ex2()
{
    float resp,c1,c2;
    printf("\n2-Digite o valor do primeiro cacteto do tri�ngulo:");
    scanf("%f", &c1);
    printf("Digite o valor do segundo cacteto do tri�ngulo:");
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

/*3) Fa�a um programa principal que leia um conjunto indeterminado de valores (cada valor correspondendo a um cateto de
um triangulo ret�ngulo) e imprima o valor da hipotenusa. (Utilize as fun��es criadas nos exerc�cios 1 e 2) � (FLAG 0).*/

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

/*4) Construa um m�todo que verifique se um ano qualquer � bissexto ou n�o. Projete o par�metros de entrada (inteiro e
positivo) e o valor de retorno.
Teste-o a partir de main().
Para ser bissexto, o ano deve ser:
Divis�vel por 4. N�o pode ser divis�vel por 100. Pode ser que seja divis�vel por 400.*/

int ex4()
{
    int ano;
    printf("\n4-Digite o ano que deseja verificar se � bissexto:");
    scanf("%d",&ano);
    bissexto (ano);
    return 0;
}

int bissexto (int ano)
{

    if (((ano%4==0) && (ano%100!=0)) || (ano%400==0))
    {

        printf("%d � bissexto!\n", ano);

    }
    else
    {
        printf("%d n�o � bissexto!\n", ano);

    }
    return ano;
}

/*5) Fazer um algoritmo para :
- definir uma fun��o para determinar se um n�mero inteiro � divis�vel por outro;
- ler um n�mero indeterminado de pares de dados inteiros;
- o �ltimo par de dados ser� igual a (zero, zero) e n�o dever� ser considerado;
- usando a fun��o, mostrar que pares lidos t�m o primeiro valor divis�vel pelo segundo.*/


int ex5()
{
    int x,y,resp;

    printf("\n5-Digite o primeiro n�mero do par:");
    scanf("%d", &x);
    printf("Digite o segundo n�mero do par:");
    scanf("%d", &y);

    resp=divisao(x,y);
    printf("� divis�vel? %d\n", resp);

    while (x!=0 && y!=0)
    {
        printf("\nDigite o primeiro n�mero do par:");
        scanf("%d", &x);
        printf("Digite o segundo n�mero do par:");
        scanf("%d", &y);
        resp=divisao(x,y);
        printf("� divis�vel? %d\n", resp);
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

/*6) Fa�a uma fun��o que receba como par�metro de entrada o c�digo de um produto, e como par�metro de sa�da ir� disponibilizar
o pre�o da mercadoria de acordo com a tabela abaixo:
C�digo Pre�o
100 1,20
101 1,50
102 2,50
103 2,75 */

int ex6()
{
    int cod;
    float valor;
    printf("\n6-Mercadorias:\n");
    printf("C�digo Pre�o\n");
    printf(" 100   1,20\n 101   1,50\n 102   2,50\n 103   2,75\n");
    printf("Digite o c�digo do produto que deseja:");
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
        printf("Erro! C�digo inv�lido\n");
        system("pause");
    }
    return valor;
}

/*7) Fa�a um programa que utilize a fun��o do exerc�cio anterior. Este programa ir� pedir ao usu�rio v�rios c�digos
e quantidades dos produtos. Para cada par de valores dever� chamar a fun��o para obter o pre�o da mercadoria
e devolver ao usu�rio o valor total � ao final de todos os c�digos (flag c�digo =0)
o programa dever� mostrar o valor total da compra. Obs caso o c�digo n�o exista na tabela dever� mostrar uma
mensagem de erro e pedir novo c�digo*/

int ex7()
{
    int cod, quant;
    float valor, total,soma=0;
    printf("\n7-Se desejar sair do programa digite 0!\n");
    printf("De acordo com as mercadorias do exec�cio anterior, digite o c�digo do produto que deseja:");
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
            printf("\nDigite o c�digo do produto que deseja:");
            scanf("%d", &cod);
        }
        else
        {
            printf("Erro! Digite c�digo v�lido:");
            scanf("%d", &cod);
        }
    }
    printf("Valor total=R$%f\n",soma);
    return 0;
}

/*8) Construa um m�todo que calcule e retorne o k-�simo termo Fibonacci.
Par�metros de entrada: a posi��o do termo na sequ�ncia Fibonacci.
Valor de retorno: o termo Fibonacci.
Teste o m�todo a partir de main().*/

int ex8()
{
    int n,termo;
    printf("\n8-Digite a posi��o do termo que deseja visualizar:");
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

/*9) Construa um m�todo que calcule a potencia��o. Projete os par�metros de entrada (inteiros e positivos)
e o valor de retorno. Teste-o a partir de main(). Obs. Voc� n�o pode utilizar a fun��o pow*/

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

/*10) Elabore um procedimento para calcular o d�gito verificador de um CPF, dever� receber como par�metro de
entrada uma string com os 9 primeiros d�gitos do cpf e dever� devolver dois par�metros um com o primeiro digito
e outro com o segundo digito. Teste o m�todo a partir de main().*/

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
    printf("Digite os 9 primeiros d�gitos do CPF:");
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

/*11 - Fa�a uma fun��o que receba como par�metro de entrada o n�mero de termos e o valor de x e calcule seu cosseno
utilizando a seguinte express�o: Teste a fun��o a partir do main() cos(x,n)=1-x�/2!+x4/2!-x6/6!+.. */

int ex11()
{
    int n,x;
    float resp;
    printf("\n11-Digite o termo da serie que deseja visualizar:");
    scanf("%d",&n);
    printf("\nDigite o valor de x:");
    scanf("%d",&x);
    resp=calc_exp(n,x);
    printf("Resultado da express�o=%.2f\n", resp);
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








