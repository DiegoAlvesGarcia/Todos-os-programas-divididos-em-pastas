/*
Desenvolvido por Diego Alves Garcia
N�mero: 1511362-8
teste do programa Ve�culo
*/

public class TesteVeiculo
{
   public static void main(String args[])
   {
      Veiculo v;
      v = new Veiculo("Celta", "ABC1678", 2007, 34000); //valores correspondentes no programa ve�culo
      v.imprime(); //chama o m�todo de impress�o
      
      v.deprecia(10); //chama o m�todo de deprecia��o
      System.out.println("Veiculo depreciado");
      v.imprime(); //mostra o m�todo de impress�o ap�s o valor ser depreciado
   }
}