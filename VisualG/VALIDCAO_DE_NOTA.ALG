Algoritmo "validcao_de_nota"


Var

   primeiraNota, segundaNota, media : real

Inicio

   escreva("Digite a primeira nota: ")
   leia(primeiraNota)

   enquanto (primeiraNota < 0) ou (primeiraNota > 10) faca
      escreva("Valor invalido! Tente novamente: ")
      leia(primeiraNota)
   fimenquanto


   escreva("Digite a segunda nota: ")
   leia(segundaNota)

   enquanto (segundaNota < 0) ou (segundaNota > 10) faca
      escreva("Valor invalido! Tente novamente: ")
      leia(segundaNota)
   fimenquanto

   media <- (primeiraNota + segundaNota) / 2
   
   escreval("MEDIA = ", media)

Fimalgoritmo