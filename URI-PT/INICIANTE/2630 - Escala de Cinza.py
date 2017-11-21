# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Escala de Cinza
# Nível: 5
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2630

n = int(input())
i = 0

while n:
    op = input()

    i += 1

    r, g, b = map(int, input().split(' '))

    print("Caso #", i, ': ', sep='', end='')

    if op == 'min':
        print(min(r, g, b))
    elif op == 'max':
        print(max(r, g, b))
    elif op == 'mean':
        print((r + g + b) // 3)
    else:
        print(int(0.3 * r + 0.59 * g + 0.11 * b))

    n -= 1
