Algoritmo "media_pares"

Var

   N, i,soma, contPares: inteiro
   vet: vetor [0..99] de inteiro
   media: real

Inicio

   escreva("Quantos elementos vai ter o vetor? ")
   leia(N)

   soma <- 0
   contPares <- 0
   para i de 0 ate N-1 faca
        escreva("Digite um numero: ")
        leia(vet[i])
        se vet[i] % 2 = 0 entao
           soma <- soma + vet[i]
           contPares <- contPares + 1
        fimse
   fimpara
   
    se contPares = 0 entao
        escreval("NENHUM NUMERO PAR")
    senao
        media <- soma / contPares
        escreval("MEDIA DOS PARES = ", media:2:1)
    fimse

Fimalgoritmo