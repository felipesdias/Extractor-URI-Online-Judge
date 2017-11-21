# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: C Mais ou Menos?
# Nível: %d
# Categoria: PRINCIPIANTE
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2486

def main():
    dicionario = {
        "suco": 120,
        "morango": 85,
        "mamao": 85,
        "goiaba": 70,
        "manga": 56,
        "laranja": 50,
        "brocolis": 34
    }

    while True:
        n = int(input())

        if(n == 0):
            return

        val = 0

        while n:
            entrada = input().split(' ')

            val += int(entrada[0]) * dicionario[entrada[1]]

            n -= 1

        if val > 130:
            print("Menos", val - 130, "mg")
        elif val < 110:
            print("Mais", 110 - val, "mg")
        else:
            print(val, "mg")

main()
