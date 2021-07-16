Algoritmo "operadora"


Var

   minutos: inteiro
   valorPago: real

Inicio

   escreva("Digite a quantidades de minutos: ")
   leia(minutos)
   
   se minutos < 100 entao
     valorPago <- 50.00
     senao
     valorPago <- 50.00 + 2 * (minutos - 100)
   fimse
   
   escreval("Valor a pagar: R$ ", valorPago:4:2)

Fimalgoritmo