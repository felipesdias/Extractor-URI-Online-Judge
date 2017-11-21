# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Base 32
# Nível: 1
# Categoria: MATEMÁTICA
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1869

import sys

def convert(n):
    alph = "0123456789ABCDEFGHIJKLMNOPQRSTUV"
    resp = ""

    if(n == 0):
        return "0"

    while n:
        resp += alph[n % 32]

        n //= 32

    return resp[::-1]

for lines in sys.stdin:
    n = int(lines)

    print(convert(n))
