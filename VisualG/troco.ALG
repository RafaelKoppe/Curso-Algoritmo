Algoritmo "troco"


Var

   produto, dinheiro, troco : real
   qtd : inteiro

Inicio

      escreva("Pre�o unit�rio do produto: ")
      leia(produto)
      escreva("Quantidade comprada: ")
      leia(qtd)
      escreva("Dinheiro recebido: ")
      leia(dinheiro)
      
      troco <- dinheiro - produto * qtd
      escreval("TROCO = ", troco:4:2)

Fimalgoritmo