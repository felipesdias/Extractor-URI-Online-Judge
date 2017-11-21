# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Ocean Deep! Make it Shall...
# Nível: %d
# Categoria: MATEMÁTICAS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1398

import sys

val = ""

for line in sys.stdin:
    if(line.find('#') != -1):
        val += line.split('#')[0]
    
        n = int(val, 2)

        val = ""

        if n % 131071:
            print("NO")
        else:
            print("YES")
    else:
        val += line[:-1]
