#include <stdio.h>
#include <conio.h>

int main()
{
    int dia, mes, ano, diames, total, resto, final;
    
    printf("BEM VINDO AO PROGRAMA PARA SABER SUA PERSONALIDADE");
    printf("\n\nPor favor digite o dia (dd) em que voce nasceu: ");
    scanf("%d", &dia);
    printf("\n\nPor favor digite o mes (mm) em que voce nasceu: ");
    scanf("%d", &mes);
    printf("\n\nPor favor digite o ano (aaaa) em que voce nasceu: ");
    scanf("%d", &ano);
    
    printf("\ndia: %d", dia);
    printf("\nmes: %d", mes);
    printf("\nano: %d", ano);
    
    printf("\n\n%d * 100", dia);
    
    dia = dia*100;
    diames = dia+mes;
    
    printf(" = %d", dia);
    printf("\n\n%d + %d = %d", dia, mes, diames);
    
    total = diames + ano;
    
    printf("\n\n%d + %d = %d", diames, ano, total);

    resto = total % 100;
    total = total / 100;
    final = total + resto;
    
    printf("\n\n%d + %d = %d", total, resto, final);
	
	printf("\n\n%d / 5 = ", final);
	
	final = final % 5;
	
	printf("%d", final);
	
	printf("\n\nO numero de seu perfil e %d\n\nEntao seu perfil e ", final);
	
	if (final == 0)
		printf ("TIMIDO");
	if (final == 1)
		printf("SONHADOR");
	if (final == 2)
		printf ("PAQUERADOR");
	if (final == 3)
		printf ("ATRAENTE");
	if (final == 4)
		printf ("IRRESISTIVEL");
        
    getch();
    
}
