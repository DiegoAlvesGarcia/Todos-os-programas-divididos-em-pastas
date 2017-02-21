#include <stdio.h>
#include <conio.h> 

typedef struct 
{
	char titulo[31];
	char autor[51];
	char editora[31];
	int data;
}LIVRO;

void LeLivros(LIVRO t[], int n)
{
int  i;
     for (i=0;i<n;i++)
     {
     printf ("Digite o nome do Livro: ");
     gets(t[i].titulo);
     printf("Digite o nome do autor: ");
     gets(t[i].autor);
     printf("Digite o nome da editora: ");
     gets(t[i].editora);
     printf("Digite o ano da publicacao: ");
     scanf("%d%*c", &t[i].data);
     }
}
 
void ExibeLivros(LIVRO t[], int n)
{
int  i; 
     for (i=0;i<n;i++)
     { 
     printf ("\nNome: %s", t[i].titulo);
     printf("\nautor: %s", t[i].autor);
     printf("\neditora: %S", t[i].editora);
     printf("\nano da publicacao: %d", t[i].data);
     }
     getch();
}

int main()
{
    LIVRO t[50];
    int n;
    printf("Quantos livros voce quer adicionar?");
    scanf("%d%*c", &n);
    int livro;
    LeLivros (t, n);
    ExibeLivros (t, n);
    getch();
}
