Algoritmo "dados_pessoas"

Var

   N, i, contadorM, contadorH : inteiro
   menorAltura, maiorAltura, soma, media : real
   genero: vetor [0..99] de caractere
   altura: vetor [0..99] de real

Inicio

   escreva("Quantas pessoas serao digitadas? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreva("Altura da ", i+1, "a pessoa: ")
      leia(altura[i])
      escreva("Genero da ", i+1, "a pessoa: ")
      leia(genero[i])
   fimpara
   
   menorAltura <- altura[0]
   maiorAltura <- altura[0]
   para i de 1 ate N-1 faca
         se altura[i] < menorAltura entao
            menorAltura <- altura[i]
         fimse
         se altura[i] > maiorAltura entao
            maiorAltura <- altura[i]
         fimse
   fimpara
   
   escreval("Menor altura = ", menorAltura:4:2)
   escreval("Maior altura = ", maiorAltura:4:2)
   
   contadoM <- 0
   soma <- 0
   para i de 0 ate N-1 faca
      se genero[i] = "F" entao
         soma <- soma + altura[i]
         contadoM <- contadoM + 1
      fimse
   fimpara
   
   media <- soma / contadorM
   escreval("Media das alturas das mulheres = ", media:4:2)
   
   contadorH <- 0
   para i de 0 ate N-1 faca
      se genero[i] = "M" entao
         contadorH <- contadorH + 1
      fimse
   fimpara
   
   escreva("Numero de homens = ", contadorH)

Fimalgoritmo