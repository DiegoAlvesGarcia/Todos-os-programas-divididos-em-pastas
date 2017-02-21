//Programa desenvolvido por Diego Alves Garcia
//Número: 1511362-8

//declaração da classe Circulo.java
public class Circulo
{
   //atributo privado
	private double raio;
	
   double diam, circun, ar;
   //método construtor
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
  
   //método para calcular o diametro
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
   
   //metodo para calcular a circunferência
   public void circunferencia(double r)
   {
      if (r>0)       
         circun = 2*Math.PI*r;
   }
	
   //método para exibição
	public void ExibirDados()
	{
		System.out.printf("Raio           : " + getRaio());
      System.out.printf("\nDiametro       : " + diam);
      System.out.printf("\nArea           : " + ar);
      System.out.printf("\nCircunferencia : " + circun);
	}
}