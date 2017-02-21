import java.util.Scanner;
public class AreaDoQuadrado
{
   
   public static void area(float x)
   {
      float y;
      y = x*x;
      System.out.printf("o valor do terreno e um quadrado e tem %9.2f metros de area", y); 
   }
   
   public static void area(float x, float y)
   {
      float a;
      a= x*y;
      System.out.printf("o valor do terreno e um retangulo e tem %9.2f metros de area", a); 
   }

   public static void main (String args[])
   {
      float x,y;
      Scanner read = new Scanner(System.in);
      
      System.out.printf("Digite o valor em metros da frente do terreno: ");
      x = read.nextFloat();
      System.out.printf("Digite o valor em metros do lado do terreno: ");
      y = read.nextFloat();
      
      if (x==y)
      {
      area(x);
      }
      
      else
      {
      area(x,y);
      }     
   }
}
      