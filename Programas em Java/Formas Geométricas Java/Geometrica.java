import java.util.Scanner;
public class Geometrica
{
   public static void main (String args[])
   {
      Scanner sRead = new Scanner (System.in);
      Scanner nRead = new Scanner (System.in);
      
      //variaveis
      int tam, i;
      double raio, base, altura;
      String tipo;
      
      System.out.printf("Quantas formas geometricas voce deseja: ");
      tam = nRead.nextInt();
      if (tam > 0) //impede de ser valor negativo
      { 
         FormaGeometrica geometrica[] = new FormaGeometrica[tam];
         
         for(i = 0; i<tam; i++)
         {
            System.out.printf("\nTipo da "+ (i+1) +".a forma geometrica \n(c - circulo | r - retangulo | t - triangulo): ");
            tipo = sRead.nextLine();
            
            if ( tipo.equalsIgnoreCase("c") )
            {
               System.out.printf("Voce escolheu CIRCULO");
               System.out.printf("\nDigite o raio: ");
               raio = nRead.nextDouble();
               
               geometrica[i] = new Circulo(raio);
            }
            
            else if ( tipo.equalsIgnoreCase ("r") )
            {
               System.out.printf("Voce escolheu RETANGULO");
               System.out.printf("\nDigite o valor da base: ");
               base = nRead.nextDouble();
               System.out.printf("Digite o valor da altura: ");
               altura = nRead.nextDouble();
               geometrica[i] = new Retangulo(base, altura);
            }
            
            else if (tipo.equalsIgnoreCase ("t") )
            {
               System.out.printf("Voce escolheu TRIANGULO");
               System.out.printf("\nDigite o valor da base: ");
               base = nRead.nextDouble();
               System.out.printf("Digite o valor da altura: ");
               altura = nRead.nextDouble();
               geometrica[i] = new Triangulo(base, altura);
            }
            
            else
               System.out.printf("Forma geometrica nao encontrada\n");
         }
         
   
         for(i = 0; i<tam; i++) //mostrar os dados digitados
         {
            System.out.println("---------------------RESULTADO-------------------------");
            System.out.println("\nForma Geometrica n.o " + (i+1));
            if (geometrica[i] != null)
            geometrica[i].imprime();
            System.out.println();
         }
      }
      else 
         System.out.printf("Valor nao pode ser negativo"); //mensagem mostrada ao usuario se ele criar uma frota negativa
   }
}      