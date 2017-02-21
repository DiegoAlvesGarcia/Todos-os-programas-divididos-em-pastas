/*
Desenvolvido por Diego Alves Garcia
Número: 1511362-8
Programa da Subclasse Caminhao
*/

public class Caminhao extends Veiculo //usa os métodos da Superclasse Veículo
{
   //atributos
   private double capacidade;
   private int numEixos;
   
   //construtor   
   public Caminhao(String modelo, String placa, int anoFabr, double capacidade, int numEixos, double valor)
   {
      super (modelo, placa, anoFabr, valor);//usa o construtor da Superclasse Veículo
      //construtor que só será usado nesse programa
      setEixos(numEixos);
      setCapacidade(capacidade);
   }
   
   //armazenamento do número de eixos com no mínimo 2 eixos
   public void setEixos(int numEixos)
   {
      this.numEixos = 2;
      if (numEixos > 2)
         this.numEixos = numEixos;
   }
   
   //retorna o número de eixos
   public int getEixos()
   {
      return numEixos;
   }
   
   //armazena a capacidade em toneladas que o caminhao pode trasportar
   public void setCapacidade(double capacidade)
   {
      this.capacidade = capacidade;
   }
   
   //retorna o valor da capacidade
   public double getCapacidade()
   {
      return capacidade;
   }
   
   //imprime todos os dados dos caminhao
   public void imprime()
   {
      System.out.printf("\nVeiculo: %s\nPlaca: %7s", modelo, placa);
      System.out.printf("\nFabr: %4d\nCapacidade (toneladas): %2.3f", anoFabr, capacidade);
      System.out.printf("\n%02d Eixos\nR$ %.2f\n", numEixos, valor);
   }
}