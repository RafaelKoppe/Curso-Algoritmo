Algoritmo "dardo"


Var

   d1, d2 ,d3 : real

Inicio

   escreval("Digite as tres distancias: ")
   leia(d1)
   leia(d2)
   leia(d3)
   
   se (d1 > d2) e (d1 > d3) entao
      escreval("MAIOR DISTANCIA = ", d1:4:2)
   senao
      se d2 > d3 entao
         escreval("MAIOR DISTANCIA = ", d2:4:2)
      senao
         escreval("MAIOR DISTANCIA = ", d3:4:2)
      fimse
   fimse
Fimalgoritmo