# Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Name: Problem with the Calculator
# Level: 1
# Category: STRINGS
# URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2694

def main():
    n = int(input())

    while n:
        palavra = input()

        print(int(palavra[2:4]) + int(palavra[5:8]) + int(palavra[11:13]))

        n -= 1        

main()
