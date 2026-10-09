## Problema:
Encontrar a soma dos números pares da sequência de Fibonacci que não ultrapassem 4 milhões.

## Entrada:
Nenhuma.

## Saída:
O resultado da soma.

## Minha solução:
Começo com os valores 0 e 1 para gerar a sequência de Fibonacci.

A cada repetição, somo os dois valores anteriores para encontrar o próximo número da sequência. Depois, atualizo esses valores para que o número encontrado seja usado na geração do próximo termo.

Para cada número gerado, verifico se ele é par através do resto da divisão por 2. Se o resto for igual a zero, adiciono esse número à soma.

## Dificuldade:
Fácil.
