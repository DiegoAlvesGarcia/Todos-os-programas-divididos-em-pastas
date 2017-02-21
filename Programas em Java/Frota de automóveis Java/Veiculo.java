/*
HERANCA E POLIMORFISMO
POO
Prof Grace
*/

public class Veiculo    {


   private String modelo, placa;
   private int noFabr;
   private double valor;
   
   public Veiculo(String pModelo, String pPlaca, int pAunoFabr, double pValor)      {
   
      
   
   
   }
   
   public String getModelo()  {
   
      return this.modelo;
   }
   
   public String getPlaca()   {
   
      return this.placa;
   }
   
   public void setAnoFabr( int anoFabr)   {
      this.anoFabr = anoFabr;
   
   }
   
   public int getAnoFabr()    {
   
      return anoFabr;
   }

   public void setValor(double valor)  {
   
      if (valor>=0) this.valor = valor;
      else this.valor = 0;
   }
   
   public double getValor()   {
      return valor;
   }
   
   public void imprime()   {
   
      System.out.println("\nVeiculo: %s\nPlaca: %7f\nAno: %4d\nValor: %5f", modelo, placa, anoFabr, valor);
   }

}