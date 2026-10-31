## Problema:
Encontrar o maior fator primo do número `600851475143`.
## Entrada:
Nenhuma.
## Saída:
O maior fator primo.
## Minha solução:
Para começar, primeiro precisamos entender o que é um número primo.
Um número primo é um número maior que 1 que é divisível apenas por 1 e por ele mesmo.
Com essa definição, podemos começar pelo menor número primo que conhecemos: o `2`.

Entramos em um `while` que continua enquanto `n` for maior que 1, ou seja, enquanto a decomposição em fatores primos ainda não tiver terminado.

Para cada número primo encontrado, verificamos se `n` é divisível por ele. Enquanto o resto da divisão for igual a zero, dividimos `n` pelo primo atual. Isso é feito repetidamente porque um mesmo fator primo pode aparecer mais de uma vez na decomposição.

Depois que `n` não pode mais ser dividido pelo primo atual, precisamos encontrar o próximo número primo.

Para isso, utilizei um `bool` como condição de parada de outro `while`. Dentro dele, incremento o número atual e verifico se ele é primo.

Para descobrir se um número é primo, procuro por divisores começando em `2` e indo até a raiz quadrada do número. Caso nenhum divisor seja encontrado nesse intervalo, o número é primo e podemos utilizá-lo como o próximo possível fator de `n`.

Esse processo continua até que `n` chegue a `1`, indicando que sua decomposição em fatores primos terminou.

## Dificuldade:
Fácil.
