/*
Desenvolvido por Diego Alves Garcia
Número: 1511362-8
teste do programa Carro
*/

public class TesteCarro
{
   public static void main(String args [])
   {
      Carro c;
      
      c = new Carro("Fiesta", "ABC1234", 2006, 2007, 2, 21000); //valores correspondentes no programa Carro
      c.imprime(); //chama o método de impressão

      c.deprecia(10); //chama o método de depreciação
      System.out.println("Carro depreciado");
      c.imprime(); //mostra o método de impressão após o valor ser depreciado
   }
}