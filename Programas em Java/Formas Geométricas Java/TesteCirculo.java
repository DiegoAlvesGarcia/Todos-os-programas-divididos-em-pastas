//Programa desenvolvido por Diego Alves Garcia
//N�mero: 1511362-8


import java.util.Scanner;

public class TesteCirculo
{
   public static void main (String args[])
   {
      double raio;
      Scanner read = new Scanner(System.in);
      
      System.out.printf ("Digite o valor do raio: ");
      raio = read.nextDouble(); //inseri o valor do raio
      
      Circulo circ;
      circ = new Circulo(raio);
      
      circ.setRaio(raio); //fornece ao SetRaio o valor do Raio
      circ.diametro(raio); //fornece ao diametro o valor do Raio
      circ.area(raio); //fornece � area o valor do Raio
      circ.circunferencia(raio); //fornece � circunferencia o valor do Raio
      circ.ExibirDados(); //exibe os dados de Raio, Diametro, Area e Circunferencia
   }
}