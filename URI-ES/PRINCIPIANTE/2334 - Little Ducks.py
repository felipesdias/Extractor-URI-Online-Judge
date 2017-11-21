# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Little Ducks
# Nível: %d
# Categoria: PRINCIPIANTE
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2334

# -*- coding: utf-8 -*-

num = input()

while(int(num) != -1):
    if(int(num) == 0):
        print(0)
    else:
        print(int(num) - 1)
    num = input()
