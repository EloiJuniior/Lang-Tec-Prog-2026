programa {
  funcao inicio() {
  escreva ("Boletim de Lançamento de notas")

  cadeia nome 
  cadeia curso
  cadeia disciplina
  inteiro nota

  escreva ("\nNome do(a) aluno(a): ")
  leia (nome)

  escreva ("\nCurso: ")
  leia (curso)

  escreva ("\nDisciplina: ")
  leia (disciplina)

  escreva ("\nNota: ")
  leia (nota)

  se (nota >= 60 e nota <= 100)
  {
    escreva ("\n Está APROVADO!")
  }

  se (nota <=19)
  {
    escreva ("\n Está REPROVADO!")
  }
  se (nota <=59)
  {
    escreva("\n Voce Esta de Recuperação")
  }



    
  }
}
