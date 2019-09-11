#Escolhi fazer um código simplificado utilizando apenas uma função diferente das funções básicas de loops e print que foi para transcrever informação de uma array de string, a função do pacote <string.h> da linguagem c.

Minha ideia inicial era simplesmente criar um vetor com o nome dos livros e compará-los e ordená-los de forma simples, mas a arquitetura de strings(frases) do c não é tão simples, os arrays(vetores) de strings  são salvos na memória como números inteiros, na primeira parte do algoritimos após salvar os nomes nos arrays, fiz um looping que converte as letras maiúsculas em minúscula para facilitar a comparação, logo depois é salvo os inteiros correspondentes de cada letra, agora minúsculas, em um vetor de dados a serem comparados.
Essa segunda parte é a parte principal do código é comparado é armazenada a um vetor de posição que dirá posteriormente a ordem de ordenação dos livros.
O esqueleto do código é rodado 3 vezes primeiramente para ordenar os títulos seguido pelos autores e as edições, como critério de desempate dos autores e edições toma como base a ordenação de títulos.
Como foi pedido um código simples, não quis complicá-lo com critérios de desempate específicos com letras não alfabéticas e mesmos títulos, ele não ordena de maneira completamente precisas títulos que tenham as mesmas iniciais, apesar de ainda ordená-los em relação aos de nomes diferentes.

O código foi construído e rodado no terminal do linux e as bibliotecas utilizadas de c são: stdio.h, stdlib.h, string.h. O comando de compilamento utilizado foi “gcc” e como são apenas respostas simples a saída no próprio terminal com o comando “./a.out” é suficiente.
gcc --version
gcc (Debian 6.3.0-18+deb9u1) 6.3.0 20170516
