# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Problem with the Calculator
# Nível: %d
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2694

def main():
    n = int(input())

    while n:
        palavra = input()

        print(int(palavra[2:4]) + int(palavra[5:8]) + int(palavra[11:13]))

        n -= 1        

main()
