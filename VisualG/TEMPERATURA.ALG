Algoritmo "temperatura"


Var

   C, F: real
   doistemp: caractere

Inicio

    escreva("Voce vai digitar a temperatura em qual escala (C/F)?")
    leia(doistemp)
    
    se doistemp = "F" entao
       escreva("Digite a temperatura em Fahrenheit: ")
       leia(f)
       C <- ((f - 32) * 5) / 9
       escreval("Graul Celsius: ", C:6:2)
       senao
          escreva("Digite a temperatura em Celsius: ")
          leia(C)
          F <- C * 9 / 5 + 32
          escreval("Graul Fahrenheit: ", F:6:2)
       fimse
       
Fimalgoritmo