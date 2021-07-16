Algoritmo "experiencia_para"


Var

   nCasos, x,i, c, r, s, totalCobaias : inteiro
   percentualC, percentualR, percentualS : real
   y : caractere
Inicio

   escreva("Quantos casos de teste serao digitados: ")
   leia(nCasos)

   c <- 0
   s <- 0
   r <- 0
   para i de 1 ate nCasos faca

          escreva("Quantidades de cobaia: ")
          leia(x)
          escreva("Tipo de cobaia: ")
          leia(y)
   
          escolha y
          
          caso "C"
               c <- c + x
          caso "S"
               s <- s + x
          caso "R"
               r <- r + x
          fimescolha

   fimpara
   
   totalCobaias <- c + r + s
   percentualC <- c / totalCobaias * 100
   percentualR <- r / totalCobaias * 100
   percentualS <- s / totalCobaias * 100
   
   escreval("RELATORIO FINAL: ")
   escreval("TOTAL: ", totalCobaias, " cobais" )
   escreval("Total de coelhos: ", c:4:2)
   escreval("Total de ratos: ", r:4:2)
   escreval("Total de sapos: ", s:4:2)
   escreval("Percentual de coelhos: ", percentualC:4:2)
   escreval("Percentual de ratos: ", percentualR:4:2)
   escreval("Percentual de sapos: ", percentualS:4:2)

Fimalgoritmo