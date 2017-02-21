//Desenvolvido por Diego Alves Garcia - número de matrícula: 1511362-8

import java.util.Scanner;
public class FahrenheitCelsus
{
   public static void main(String args[])
   {
      Scanner diego = new Scanner (System.in);
      double C;
      double F;
      
      System.out.print("Digite o valor em graus Fahrenheit: ");
      F = diego.nextDouble(); //Le o valor em Fahrenheit
      
      C = (F-32) * 5 / 9;
      
      System.out.printf ("O valor em graus Celsus e: %3.1f", C);
   }
}