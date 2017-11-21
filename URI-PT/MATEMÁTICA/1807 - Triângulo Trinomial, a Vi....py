# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Triângulo Trinomial, a Vi...
# Nível: 3
# Categoria: MATEMÁTICA
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1807

def modPow(a, b, m):
    res = 1

    while(b > 0):
        if (b & 1 == 1):
            res = res * a % m
        a = a * a % m

        b >>= 1
    
    return res

n = int(input())
v = modPow(3, n, (1<<31) - 1)

print(v)
