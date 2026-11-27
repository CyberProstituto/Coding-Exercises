## Problema:
Dado uma **string** composta pelos caracteres A, C, G e T. Encontre na substring a maior repetição de apenas um tipo de caractere.
## Entrada:
Uma **string** de n caracteres.
## Saída:
Imprima um inteiro: o comprimento da maior repetição.
## Minha solução:
Declarei uma **string** s. 
**int** contador = 1 pois é o valor mínimo que pode ser recebido.
**int** maior = 1, pelo mesmo motivo do **int** contador.

Após a entrada da **string** s, fiz um **for** loop, que começa no índice 1 e que vai até o tamanho da string - 1. Dentro do loop, implementei as seguintes condições:
- **Se** o caractere na casa **i** (índice) for igual ao caractere da casa anterior (i-1), adiciona 1 ao contador.
- **Senão** contador é resetado para 1.

Após ás condições, implementei mais uma condição:
- **Se** o valor que está dentro da variável contador for maior que da variável **maior**, variável **maior** recebe valor da variável contador.

Fecho o **for** loop, e imprimo a variavel maior, pois ela que representa corretando o número com maior repetição.
## Dificuldade:
Fácil.