# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: The Uncle Phill Bonati's ...
# Nível: %d
# Categoria: MATEMÁTICAS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2149

import sys

val = [0, 1, 1, 1, 2, 2, 4, 8, 12, 96, 108, 10368, 10476, 108615168, 108625644, 11798392572168192, 11798392680793836]

for lines in sys.stdin:
    print(val[int(lines) - 1])
