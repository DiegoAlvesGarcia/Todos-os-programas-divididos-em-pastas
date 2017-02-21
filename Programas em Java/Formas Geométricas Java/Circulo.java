//Programa desenvolvido por Diego Alves Garcia
//N�mero: 1511362-8

//declara��o da classe Circulo.java
public class Circulo
{
   //atributo privado
	private double raio;
	
   double diam, circun, ar;
   //m�todo construtor
   public Circulo(double r)
   {
      setRaio(r);
   }
   //metodo alterar raio
   public void setRaio(double r)
	{
		if (r < 0)
         System.out.printf ("\nO raio nao pode ser negativo\n");
      else      
         raio = r;
	}
	
   //metodo informar raio
	public double getRaio()
	{
		return raio;
	}
  
   //m�todo para calcular o diametro
   public void diametro(double r)
   {
      if (r>0)
         diam = r*2;
   }
   
   //metodo para calcular a area
   public void area(double r)
   {      
      if (r>0) 
         ar = Math.PI*Math.pow(r,2);
   }
   
   //metodo para calcular a circunfer�ncia
   public void circunferencia(double r)
   {
      if (r>0)       
         circun = 2*Math.PI*r;
   }
	
   //m�todo para exibi��o
	public void ExibirDados()
	{
		System.out.printf("Raio           : " + getRaio());
      System.out.printf("\nDiametro       : " + diam);
      System.out.printf("\nArea           : " + ar);
      System.out.printf("\nCircunferencia : " + circun);
	}
}