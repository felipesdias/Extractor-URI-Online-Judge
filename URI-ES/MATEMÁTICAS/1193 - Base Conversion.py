# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Base Conversion
# Nível: %d
# Categoria: MATEMÁTICAS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1193

n = int(input())
case = 1
while n:
    numero, tipo = input().split(' ')
    
    print("Case {0}:".format(case))

    if(tipo == 'dec'):
        val = int(numero)
    elif(tipo == 'bin'):
        val = int(numero, 2)
    else:
        val = int(numero, 16)
    
    if(tipo != 'dec'):
        print("{0:d} dec".format(val))
    if(tipo != 'hex'):
        print("{0:x} hex".format(val))
    if(tipo != 'bin'):
        print("{0:b} bin".format(val))
    
    print('')

    n -= 1
    case += 1
