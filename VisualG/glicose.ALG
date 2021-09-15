Algoritmo "glicose"


Var

   glicose : real
   classificar: caractere

Inicio

   escreva("Digite a medida da glicose: ")
   leia(glicose)
   
   se glicose <= 100.0 entao
      classificar <- "normal"
   senao
      se glicose <= 140.0 entao
         classificar <- "elevado"
      senao
         classificar <- "diabetes"
      fimse
   fimse
   
   escreval("Classificação: ", classificar)

Fimalgoritmo