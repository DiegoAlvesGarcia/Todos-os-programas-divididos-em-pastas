#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
	char nome[80];

	printf("Qual e o seu nome?");
	gets(nome);

	printf("O nome lido e %s que possui %d caracteres", nome, strlen(nome));

	getch();
}

