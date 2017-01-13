/*
URI Online Judge | 1109 
Burlando a Maratona
By Leonardo Alt  Brasil
Timelimit: 1 
Pela primeira vez a Escola Livre de Matemática, Filosofia e Lingüística de Skyrim vai receber a Maratona de Expressões Regulares (regex) (RegExCon). A maratona acontece da seguinte forma: os participantes competem sempre contra 1 oponente. Um ganha um perde. No final, só o campeão restará. Em uma disputa os participantes recebem uma lista com várias expressões regulares e para cada uma os participantes devem calcular se várias palavras dadas são reconhecidas ou não por tal regex.
Como membro da Escola Livre você está participando, e quer ganhar. Para garantir sua vitória, você deve escrever um programa para resolver o problema e deixá-lo rodando na sua Máquina Calculadora de Coisas Legais em casa. Como um mago, especialista em Alteração e Ilusão, você pode facilmente controlar sua máquina com a mente, então você consegue usar o programa durante a maratona. É proibido utilizar magia na maratona, mas coincidentemente a Escola de Winterhold vai sediar um Congresso de Magos, então você não precisa se preocupar, use sua magia.
Uma expressão regular é utilizada para descrever uma linguagem (um conjunto de palavras). Considere que o alfabeto de todas linguagens neste problema é {a, b}.
Uma regex R é válida se:
1) R é “a” ou “b”;
2) R é “(P.S)” onde P e S são expressões regulares;
3) R é “(P|S)” onde P e S são expressões regulares;
4) R é “(P*)” onde P é uma expressão regular.
Expressões regulares podem ser aninhadas. Não há operação ternária com os operadores “.” e “|”, nem operação binária com o operator “*”. Palavras sempre comçam com “(“ e terminam com “)”. O conjunto L de palavras reconhecidas por R é formado seguindo estas regras:
1) Se R é “(a)”, L = {a};
2) Se R é “(b)”, L = {b};
3) Se R é “(P.S)”, L = todas palavras que podem ser obtidas a partir da concatenação das palavras p e s, onde p é reconhecida por P e s por S;
4) Se R é “(P|S)”, L = união dos conjuntos de palavras reconhecidas por P e S;
5) Se R é “(P*)”, R reconhece a concatenação de 0 ou mais palavras reconhecidas por P.
Entrada
A entrada é formada por vários casos de teste. A primira linha de um caso de teste contém uma regex (0 < tamanho da regex < 150). A próxima linha contém um inteiro P (1 ≤ P ≤ 100). Cada uma das próximas P linhas contém uma palavra (tamanho < 50) formada por 'a's e 'b's que representa a seguinte questão: “Esta palavra é reconhecida pela regex dada?”.
Saída
Para cada questão descrita anteriormente, responda “Y” (sem aspas) se a resposta é “sim” ou “N” (sem aspas) se a resposta é “não”. Imprima uma linha em branco após cada caso de teste, inclusive após o último.

Exemplo de Entrada
Exemplo de Saída
(a)
3
a
b
aa
(a.b)
3
a
ab
b
(a|b)
4
a
b
ab
ba
(a*)
3
a
aaaaaaaaaaa
aaaaabaaaaa
((a*).(b*))
3
bbbaaa
aaabbb
bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
Y
N
N

N
Y
N

Y
Y
N
N

Y
Y
N

N
Y
Y
 
*/