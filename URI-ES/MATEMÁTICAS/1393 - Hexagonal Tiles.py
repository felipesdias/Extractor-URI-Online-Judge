# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Hexagonal Tiles
# Nível: %d
# Categoria: MATEMÁTICAS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1393

fib = [0, 1]

for i in range(2, 50):
    fib.append(fib[i-1] + fib[i-2])

n = int(input())

while n:
    print(fib[n + 1])

    n = int(input())
