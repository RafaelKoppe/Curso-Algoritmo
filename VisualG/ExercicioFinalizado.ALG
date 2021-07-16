Algoritmo "teste"

Var

   produto1: caractere
   produto2: caractere
   preco1: real
   preco2: real
   idade:  inteiro
   codigo: inteiro
   genero: caractere
   
Inicio

      idade <- 30
      produto1 <- "Computador"
      produto2 <- "TV"
      preco1 <- 2100.5
      preco2 <- 1830.0
      codigo <- 5291
      genero <- "F"
      
      escreval("Produtos:")
      escreval("O produto ", produto1, " custa R$ ", preco1:7:2)
      escreval("O produto ", produto2, " custa R$ ", preco2:6:2)
      escreval()
      escreval("O codigo = ", codigo)
      escreval()
      escreval("Dados da pessoa: genero ", genero, " e idade ", idade)
Fimalgoritmo