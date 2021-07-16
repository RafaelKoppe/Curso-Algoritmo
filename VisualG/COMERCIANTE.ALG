Algoritmo "comerciante"


Var

   N, i, cont1, cont2, cont3: inteiro
   lucro, percentualLucro, totalVenda, totalCompra, totalLucro : real
   vetNome : vetor [0..99] de caractere
   vetCompra : vetor [0..99] de real
   vetVenda : vetor [0..99] de real
Inicio

   escreva("Serao digitados dados de quantos produtos? ")
   leia(N)
   
   para i de 0 ate N-1 faca
      escreval("Produto ", i+1 ,":")
      escreva("Nome: ")
      leia(vetNome[i])
      escreva("Preco de compra: ")
      leia(vetCompra[i])
      escreva("Preco de venda: ")
      leia(vetVenda[i])
   fimpara
   
   cont1 <- 0
   cont2 <- 0
   cont3 <- 0
   para i de 0 ate N-1 faca
      lucro <- vetVenda[i] - vetCompra[i]
      percentualLucro <- lucro * 100 / vetCompra[i]
      
      se percentualLucro < 10 entao
         cont1 <- cont1 + 1
      senao
        se percentualLucro <= 20 entao
           cont2 <- cont2 + 1
        senao
           cont3 <- cont3 + 1
        fimse
      fimse
   fimpara
   
   totalCompra <- 0
   totalVenda <- 0

   para i de 0 ate N-1 faca
        totalCompra <- totalCompra + vetCompra[i]
        totalVenda <- totalVenda + vetVenda[i]
   fimpara
   
   totalLucro <- totalVenda - totalCompra
   
   escreval("RELATORIO: ")
   escreval("Lucro abaixo de 10%: ", cont1)
   escreval("Lucro entre 10% e 20%: ", cont2)
   escreval("Lucro acima de 20%: ", cont3)
   escreval("Valor total de compra: ", totalCompra:4:2)
   escreval("Valor total de venda: ", totalVenda:4:2)
   escreva("Lucro total: ", totalLucro:4:2)

Fimalgoritmo