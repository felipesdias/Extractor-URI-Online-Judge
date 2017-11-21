# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Jogo do Operador
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2493

import sys

for lines in sys.stdin:
    n = int(lines)

    exp = []
    val = []

    for i in range(0, n):
        e, v = input().split('=')
        exp.append(e)
        val.append(int(v))

    resp = []

    for i in range(0, n):
        nome, et, op = input().split(' ')

        e = int(et)

        if op != 'I':
            if(eval(exp[e-1].replace(' ', op)) != val[e-1]):
                resp.append(nome)
        else:
            if(eval(exp[e-1].replace(' ', '+')) == val[e-1] or eval(exp[e-1].replace(' ', '-')) == val[e-1] or eval(exp[e-1].replace(' ', '*')) == val[e-1]):
                resp.append(nome)

    resp.sort()
    qtd = len(resp)

    if qtd == 0:
        print("You Shall All Pass!")
    elif qtd == n:
        print("None Shall Pass!")
    else:
        for i, it in enumerate(resp):
            print(it, end='\n' if i == qtd - 1 else ' ')
