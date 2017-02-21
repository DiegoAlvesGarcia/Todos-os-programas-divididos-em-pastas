public class Aluno extends Pessoa
{
   private String matricula;
   private String codCurso;
   
   public Aluno(String nome, String cpf, String rg, String matricula, String codCurso)
   {
      super (nome, cpf, rg);
      setMatricula(matricula);
      setCodCurso(codCurso);
   }
   
   public void setMatricula(String matricula)
   {
      this.matricula = matricula;
   }
   
   public String getMatricula()
   {
      return matricula;
   }
   
   public void setCodCurso(String codCurso)
   {
      this.codCurso = codCurso;
   }
   
   public String getCodCurso()
   {
      return codCurso;
   }
   
   public void imprime()
   {  
      System.out.printf("\nNOME: %s\nCPF: %s\nRG: %s\nMATRICULA: %s\nCOD CURSO: %s", nome, cpf, rg, matricula, codCurso);
   }
} 