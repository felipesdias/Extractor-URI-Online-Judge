# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Batalha de Pomekons
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2221

x = int(input())

while x:
    n = int(input())

    aa, da, la = map(int, input().split(' '))
    ab, db, lb = map(int, input().split(' '))

    if la % 2 == 0:
        aa += 2 * n
    
    if lb % 2 == 0:
        ab += 2 * n

    if aa + da > ab + db:
        print("Dabriel")
    elif aa + da < ab + db:
        print("Guarte")
    else:
        print("Empate")

    x -= 1
