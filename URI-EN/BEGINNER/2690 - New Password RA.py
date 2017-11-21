# Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Name: New Password RA
# Level: 5
# Category: BEGINNER
# URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2690

import sys

d = {}

for it in range(0, 256):
    d[chr(it)] = chr(it)

for it in range(0, 26):
    d[chr(it + ord('a'))] = it % 10

d['G'] = d['Q'] = 0
d['I'] = d['S'] = 1
d['E'] = d['O'] = d['Y'] = 2
d['F'] = d['P'] = d['Z'] = 3
d['J'] = d['T'] = 4
d['D'] = d['N'] = d['X'] = 5
d['A'] = d['K'] = d['U'] = 6
d['C'] = d['M'] = d['W'] = 7
d['B'] = d['L'] = d['V'] = 8
d['H'] = d['R'] = 9

n = int(input())

while n:
    line = input()

    count = 0
    for x in range(0, len(line)):
        if line[x] != ' ' and ord(line[x]) != 10:
            print(d[line[x]], end='')
            count += 1

            if(count == 12):
                break
    
    print()

    n -= 1
