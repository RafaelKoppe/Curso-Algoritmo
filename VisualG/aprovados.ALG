Algoritmo "aprovados"


Var

   N, i: inteiro
   nome: vetor [0..10] de caractere
   vet1: vetor [0..10] de real
   vet2: vetor [0..10] de real
   vet3: vetor [0..10] de real

Inicio

   escreva("Quantos alunos serao digitados? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreval("Digite nome, primeira e segunda nota do", i + 1, "o aluno:")
      leia(nome[i])
      leia(vet1[i])
      leia(vet2[i])
   fimpara
   
   escreval("Alunos aprovados:")
   para i de 0 ate N-1 faca
      vet3[i] <- (vet1[i] + vet2[i]) / 2
      se vet3[i] >= 6.0 entao
         escreval(nome[i])
      fimse
   fimpara

Fimalgoritmo