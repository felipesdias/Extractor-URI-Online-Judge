# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Jogatina UFPR
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2543

import sys

for lines in sys.stdin:
    n, eu = map(int, lines.split(' '))

    qtd = 0

    while n:
        i, j = map(int, input().split(' '))

        if i == eu and j == 0:
            qtd += 1

        n -= 1

    print(qtd)
