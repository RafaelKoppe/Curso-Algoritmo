Algoritmo "par_impar_para"

Var

   n, i, y : inteiro

Inicio

   escreva("Quantos numeros voce vai digitar? ")
   leia(n)

   para i de 1 ate n faca

      escreva("Digite um numero: ")
      leia(y)

      se y = 0 entao
         escreval("NULO")
      senao
         se y % 2 = 0 entao
            se y < 0 entao
               escreval("PAR NEGATIVO")
            senao
               escreval("PAR POSITIVO")

            fimse
         senao
            se y < 0 entao
               escreval("IMPAR NEGATIVO")
            senao
               escreval("IMPAR POSITIVO")
            fimse
         fimse
      fimse
   fimpara

Fimalgoritmo