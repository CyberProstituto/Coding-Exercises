## Problema:
Considere um algoritmo que recebe um valor de entrada que seja inteiro positivo, **n**.
- Se **n** for par, o valor é divido por dois.
- Se **n** for ímpar, o valor é multiplicado por três e adiciona mais um.
O algoritmo repete isso até **n** for um. Exemplo:
3→10→5→16→8→4→2→1
## Entrada:
Valor de **n**.
## Saída:
Imprimir uma linha contendo todos os valores de **n** durante o algoritmo.
## Minha solução:
Seguindo as regras do problema, declarei a variável **n** como **long long**, pois a regra do exercício estabelece que todo número ímpar será multiplicado por **3** e adicionado mais **1**, isso faz com que os valores possa ultrapassar os limites do tipo **int**.

Imprimi o valor de **n** antes de entrar no **while**, pois dentro do loop imprimira apenas os próximos valores de **n**. A condição do meu **while** diz para continuar, enquanto **n** for diferente de 1.

Dentro do loop, coloquei as seguintes condições 
- **Se n** for divisível por 2 (o que faz dele um número par) **n** recebe **n** por 2.
- **Senão,** **n** recebe, **n** vezes 3 + 1. E imprimo os valores de **n**, e fecho o **while**.

E por ultimo, imprimo **\n** apenas para ter uma quebra de linha no final, para ficar mais organizado.
## Dificuldade:
Fácil.
