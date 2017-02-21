//Programa desenvolvido por Diego Alves Garcia
//Número: 1511362-8

import java.util.Scanner;
public class TesteConta
{
   public static void main (String args[])
   {
      int numeroconta;

      String usuario;
      Scanner read = new Scanner(System.in);
      
      System.out.printf("Digite o numero da conta: ");
      numeroconta = read.nextInt(); //inseri o valor fornecido do número da conta
      System.out.printf("Digite o nome da conta: ");
      usuario = read.next(); //inseri o nome fornecido da conta
      
      Conta cc1;
      cc1 = new Conta(numeroconta, usuario, 1000); //enviando os dados fornecidos da conta 1
      cc1.ExibirDados();
      
      System.out.printf("\n\nDigite o numero da conta: ");
      numeroconta = read.nextInt(); //inseri o valor fornecido do número da conta
      System.out.printf("Digite o nome da conta: ");
      usuario = read.next(); //inseri o nome fornecido da conta
      
      Conta cc2;
      cc2 = new Conta(numeroconta, usuario, 500); //enviando os dados fornecidos da conta 2
      cc2.ExibirDados();
      
      Scanner entrada = new Scanner(System.in);
      System.out.printf("\n\nValor para deposito na Conta 1: ");
      double vlr = entrada.nextDouble();
      cc1.deposito(vlr);
      cc1.ExibirDados(); //exibe os dados da conta 1
      
      System.out.printf("\n\nValor de saque em Conta 2: ");
      cc2.saque(entrada.nextDouble());
      cc2.ExibirDados(); //exibe os dados da conta 2
   }
}      