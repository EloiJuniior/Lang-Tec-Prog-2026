print("BOLETIM DE LANÇAMENTO DE NOTAS")

nome = input ("Nome do(a) Aluno(a):")
curso = input ("Curso: ")
semestre = input ("Semestre: ")
disciplina = input ("Disciplina: ")
nota1 = float (input("Nota 1: "))
nota2 = float (input("Nota 2: "))

media = (nota1 + nota2) /2

if media >= 100:
    print ("LANCAMENTO INCORRETO")

if media >= 60 and media <=100:
    print ("APROVADO")

elif media <=20:
    print ("APROVADO")

if media >19 and media < 60:
    print("RECUPERAÇÃO")
    
print ("\nNome: ", nome, "\nCurso: ", curso, "\nSemestre: ", semestre, "\nDisciplina: ", disciplina, "\nMédia: ", media)    

