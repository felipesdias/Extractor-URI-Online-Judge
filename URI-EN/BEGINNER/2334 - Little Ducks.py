# Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Name: Little Ducks
# Level: 2
# Category: BEGINNER
# URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2334

# -*- coding: utf-8 -*-

num = input()

while(int(num) != -1):
    if(int(num) == 0):
        print(0)
    else:
        print(int(num) - 1)
    num = input()
