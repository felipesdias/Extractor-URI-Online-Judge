# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Picos e Vales
# Nível: 1
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2162

def main():
    n = int(input())

    valores = list(map(int, input().split(' ')))

    if valores[0] == valores[1]:
        print(0)
        return

    op = 1 if valores[1] > valores[0] else -1

    for i in range(1, n):
        if(op == 1 and valores[i] <= valores[i - 1]):
            print(0)
            return
        elif op == -1 and valores[i] >= valores[i-1]:
            print(0)
            return

        op *= -1

    print(1)
        

main()
