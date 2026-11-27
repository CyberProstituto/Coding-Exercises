## Problema:
Dado números de 1 a n, exceto um. Ache o número que está faltando.
## Entrada:
A primeira entrada é o **int** n.
A segunda entrada contém n - 1 números. Cada número é distinto e está entre 1 e n (incluso).
## Saída:
O número que está faltando.
## Minha solução:
Começo declarando um vetor do tipo **int** de tamanho **n - 1**. Implemento um **for** loop, para atribuir valores aos índices dos meus vetores.

Uso o **sort()** para organizar os valores do vetor em ordem crescente.

Declaro uma variável do tipo **int** chamada verificador, para verificar o número faltante; verificador recebe o valor de 1, já que é o valor mínimo que o vetor também recebe.

Faço outro **for** loop, que começa no índice 0, já que sabemos que nesse índice seu valor é 1. Esse loop percorre o vetor e incrementa 1 ao verificador, para acompanhar os valores do vetor. E dentro do loop, coloquei uma condição:

- **Se** o valor que está neste índice for diferente do meu verificador. Eu saio do loop com **break**.

E por último imprimo o verificador.
## Dificuldade:
Fácil.