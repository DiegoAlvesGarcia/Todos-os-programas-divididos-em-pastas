/*
Desenvolvido por Diego Alves Garcia
N�mero: 1511362-8
teste do programa Carro
*/

public class TesteCarro
{
   public static void main(String args [])
   {
      Carro c;
      
      c = new Carro("Fiesta", "ABC1234", 2006, 2007, 2, 21000); //valores correspondentes no programa Carro
      c.imprime(); //chama o m�todo de impress�o

      c.deprecia(10); //chama o m�todo de deprecia��o
      System.out.println("Carro depreciado");
      c.imprime(); //mostra o m�todo de impress�o ap�s o valor ser depreciado
   }
}