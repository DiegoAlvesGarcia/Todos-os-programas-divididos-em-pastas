/*
Desenvolvido por Diego Alves Garcia
N�mero: 1511362-8
teste do programa Caminhao
*/

public class TesteCaminhao
{
   public static void main(String args [])
   {
      Caminhao ca;
      
      ca = new Caminhao("BMW", "CBA4321", 2010, 2.335, 3, 214000); //valores correspondentes no programa Caminhao
      
      ca.imprime(); //chama o m�todo de impress�o
      ca.deprecia(10); //chama o m�todo de deprecia��o
      
      System.out.println("Caminhao depreciado");
      ca.imprime(); //mostra o m�todo de impress�o ap�s o valor ser depreciado
   }
}