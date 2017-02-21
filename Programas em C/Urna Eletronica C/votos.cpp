#include <stdio.h>
#include <conio.h>

int main ()
{
	int diego, francis, moises, keila, voto, confirma, ffrancis, fdiego, fkeila, fmoises;
	
	printf("Bem vindo ao programa de Votos\nDigite 0 (zero) para terminar");
	diego=0;
	francis=0;
	moises=0;
	keila=0;
	voto=1;
	
	while (voto !=0)
	{
		while (confirma !=0)
		{
			printf("Digite o numero de seu candidato");
			printf("\nOs numeros e canditados sao esses:");
			printf("\n\n5 - Keila\n14 - Moises\n18 - Diego\n25 - Francis");
			printf("\n\nDigite seu voto: ");
			scanf("%d", &voto);
			printf("Por favor, confirme seu voto: ");
			scanf("%d", &confirma);
			if (voto==confirma)
			{
				switch (voto)
				{
					case 5: keila = keila + 1; printf("\nSeu voto foi Keila\n\n"); break;
					case 14: moises = moises + 1; printf("\nSeu voto foi Moises\n\n"); break;
					case 18: diego = diego + 1; printf("\nSeu voto foi Diego\n\n"); break;
					case 25: francis = francis + 1; printf("\nSeu voto foi Francis\n\n"); break;
					default : printf("\nO digito nao corresponde a nenhum candidato. Tente novamente.\n\n");
				}
			}
			else
			{
				printf("\nOs digitos nao sao iguais, tente novamente.\n\n");
			}			
		}
	}
	
	fdiego=0;
	fkeila=0;
	fmoises=0;
	ffrancis=0;
	
	if (diego > keila)
	{
		fdiego=fdiego+1;
	}
		else
		{
			fkeila=fkeila+1;
		}
		
	if (diego > moises)
	{
		fdiego=fdiego+1;
	}
		else
		{
			fmoises=fmoises+1;
		}
	
	if (diego > francis)
	{
		fdiego=fdiego+1;	
	}
		else
		{
			ffrancis=ffrancis+1;
		}
		
	if (keila > moises)
	{
		fkeila=fkeila=1;
	}
		else
		{
			fmoises=fmoises+1;
		}
		
	if (keila > francis)
	{
		fkeila=fkeila+1;
	}
		else
		{
			ffrancis=ffrancis+1;
		}
		
	if (moises > francis)
	{
		fmoises=fmoises+1;
	}
		else
		{
			ffrancis=ffrancis+1;
		}
	
	if (fdiego==3)
	{
		printf("\nDiego esta em primeiro com %d votos", diego);
	}
	if (fkeila==3)
	{
		printf("\nKeila esta em primeira com %d votos", keila);
	}
	if (ffrancis==3)
	{
		printf("\nFrancis esta em primeira com %d votos", francis);
	}
	if (fmoises==3)
	{
		printf("\nMoises esta em primeiro com %d votos", moises);
	}
	
	if (fdiego==2)
	{
		printf("\nDiego esta em segundo com %d votos", diego);
	}
	if (fkeila==2)
	{
		printf("\nKeila esta em segunda com %d votos", keila);
	}
	if (ffrancis==2)
	{
		printf("\nFrancis esta em segunda com %d votos", francis);
	}
	if (fmoises==2)
	{
		printf("\nMoises esta em segundo com %d votos", moises);
	}
	
	if (fdiego==1)
	{
		printf("\nDiego esta em terceiro com %d votos", diego);
	}
	if (fkeila==1)
	{
		printf("\nKeila esta em terceira com %d votos", keila);
	}
	if (ffrancis==1)
	{
		printf("\nFrancis esta em terceira com %d votos", francis);
	}
	if (fmoises==1)
	{
		printf("\nMoises esta em terceiro com %d votos", moises);
	}
	
	if (fdiego==0)
	{
		printf("\nDiego esta em quarto com %d votos", diego);
	}
	if (fkeila==0)
	{
		printf("\nKeila esta em quarta com %d votos", keila);
	}
	if (ffrancis==0)
	{
		printf("\nFrancis esta em quarta com %d votos", francis);
	}
	if (fmoises==0)
	{
		printf("\nMoises esta em quarto com %d votos", moises);
	}
	
	getch();	
}
