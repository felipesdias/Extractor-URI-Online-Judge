# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Validador de Senhas
# Nível: 1
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2253

import sys

for lines in sys.stdin:
    valida = True
    minuscula = False
    maiuscula = False
    numero = False

    if len(lines) > 33 or len(lines) < 7:
        valida = False
    
    if valida:
        for it in lines:
            if it >= 'a' and it <= 'z':
                minuscula = True
            elif it >= 'A' and it <= 'Z':
                maiuscula = True
            elif it >= '0' and it <= '9':
                numero = True
            elif ord(it) != 10:
                valida = False
    
    if valida and maiuscula and minuscula and numero:
        print("Senha valida.")
    else:
        print("Senha invalida.")

