# Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
# Nome: Teclado Zoeiro
# Nível: 5
# Categoria: INICIANTE
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2692

import sys

n, m = map(int, input().split(" "))

teclado = {}

for i in range(255):
	teclado[chr(i)] = chr(i)

while n:
	linha = input()
	
	teclado[linha[0]] = linha[2]
	teclado[linha[2]] = linha[0]
	
	n -= 1

while m:
	linha = input()
	
	for x in linha:
		print(teclado[x], sep="", end="")
	
	print("")
	
	m -= 1

