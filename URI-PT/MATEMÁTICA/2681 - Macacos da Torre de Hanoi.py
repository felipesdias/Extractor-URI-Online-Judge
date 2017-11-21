# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Macacos da Torre de Hanoi
# Nível: 5
# Categoria: MATEMÁTICA
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2681

def modPow(a, b, m):
    res = 1

    while(b > 0):
        if (b & 1 == 1):
            res = res * a % m
        a = a * a % m

        b >>= 1
    return res

n = int(input())
v = modPow(2, n, 86400) - 1

print("%02d:%02d:%02d" % (v / 3600, (v / 60) % 60, v % 60))
