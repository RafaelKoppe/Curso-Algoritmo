Algoritmo "aumento"


Var
   salario, aumento, porcentagem, novoSalario: real

Inicio

   escreva("Digite o salario da pessoa: ")
   leia(salario)
   
   se (salario <= 1000.00) entao
              porcentagem <- 20
              aumento <- salario * (porcentagem/100)
              novoSalario <- aumento + salario
      
   senao
        se (salario > 1000.00) e ( salario <= 3000.00) entao
                    porcentagem <- 15
                    aumento <- salario * (porcentagem/100)
                    novoSalario <- aumento + salario
         
         senao
              se (salario > 3000.00) e (salario <= 8000.00) entao
                          porcentagem <- 10
                          aumento <- salario * (porcentagem/100)
                          novoSalario <- aumento + salario
              senao salario > 8000.00
                    porcentagem <- 5
                    aumento <- salario * (porcentagem/100)
                    novoSalario <- aumento + salario
              fimse
         fimse
   fimse
   
   escreval("Novo salario = R$ ", novoSalario:4:2)
   escreval("Aumento = ", aumento:4:2)
   escreva("Porcentagem = ", porcentagem, "%")

Fimalgoritmo