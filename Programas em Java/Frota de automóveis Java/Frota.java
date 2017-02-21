/*
Desenvolvido por Diego Alves Garcia
Número: 1511362-8
Programa principal onde se usa os dados dos progrmas Veiculo, Carro e Caminhao
*/

import java.util.Scanner;
public class Frota
{
   public static void main (String args[])
   {
      Scanner sInput = new Scanner (System.in);
      Scanner nInput = new Scanner (System.in);
      
      //variaveis
      int tam, i, anoFabr, anoModelo, numPortas, numEixos;
      double capacidade, valor;
      String tipo, modelo, placa;
      
      System.out.println("Digite o tamanho da frota: "); //tamanho da frota de carros
      tam = nInput.nextInt(); //armazena o valor digitado
      if (tam > 0) { //impede do usuario de criar uma frota negativa
      Veiculo frota[] = new Veiculo[tam];
      
      for(i = 0; i<tam; i++) //armazenamento de dados
      {
         System.out.println("Tipo do "+ (i+1) +".o veiculo \n(a - auto | c - caminhao): ");
         tipo = sInput.nextLine();

         System.out.println("Modelo: ");
         modelo = sInput.nextLine();
         System.out.println("Placa: ");
         placa = sInput.nextLine();
         System.out.println("Ano Fabricacao: ");
         anoFabr = nInput.nextInt();
         System.out.println("Valor: ");
         valor = nInput.nextDouble();
         
         if ( tipo.equalsIgnoreCase("a") ) //para modelos do tipo auto
         {
            System.out.println("Ano Modelo: ");
            anoModelo = nInput.nextInt();
            
            System.out.println("Portas: ");
            numPortas = nInput.nextInt();
            
            frota[i] = new Carro(modelo, placa, anoFabr, anoModelo, numPortas, valor); //chama o programa Carro
         }
         
         else if ( tipo.equalsIgnoreCase("c") ) //para modelos do tipo caminhao
              {
                 System.out.println("Capacidade (toneladas): ");
                 capacidade = nInput.nextDouble();
                 System.out.println("Numero de eixos: ");
                 numEixos = nInput.nextInt();
                 frota[1] = new Caminhao(modelo, placa, anoFabr, capacidade, numEixos, valor); //chama o programa Caminhao
              }
              
              else //veiculos que não são nem Carro e nem Caminhao
              {
                 frota[i] = new Veiculo(modelo, placa, anoFabr, valor); //chama o programa Veiculo
              }
      }
      
      for(i = 0; i<tam; i++) //mostrar os dados digitados
      {
         System.out.println("Veiculo n.o " + (i+1));
         if (frota[i] != null)
            frota[i].imprime();
         System.out.println();
      }
      } //fim do if que impede do usuario de criar uma frota negativa
      else {
         System.out.printf("Valor da frota nao pode ser negativo"); } //mensagem mostrada ao usuario se ele criar uma frota negativa
   }
}