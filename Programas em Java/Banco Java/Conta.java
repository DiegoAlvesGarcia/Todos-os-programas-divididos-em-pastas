//Programa desenvolvido por Diego Alves Garcia
//N�mero: 1511362-8

//declara��o de classe Conta.java
public class Conta
{
   //atributos
   private int NumConta;
   public String NomeConta;
   private double SaldoConta;
   
   //m�todo construtor
   public Conta(int NumConta, String NomeConta,double SaldoConta)
   {  
      String nome = "Diego";
      String nome1 = "Bruna";      
      if ((NumConta==12345 && NomeConta.equals(nome)) || (NumConta==54321 && NomeConta.equals(nome1)))
      {       
         this.NumConta = NumConta;
         this.NomeConta = NomeConta;
         this.SaldoConta = SaldoConta;
      }
      else
      {
         System.out.printf("Conta nao encontrada\n");
      }
   }
   //metodo alterar Nome da Conta
   public void setNomeConta(String NomeConta)
   {
      this.NomeConta = NomeConta;
   }
   
   //m�todo para mostrar o nome da conta
   public String getNomeConta()
   {
      return this.NomeConta;
   }
   
   //m�todo de dep�sito
   public void deposito(double valor)
   {
      if (valor>0)
      {
         SaldoConta = SaldoConta + valor;
      }
         else
         {
            System.out.printf("Deposito nao pode ser negativo\n");
         }
   }
   
   //m�todo de saque
   public void saque(double retirada)
   {
      if (SaldoConta>=retirada)
      {
         if (retirada>0)
         {
            SaldoConta = SaldoConta - retirada;
         }
            else
            {
               System.out.printf("Retirada nao pode ser negativa\n");
            }
      }
         else
         {
            System.out.printf("Voce nao possui saldo para saque\n");
         }
   }
   
   //m�todo para exibi��o
   public void ExibirDados ()
   {
      System.out.printf("Nome do cliente: " + getNomeConta());
      System.out.printf("\nNumero da conta: " + NumConta);
      System.out.printf("\nSaldo: " + SaldoConta);   
   }
}