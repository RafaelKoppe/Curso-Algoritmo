Algoritmo "dentro_fora_para"


Var

   x, i, y, cont1, cont2 : inteiro

Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(x)
   
   cont1 <- 0
   cont2 <- 0
   para i de 1 ate x faca
      escreva("Digite um numero: ")
      leia(y)
   
      se (y >= 10) e (y <=20) entao
         cont1 <- cont1 + 1
      senao
         cont2 <- cont2 + 1
      fimse
   fimpara
   
   escreval(cont1, " DENTRO")
   escreva(cont2, " FORA")

Fimalgoritmo