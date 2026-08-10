print("BOLETIM DE LANÇAMENTO DE NOTAS")

nome = str (input ("nome do(a) aluno(a):"))

curso = input ("curso: ")

disciplina = input ("disciplina: ")

nota = float (input ("Nota: "))

if nota > 59 and nota < 101:
    print ("Esta Aprovado!!")

elif nota < 20:
    print ("Esta Reprovado!!")

else:
    print ("Recuperação!!")
