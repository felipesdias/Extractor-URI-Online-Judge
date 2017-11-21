# Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Name: Base 32
# Level: 1
# Category: MATHEMATICS
# URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1869

import sys

def convert(n):
    alph = "0123456789ABCDEFGHIJKLMNOPQRSTUV"
    resp = ""

    if(n == 0):
        return "0"

    while n:
        resp += alph[n % 32]

        n //= 32

    return resp[::-1]

for lines in sys.stdin:
    n = int(lines)

    print(convert(n))
