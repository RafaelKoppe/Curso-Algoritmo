Algoritmo "mais_velho"

Var

   N, i,idadeMaior: inteiro
   nomeVelho: caractere
   idades: vetor [0..10] de inteiro
   nomes: vetor  [0..10] de caractere

Inicio

   escreva("Quantas pessoas voce vai digitar? ")
   leia(N)
   
   para i de 0 ate N-1 faca
        escreval("Dados da", i+1 ,"a pessoa:")
        escreva("Nome: ")
        leia(nomes[i])
        escreva("Idade: ")
        leia(idades[i])
   fimpara
   
   idadeMaior <- idades[0]
   para i de 1 ate N-1 faca
      se idades[i] > idadeMaior entao
         idadeMaior <- idades[i]
         nomeVelho <- nomes[i]
      fimse
   fimpara
   
   escreva("PESSOA MAIS VELHA: ", nomeVelho)

Fimalgoritmo