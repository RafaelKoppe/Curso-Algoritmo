Algoritmo "abaixo_da_media"


Var

    i, N: inteiro
    media, cont: real
    vet: vetor [0..99] de real
Inicio

    escreva("Quantos elementos vai ter o vetor? ")
    leia(N)
    
    para i de 0 ate N-1 faca
       escreva("Digite um numero: ")
       leia(vet[i])
    fimpara
    
    cont <- 0
    para i de 0 ate N-1 faca
       cont <- cont + vet[i]
    fimpara
    
    media <- cont / N
    escreval
    escreval("MEDIA DO VETOR = ", media:6:3)
    escreval("ELEMENTOS ABAIXO DA MEDIA: ")
    para i de 0 ate N-1 faca
       se vet[i] < media entao
          escreval(vet[i]:2:1)
       fimse
    fimpara
    
Fimalgoritmo