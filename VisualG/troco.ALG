Algoritmo "troco"


Var

   produto, dinheiro, troco : real
   qtd : inteiro

Inicio

      escreva("Preço unitário do produto: ")
      leia(produto)
      escreva("Quantidade comprada: ")
      leia(qtd)
      escreva("Dinheiro recebido: ")
      leia(dinheiro)
      
      troco <- dinheiro - produto * qtd
      escreval("TROCO = ", troco:4:2)

Fimalgoritmo