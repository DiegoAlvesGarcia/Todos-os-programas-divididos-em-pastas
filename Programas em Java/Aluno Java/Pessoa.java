testepublic class Pessoa
{
   protected String nome, cpf;
   protected String rg;
   
   public Pessoa(String nome, String cpf, String rg)
   {
      setNome(nome);
      setCpf(cpf);
      setRg(rg);
   }
   
   public void setNome(String nome)
   {
      this.nome = nome;
   }
   
   public String getNome()
   {
      return this.nome;
   }
   
   public void setCpf(String cpf)
   {
      this.cpf = cpf;
   }
   
    public String getCpf()
   {
      return cpf;
   }
   
   public void setRg(String rg)
   {
      this.rg = rg;
   }
   
   public String getRg()
   {
      return rg;
   }
   
   public void imprime()
   {
      System.out.printf("\nNome: %s\n\nCPG: %s\nRG: %s\n", nome, cpf,rg);
   }
}