Algoritmo "troco_verificado"

Var

   preco, dinheiro, troco, valorProduto: real
   quantidadeComprada : inteiro

Inicio

   escreva("Pre�o unit�rio do produto: ")
   leia(preco)
   escreva("Quantidade comprada: ")
   leia(quantidadeComprada)
   escreva("Dinheiro recebido: ")
   leia(dinheiro)
   
   valorProduto <- preco * quantidadeComprada
   
   se (valorProduto <= dinheiro) entao
         troco <- dinheiro - valorProduto
         escreval("Troco = ",troco:4:2)
   senao
         troco <- ValorProduto - dinheiro
         escreval("Dinheiro insuficiente. Faltam ", troco, " REAIS")
   fimse

Fimalgoritmo