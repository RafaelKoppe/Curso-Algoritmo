Algoritmo "lanchonete"


Var
    cod, quantidadeComprada: inteiro
    conta:real

Inicio

    escreva("Código do produto comprado: ")
    leia(cod)
    
    escolha cod
    caso 1
        escreva("Quantidade comprada: ")
        leia(quantidadeComprada)
        conta <- 5.00 * quantidadeComprada
    caso 2
        escreva("Quantidade comprada: ")
        leia(quantidadeComprada)
        conta <- 3.50 * quantidadeComprada
    caso 3
        escreva("Quantidade comprada: ")
        leia(quantidadeComprada)
        conta <- 4.80 * quantidadeComprada
    caso 4
        escreva("Quantidade comprada: ")
        leia(quantidadeComprada)
        conta <- 8.90 * quantidadeComprada
    caso 5
        escreva("Quantidade comprada: ")
        leia(quantidadeComprada)
        conta <- 7.32 * quantidadeComprada
    fimescolha
    
    escreval("Valor a pagar: R$ ", conta:4:2)

Fimalgoritmo