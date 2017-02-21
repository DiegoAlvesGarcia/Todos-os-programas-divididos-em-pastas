/*
Desenvolvido por Diego Alves Garcia
Número: 1511362-8
teste do programa Veículo
*/

public class TesteVeiculo
{
   public static void main(String args[])
   {
      Veiculo v;
      v = new Veiculo("Celta", "ABC1678", 2007, 34000); //valores correspondentes no programa veículo
      v.imprime(); //chama o método de impressão
      
      v.deprecia(10); //chama o método de depreciação
      System.out.println("Veiculo depreciado");
      v.imprime(); //mostra o método de impressão após o valor ser depreciado
   }
}