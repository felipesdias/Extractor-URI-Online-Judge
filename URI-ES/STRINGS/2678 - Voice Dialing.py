# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Voice Dialing
# Nível: %d
# Categoria: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2678

import sys

d = {}
d['a'] = 2
d['b'] = 2
d['c'] = 2
d['d'] = 3
d['e'] = 3
d['f'] = 3
d['g'] = 4
d['h'] = 4
d['i'] = 4
d['j'] = 5
d['k'] = 5
d['l'] = 5
d['m'] = 6
d['n'] = 6
d['o'] = 6
d['p'] = 7
d['q'] = 7
d['r'] = 7
d['s'] = 7
d['t'] = 8
d['u'] = 8
d['v'] = 8
d['w'] = 9
d['x'] = 9
d['y'] = 9
d['z'] = 9

for line in sys.stdin:
    for x in line.lower():
        if (x >= '0' and x <= '9') or x == '*' or x == '#':
            print(x, end='')
        if x >= 'a' and x <= 'z':
            print(d[x], end='')
    print()
