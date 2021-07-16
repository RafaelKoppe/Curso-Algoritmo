Algoritmo "pagamento"


Var

   nome : caractere
   valorPorHora: real
   horasTrabalhadas: inteiro
   pgmTotal : real


Inicio

      escreva("Nome: ")
      leia(nome)
      escreva("Valor por hora: ")
      leia(valorPorHora)
      escreva("Horas trabalhadas: ")
      leia(horasTrabalhadas)
      
      pgmTotal <- valorPorHora * horasTrabalhadas
      
      escreva("O pagamento para ", nome, " deve ser",pgmTotal:8:2)


Fimalgoritmo