#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int  regiao, regiaoescolha, estado, estadoescolha;
	char i, escolha;
	
	do
	{	
		system("cls");
		printf("\n Bem vindo ao programa: Missao 2 - Estudo de caso resolucao de problemas");
		printf("\n\n Esse programa tem por objetivo informar quantas Microrregioes ha \n no Brasil e em suas areas");
	
		printf("\n\n Para isso, por favor, declare se voce gostaria \n de verificar as MRs: no Brasil, por regioes ou por estados");
		printf("\n\n 1 - Brasil\n 2 - Regioes\n 3 - Estados");
		printf("\n\n Digite: ");
		scanf(" %d", &escolha);		
		
		system("cls");
		
		
		if (escolha == 1)
		{
			printf("\n Sua escolha foi: BRASIL");
			printf("\n\n Populacao: 200,4 milhoes de pessoas\n Area: 8.516.000 km^2");
			printf("\n Microrregioes: 555\n Microrregioes potenciais: 447");
			printf("\n\n Para continuar tecle ENTER");
			getch();
		}
		if (escolha == 2)
		{
			do
			{
				system("cls");
				printf("\n Sua escolha foi: REGIOES");
				printf("\n\n Escolha qual regiao voce gostaria de conferir");
				printf("\n\n 1 - Sul\n 2 - Sudeste\n 3 - Centro-Oeste\n 4 - Nordeste\n 5 - Norte");
				printf("\n Digite: ");
				scanf("%d", &regiao);
				
				system("cls");
				
				switch (regiao)
				{
					case 1:
						printf("\n Sua escolha foi: SUL");
						printf("\n\n Os estados que fazem parte dessa regiao sao:\n - Rio Grande do Sul\n - Santa Catarina\n - Parana");
						printf("\n\n Microrregioes dessa regiao: 70");
						printf("\n\n Para continuar tecle ENTER");			
					break;
					
					case 2:
						printf("\n Sua escolha foi: SUDESTE");
						printf("\n\n Os estados que fazem parte dessa regiao sao:\n - Sao Paulo\n - Rio de Janeiro\n - Espirito Santo\n - Minas Gerais");
						printf("\n\n Microrregioes dessa regiao: 295");
						printf("\n\n Para continuar tecle ENTER");				
					break;
					
					case 3:
						printf("\n Sua escolha foi: CENTRO-OESTE");
						printf("\n\n Os estados que fazem parte dessa regiao sao:\n - Mato Grosso do Sul\n - Gioas\n - Distrito Federal\n - Mato Grosso");						
						printf("\n\n Microrregioes dessa regiao: 39");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 4:
						printf("\n Sua escolha foi: NORDESTE");
						printf("\n\n Os estados que fazem parte dessa regiao sao:\n - Bahia\n - Sergipe\n - Alagoas\n - Pernambuco\n - Paraiba\n - Rio Grande do Norte\n - Ceara\n - Piaui\n - Maranhao");						
						printf("\n\n Microrregioes dessa regiao: 113");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 5:
						printf("\n Sua escolha foi: NORTE");
						printf("\n\n Os estados que fazem parte dessa regiao sao:\n - Rondonia\n - Tocantins\n - Para\n - Amapa\n - Roraima\n - Amazonas\n - Acre");						
						printf("\n\n Microrregioes dessa regiao: 28");
						printf("\n\n Para continuar tecle ENTER");
					break;
				}
				if (regiao >=6)
				{
					printf("\n Regiao nao encontrada. Digite apenas de 1 a 5");
					printf("\n Para continuar tecle ENTER");
				}
				if (regiao <= 0)
				{
					printf("\n Regiao nao encontrada. Digite apenas de 1 a 5");	
					printf("\n Para continuar tecle ENTER");			
				}
				getch();
				
				system("cls");
				
				printf("\n Gostaria de ver outra regiao?\n\n s - Sim\n n - Nao");
				printf("\n Digite: ");
				scanf(" %c", &regiaoescolha);
				while (regiaoescolha != 's' && regiaoescolha != 'n')
				{
					system("cls");
					printf("\n Opcao invalida");
					printf("\n Gostaria de ver outra regiao?\n\n s - Sim\n n - Nao");
					printf("\n Digite: ");
					scanf(" %c", &regiaoescolha);
				}
			}while (regiaoescolha =='s');
		}
		
		if (escolha == 3)
		{
			do
			{
				system("cls");
				printf("\n Sua escolha foi: ESTADOS");
				printf("\n\n Escolha qual estado voce gostaria de conferir");
				printf("\n\n SUL\n 1 - Rio Grande do Sul\n 2 - Santa Catarina\n 3 - Parana");
				printf("\n SUDESTE\n 4 - São Paulo\n 5 - Rio de Janeiro\n 6 - Espirito Santo\n 7 - Minas Gerais");
				printf("\n \n CENTRO-OESTE\n 8 - Mato Grosso do Sul\n 9 - Goias\n 10 - Distrito Federal\n 11 - Mato Grosso");
				printf("\n NORDESTE\n 12 - Bahia\n 13 - Sergipe\n 14 - Alagoas\n 15 - Pernambuco\n 16 - Paraiba\n 17 - Rio Grande do Norte\n 18 - Ceara\n 19 - Piaui\n 20 - Maranhao");
				printf("\n NORTE\n 21 - Rondonia\n 22 - Tocantins\n 23 - Para\n 24 - Amapa\n 25 - Roraima\n 26 - Amazona\n 27 - Acre");
				printf("\n Digite: ");
				scanf("%d", &estado);
				
				system("cls");
				
				switch (estado)
				{
					case 1:
						printf("\n Sua escolha foi: RIO GRANDE DO SUL");
						printf("\n Populacao: 11,29 milhoes");
						printf("\n Area: 281.748 km^2");
						printf("\n Microrregioes: 27");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 2:
						printf("\n Sua escolha foi: SANTA CATARINA");
						printf("\n Populacao: 6,727 milhoes");
						printf("\n Area: 95.246 km^2");
						printf("\n Microrregioes: 16");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 3:
						printf("\n Sua escolha foi: PARANA");
						printf("\n Populacao: 11,08 milhoes");
						printf("\n Area: 199.315 km^2");
						printf("\n Microrregioes: 27");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 4:
						printf("\n Sua escolha foi: SAO PAULO");
						printf("\n Populacao: 44,04 milhoes");
						printf("\n Area: 248.209 km^2");
						printf("\n Microrregioes: 157");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 5:
						printf("\n Sua escolha foi: RIO DE JANEIRO");
						printf("\n Populacao: 16,46 milhoes");
						printf("\n Area: 43.696 km^2");
						printf("\n Microrregioes: 74");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 6:
						printf("\n Sua escolha foi: ESPIRITO SANTO");
						printf("\n Populacao: 3,885 milhoes");
						printf("\n Area: 46.097 km^2");
						printf("\n Microrregioes: 27");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 7:
						printf("\n Sua escolha foi: MINAS GERAIS");
						printf("\n Populacao: 20,87 milhoes");
						printf("\n Area: 586.528 km^2");
						printf("\n Microrregioes: 37");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 8:
						printf("\n Sua escolha foi: MATO GROSSO DO SUL");
						printf("\n Populacao: 2,62 milhoes");
						printf("\n Area: 357.125 km^2");
						printf("\n Microrregioes: 6");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 9:
						printf("\n Sua escolha foi: GOIAS");
						printf("\n Populacao: 6,523 milhoes");
						printf("\n Area: 340.086 km^2");
						printf("\n Microrregioes: 16");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 10:
						printf("\n Sua escolha foi: DISTRITO FEDERAL");
						printf("\n Populacao: 2,481 milhoes");
						printf("\n Area: 5.802 km^2");
						printf("\n Microrregioes: 11");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 11:
						printf("\n Sua escolha foi: MATO GROSSO");
						printf("\n Populacao: 3,306 milhoes");
						printf("\n Area: 903.357 km^2");
						printf("\n Microrregioes: 6");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 12:
						printf("\n Sua escolha foi: BAHIA");
						printf("\n Populacao: 15,2 milhoes");
						printf("\n Area: 567.295 km^2");
						printf("\n Microrregioes: 29");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 13:
						printf("\n Sua escolha foi: SERGIPE");
						printf("\n Populacao: 2,22 milhoes");
						printf("\n Area: 21.910 km^2");
						printf("\n Microrregioes: 5");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 14:
						printf("\n Sua escolha foi: ALAGOAS");
						printf("\n Populacao: 3,322 milhoes");
						printf("\n Area: 27.768 km^2");
						printf("\n Microrregioes: 6");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 15:
						printf("\n Sua escolha foi: PERNAMBUCO");
						printf("\n Populacao: 9,278 milhoes");
						printf("\n Area: 98.312 km^2");
						printf("\n Microrregioes: 22");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 16:
						printf("\n Sua escolha foi: PARAIBA");
						printf("\n Populacao: 3,944 milhoes");
						printf("\n Area: 56.585 km^2");
						printf("\n Microrregioes: 7");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 17:
						printf("\n Sua escolha foi: RIO GRANDE DO NORTE");
						printf("\n Populacao: 3,409 milhoes");
						printf("\n Area: 52.797 km^2");
						printf("\n Microrregioes: 8");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 18:
						printf("\n Sua escolha foi: CEARA");
						printf("\n Populacao: 8,843 milhoes");
						printf("\n Area: 148.826 km^2");
						printf("\n Microrregioes: 20");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 19:
						printf("\n Sua escolha foi: PIAUI");
						printf("\n Populacao: 3,195 milhoes");
						printf("\n Area: 251.529 km^2");
						printf("\n Microrregioes: 5");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 20:
						printf("\n Sua escolha foi: MARANHAO");
						printf("\n Populacao: 6,851 milhoes");
						printf("\n Area: 331.983 km^2");
						printf("\n Microrregioes: 11");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 21:
						printf("\n Sua escolha foi: RONDONIA");
						printf("\n Populacao: 1,749 milhoes");
						printf("\n Area: 237.576 km^2");
						printf("\n Microrregioes: 4");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 22:
						printf("\n Sua escolha foi: TOCANTINS");
						printf("\n Populacao: 1,497 milhoes");
						printf("\n Area: 277.621 km^2");
						printf("\n Microrregioes: 2");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 23:
						printf("\n Sua escolha foi: PARA");
						printf("\n Populacao: 8,074 milhoes");
						printf("\n Area: 1.248.000 km^2");
						printf("\n Microrregioes: 15");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 24:
						printf("\n Sua escolha foi: AMAPA");
						printf("\n Populacao: 751 mil");
						printf("\n Area: 142.815 km^2");
						printf("\n Microrregioes: 3");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 25:
						printf("\n Sua escolha foi: RORAIMA");
						printf("\n Populacao: 496,936 mil");
						printf("\n Area: 224.299 km^2");
						printf("\n Microrregioes: 1");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 26:
						printf("\n Sua escolha foi: AMAZONAS");
						printf("\n Populacao: 4,002 milhoes");
						printf("\n Area: 1.571.000 km^2");
						printf("\n Microrregioes: 11");
						printf("\n\n Para continuar tecle ENTER");
					break;
					
					case 27:
						printf("\n Sua escolha foi: ACRE");
						printf("\n Populacao: 790,101 mil");
						printf("\n Area: 162.123 km^2");
						printf("\n Microrregioes: 2");
						printf("\n\n Para continuar tecle ENTER");
					break;
				}
				if (estado >=28)
				{
					printf("\n Estado nao encontrado. Digite apenas de 1 a 27");
					printf("\n\n Para continuar tecle ENTER");
				}
				if (estado <= 0)
				{
					printf("\n Estado nao encontrado. Digite apenas de 1 a 27");	
					printf("\n\n Para continuar tecle ENTER");			
				}
				getch();
				
				
				system("cls");
				
				printf("\n Gostaria de ver outro estado?\n\n s - Sim\n n - Nao");
				printf("\n Digite: ");
				scanf(" %c", &estadoescolha);
				while (estadoescolha != 's' && estadoescolha != 'n')
				{
					system("cls");
					printf("\n Opcao invalida");
					printf("\n Gostaria de ver outro estado?\n\n s - Sim\n n - Nao");
					printf("\n Digite: ");
					scanf(" %c", &estadoescolha);
				}
			}while (estadoescolha =='s');
		}
		if (escolha < 1 || escolha >3)
		{
			printf("\n Opcao invalida. Digite apenas de 1 a 3");
			printf("\n\n Para continuar tecle ENTER");
			getch();
		}
		system("cls");
		printf("\n Gostaria de voltar ao inicio do programa?\n s - Sim\n n - Nao\n Digite: ");
		scanf(" %c", &i);
		while (i != 's' && i != 'n')
		{
			system("cls");
			printf("\n Opcao invalida");
			printf("\n Gostaria de voltar ao inicio do programa?\n s - Sim\n n - Nao");
			printf("\n Digite: ");
			scanf(" %c", &i);
		}
	} while(i=='s');
}
