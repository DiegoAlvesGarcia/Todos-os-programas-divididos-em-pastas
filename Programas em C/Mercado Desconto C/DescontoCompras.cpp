#include <stdio.h>
#include <conio.h>

//Programa que tem por finalidade somar os valores de uma compra e aplicar os descontos
//Programa desenvolvido por Diego Alves Garcia - Fatec SP - ADS 15113628

int main()
{
	float produto, total, desconto, bruto, liquido;
	int porcentagem;
	total = 0;
	desconto = 0;	
	printf("BEM VINDO AO PROGRAMA QUE FACILITA SUAS COMPRAS!"); //apresentação do programa
	printf("\n\n\nDigite todos os dados da compra do cliente"); 
	printf("\ndigite 0 (zero) para sair do programa"); //digitar zero o programa sai do laço
	
	printf("\n\nDigite o valor do produto comprado: R$");
	scanf("%f", &produto); //grava o valor na variável produto, para que produto seja diferente de zero
	total = total + produto; //o valor de produto sempre salva na variável total para criar ums soma

	
	while (produto != 0)
	{
		printf("\n\nDigite o valor do produto comprado: R$");
		scanf("%f", &produto);
		total = total + produto;
	}
		
	bruto = total; //coloca o valor das somas dos produtos na variável "bruto"
	
	if(total < 50)
	{
		desconto = total * 0.05; //se o valor das compras for menor que 50 reais ele aplica desconto de 5%
		porcentagem = 5;
	} 
		else if (total >= 50 && total < 100)
		{
			desconto = total * 0.10; //se o valor das compras for maior que 50 reais e menor que 100 reais ele aplica desconto de 10%
			porcentagem = 10;
		}
			else if (total >= 100 && total < 200)
			{
				desconto = total * 0.15; //se o valor das compras for maior que 100 reais e menor que 200 reais ele aplica desconto de 15%
				porcentagem = 15;
			}	
				else
				{
					desconto = total * 0.20; //se o valor das compras for maior que 200 reais ele aplica desconto de 20%
					porcentagem = 20;
				}
	liquido = total - desconto;
	printf("\n\nO valor total e: R$%.2f", bruto); //mostra o valor da compra sem desconto
	printf ("\nO valor com desconto e: R$%.2f e a porcentagem do desconto e: %d%%", desconto, porcentagem); //mostra o valor de desconto e quanto de desconto será dado
	printf ("\nO valor que deve ser pago: R$%.2f", liquido); //mostra o valor final do cliente a ser pago
	 
	getch();
}
