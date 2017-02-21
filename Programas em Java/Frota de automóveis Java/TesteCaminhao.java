/*
Desenvolvido por Diego Alves Garcia
Número: 1511362-8
teste do programa Caminhao
*/

public class TesteCaminhao
{
   public static void main(String args [])
   {
      Caminhao ca;
      
      ca = new Caminhao("BMW", "CBA4321", 2010, 2.335, 3, 214000); //valores correspondentes no programa Caminhao
      
      ca.imprime(); //chama o método de impressão
      ca.deprecia(10); //chama o método de depreciação
      
      System.out.println("Caminhao depreciado");
      ca.imprime(); //mostra o método de impressão após o valor ser depreciado
   }
}