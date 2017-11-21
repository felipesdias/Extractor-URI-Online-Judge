# Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Name: Leap Year or Not Leap Yea...
# Level: 4
# Category: MATHEMATICS
# URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1279

import sys

primeiro = True

for line in sys.stdin:
    n = int(line)
    nada = True
    bisexto = False

    if(primeiro == False):
        print("")
    else:
        primeiro = False 

    if n % 400 == 0 or (n % 4 == 0 and n % 100 != 0):
        print("This is leap year.")
        bisexto = True
        nada = False
    if n % 15 == 0:
        print("This is huluculu festival year.")
        nada = False
    if bisexto and n % 55 == 0:
        print("This is bulukulu festival year.")

    if nada:
        print("This is an ordinary year.")
