#include <stdio.h>
#include <conio.h>

//Programa que tem por finalidade fazer uma pesquisa e saber quem gostou ou n�o de um produto
//Programa desenvolvido por Diego Alves Garcia - Fatec SP - ADS 15113628

int main()
{
	int cont;
	char voto;
	float totals, totaln, porcents, porcentn;
	
	cont=1; //contador do la�o
	
	printf ("BEM VINDO ! VOCE IRA NOS AJUDAR A MELHORAR NOSSO PRODUTO"); //apresenta��o

	while (cont <= 50) //fica no la�o at� completar 50
	{
		printf ("\n\n\n\n Por favor, nos responda. Voce gostou de nosso produto?");
		printf ("\n\nS - Sim \nN - Nao \n\nResposta: ");
		scanf (" %c", &voto); //resposta do usu�rio �  gravada na vari�vel "voto"
		
		switch (voto)
		{
		case 's': totals = totals + 1; break; //resposta sim (CapsLok desligado)
		case 'S': totals = totals + 1; break; //resposta SIM (CapsLok ligado)
		case 'n': totaln = totaln + 1; break; //resposta n�o (CapsLok desligado)
		case 'N': totaln = totaln + 1; break; //resposta N�O (CapsLok ligado)		
		}
		cont++; //acrescenta + 1 na vari�vel contadora
	}
	
	porcents = (totals * 100) / 50; //porcentagem de Sim
	porcentn = (totaln * 100) / 50; //porcentagem de N�o
	
	printf ("\n\nA porcentagem de Sim: %.2f%%", porcents); //Mostra porcentagem de Sim
	printf ("\nA porcentagem de Nao: %.2f%%", porcentn); //Mostra porcentagem de N�o
	
	getch(); //aguarda o usu�rio apertar uma tecla
}

