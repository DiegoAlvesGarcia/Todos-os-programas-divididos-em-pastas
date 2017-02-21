#include <stdio.h>
#include <conio.h>

//Programa que tem por finalidade fazer uma pesquisa e saber quem gostou ou não de um produto
//Programa desenvolvido por Diego Alves Garcia - Fatec SP - ADS 15113628

int main()
{
	int cont;
	char voto;
	float totals, totaln, porcents, porcentn;
	
	cont=1; //contador do laço
	
	printf ("BEM VINDO ! VOCE IRA NOS AJUDAR A MELHORAR NOSSO PRODUTO"); //apresentação

	while (cont <= 50) //fica no laço até completar 50
	{
		printf ("\n\n\n\n Por favor, nos responda. Voce gostou de nosso produto?");
		printf ("\n\nS - Sim \nN - Nao \n\nResposta: ");
		scanf (" %c", &voto); //resposta do usuário é  gravada na variável "voto"
		
		switch (voto)
		{
		case 's': totals = totals + 1; break; //resposta sim (CapsLok desligado)
		case 'S': totals = totals + 1; break; //resposta SIM (CapsLok ligado)
		case 'n': totaln = totaln + 1; break; //resposta não (CapsLok desligado)
		case 'N': totaln = totaln + 1; break; //resposta NÃO (CapsLok ligado)		
		}
		cont++; //acrescenta + 1 na variável contadora
	}
	
	porcents = (totals * 100) / 50; //porcentagem de Sim
	porcentn = (totaln * 100) / 50; //porcentagem de Não
	
	printf ("\n\nA porcentagem de Sim: %.2f%%", porcents); //Mostra porcentagem de Sim
	printf ("\nA porcentagem de Nao: %.2f%%", porcentn); //Mostra porcentagem de Não
	
	getch(); //aguarda o usuário apertar uma tecla
}

