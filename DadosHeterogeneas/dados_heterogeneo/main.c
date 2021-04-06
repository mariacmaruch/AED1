#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[30];
    int matricula;
    float nota1,nota2,nota3;
} aluno;

aluno *ler_aluno(aluno*,int);
void imprime_aluno(aluno);
void alterar_aluno(aluno*);
void excluir_aluno(aluno*, int,int*);

int main()
{
    setlocale(LC_ALL,"portuguese");
    aluno *turma;
    int op,i,encontrar,quantAlunos,confirma;
    quantAlunos=0;
    do
    {

        printf("O que deseja fazer?\n");
        printf("\t1 - Adicionar aluno\n");
        printf("\t2 - Alterar aluno\n");
        printf("\t3 - Excluir aluno\n");
        printf("\t4 - Imprimir turma\n");
        printf("\t5 - Sair do pograma\n");
        scanf("%i",&op);
        system("cls");
        switch (op)
        {
        case 1:
            turma=ler_aluno(turma,quantAlunos);
            quantAlunos++;
            system("pause");
            system("cls");
            break;
        case 2:
            printf("Digite o número de matrícula do aluno para alterar: ");
            scanf("%i",&encontrar);
            for (i=0; i<quantAlunos; i++)
            {
                if (turma[i].matricula==encontrar)
                    break;
            }
            if (turma[i].matricula==encontrar)
            {
                printf("Excluir altera dados do aluno %s?\n\t1 - Sim\n\t0 - Não\n",turma[i].nome);
                scanf("%i",&confirma);
                if (confirma)
                {
                    alterar_aluno(&turma[i]);
                }
            }
            else printf("Aluno não encontado\n");
            system("pause");
            system("cls");
            break;
        case 3:
            printf("Digite o número de matrícula do aluno para excluir: ");
            scanf("%i",&encontrar);
            for (i=0; i<quantAlunos; i++)
            {
                if (turma[i].matricula==encontrar)
                    break;
            }
            if (turma[i].matricula==encontrar)
            {
                printf("Excluir aluno %s?\n\t1 - Sim\n\t0 - Não\n",turma[i].nome);
                scanf("%i",&confirma);
                if (confirma)
                {
                    excluir_aluno(turma,i,&quantAlunos);
                }
            }
            else printf("Aluno não encontado\n");
            system("pause");
            system("cls");
            break;
        case 4:
            for (i=0; i<quantAlunos; i++)
            {
                imprime_aluno(turma[i]);
            }
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            break;
        }
    }
    while(op!=5);
    return 0;
}

aluno *ler_aluno(aluno *a,int quant)
{
    if (quant==0)
        a=malloc(sizeof(aluno)*1);
    else
        a=realloc(a,sizeof(aluno)*(quant+1));
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    gets(a[quant].nome);
    printf("Digite o número de matrícula:");
    scanf("%i",&a[quant].matricula);
    printf("Nota 1:");
    scanf("%f",&a[quant].nota1);
    printf("Nota 2:");
    scanf("%f",&a[quant].nota2);
    printf("Nota 3:");
    scanf("%f",&a[quant].nota3);
    printf("\n");
    system("cls");
    printf("Aluno Cadastrado\n");
    return a;
}

void imprime_aluno(aluno a)
{
    printf("Nome: %s\t",a.nome);
    printf("Matrícula: %i\n",a.matricula);
    printf("Nota1: %.1f  Nota2: %.1f  Nota3: %.1f\n\n",a.nota1,a.nota2,a.nota3);
}

void alterar_aluno(aluno *a)
{
    char altNome;
    printf("Oque deseja alterar?\n\ta-Nome\n\tb-Matricula\n\tc-Nota1\n\td-Nota2\n\te-Nota3\n\t");
    fflush(stdin);
    scanf("%c",&altNome);
    printf("Digite os novos dados:\n");
    switch (altNome)
    {
    case 'a':
        printf("Digite o nome do aluno: ");
        fflush(stdin);
        gets(a->nome);
        break;
    case 'b':
        printf("Matricula:");
        scanf("%i",&a->matricula);
        break;
    case 'c':
        printf("Nota 1:");
        scanf("%f",&a->nota1);
        break;
    case 'd':
        printf("Nota 2:");
        scanf("%f",&a->nota2);
        break;
    case 'e':
        printf("Nota 3:");
        scanf("%f",&a->nota3);
        break;
    }
    system("cls");
    printf("Alteração concluida\n");
}

void excluir_aluno(aluno *a, int posicao, int *quant)
{
    for (int i=posicao; i<*quant; i++)
    {
        a[i].matricula=a[i+1].matricula;
        a[*quant-1].matricula='\0';
        a[i].nota1=a[i+1].nota1;
        a[*quant-1].nota1='\0';
        a[i].nota2=a[i+1].nota2;
        a[*quant-1].nota2='\0';
        a[i].nota3=a[i+1].nota3;
        a[*quant-1].nota3='\0';
        strcpy(a[i].nome,a[i+1].nome);
        strcpy(a[*quant-1].nome,"\0");
    }
    *quant-=1;
    system("cls");
    printf("Aluno Excluido\n");
}
