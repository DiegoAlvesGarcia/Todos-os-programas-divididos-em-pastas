import java.util.Scanner;
class Voto
{
	public static void main(String args[])
	{
		int diego=0, francis=0, moises=0, keila=0, nulo=0, branco=0, voto=0, confirma=0, ffrancis=0, fdiego=0, fkeila=0, fmoises=0;
		Scanner read = new Scanner(System.in);
		System.out.printf ("Bem vindo ao programa de votos.\nDigite -1 para terminar o programa");
		
		while (voto !=-1)
		{
			System.out.printf ("\n\nO numero dos candidatos sao esses:");
			System.out.printf ("\n\n5 - Keila\n14 - Moises\n18 - Diego\n25 - Francis");
			System.out.printf ("\n\nDigite seu voto: ");
			voto = read.nextInt();
				
			switch (voto)
			{
				case 5: keila = keila + 1; System.out.printf ("\nSeu voto foi Keila\n\n"); break;
				case 14: moises = moises + 1; System.out.printf ("\nSeu voto foi Moises\n\n"); break;
				case 18: diego = diego + 1; System.out.printf ("\nSeu voto foi Diego\n\n"); break;
				case 25: francis = francis + 1; System.out.printf ("\nSeu voto foi Francis\n\n"); break;
				case 0: branco = branco + 1; System.out.printf ("\nSeu voto foi em branco\n\n"); break;
				case 1: nulo = nulo + 1; System.out.printf ("\nSeu voto foi nulo\n\n"); break;
			}
		}
      
      if (diego>keila)
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
		fkeila=fkeila+1;
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
		System.out.printf("\nDiego venceu com %d votos", diego);
	}
	if (fkeila==3)
	{
		System.out.printf("\nKeila venceu com %d votos", keila);
	}
	if (ffrancis==3)
	{
		System.out.printf("\nFrancis venceu com %d votos", francis);
	}
	if (fmoises==3)
	{
		System.out.printf("\nMoises venceu com %d votos", moises);
	}

	}
}