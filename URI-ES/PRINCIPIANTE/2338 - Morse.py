# Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
# Nome: Morse
# Nível: %d
# Categoria: PRINCIPIANTE
# URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2338

def main():
    n = int(input())

    dicionario = {}

    dicionario['=.==='] = 'a'
    dicionario['===.=.=.='] = 'b'
    dicionario['===.=.===.='] = 'c'
    dicionario['===.=.='] = 'd'
    dicionario['='] = 'e'
    dicionario['=.=.===.='] = 'f'
    dicionario['===.===.='] = 'g'
    dicionario['=.=.=.='] = 'h'
    dicionario['=.='] = 'i'
    dicionario['=.===.===.==='] = 'j'
    dicionario['===.=.==='] = 'k'
    dicionario['=.===.=.='] = 'l'
    dicionario['===.==='] = 'm'
    dicionario['===.='] = 'n'
    dicionario['===.===.==='] = 'o'
    dicionario['=.===.===.='] = 'p'
    dicionario['===.===.=.==='] = 'q'
    dicionario['=.===.='] = 'r'
    dicionario['=.=.='] = 's'
    dicionario['==='] = 't'
    dicionario['=.=.==='] = 'u'
    dicionario['=.=.=.==='] = 'v'
    dicionario['=.===.==='] = 'w'
    dicionario['===.=.=.==='] = 'x'
    dicionario['===.=.===.==='] = 'y'
    dicionario['===.===.=.='] = 'z'

    while(n):
        entrada = input()

        palavras = entrada.split('.......')

        for idx, it in enumerate(palavras):
            letras = it.split('...')

            for letra in letras:
                print(dicionario[letra], sep='', end='')
            
            print(" \n"[1 if idx == len(palavras) - 1 else 0], sep='', end='')

        n -= 1

main()
