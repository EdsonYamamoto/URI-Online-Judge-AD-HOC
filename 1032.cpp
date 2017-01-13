/*
URI Online Judge | 1032 
O Primo de Josephus
Autor desconhecido
Timelimit: 1 
O problema de Josephus é notoriamente conhecido. Para aqueles que não estão familiarizados com o problema, entre n pessoas numeradas 1,2 ... n, de pé em círculo cada um deve ser executado e só a vida do último que sobrar será preservada. Josephus foi esperto o suficiente para escolher a posição da última pessoa restante, poupando a sua vida.
Apesar de muitos bons programadores poderem se salvar desde que Josephus espalhou essa informação (o lugar onde ficar para não ser executado), o primo de Josephus introduziu uma nova variante do jogo maligno. Este personagem insano é conhecido por suas idéias bárbaras e desejos para limpar o mundo de programadores. Tivemos de infiltrar alguns agentes os da ACM, a fim de conhecer o processo neste novo jogo mortal.
A fim de salvar-se de esta prática mal, você deve desenvolver uma ferramenta capaz de prever qual será a pessoa salva.
O processo destrutivo
As pessoas são eliminados em uma ordem muito peculiar: m é uma variável dinâmica, que cada vez tem um valor diferente correspondente a sucessão dos números primos de (2,3,5,7 ...). Então, para matar a pessoa i, o primo de Josephus conta até o próximo m primo.
Entrada
Consiste em linhas separadas, contendo n [1 .. 3501], e termina com um 0.
Saída
A saída consistirá em linhas separadas relativos à posição da pessoa que a vida será salva.

Exemplo de Entrada
Exemplo de Saída
6
0
4
*/