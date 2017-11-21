// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Upset Link
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2651

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string entrada, zelda = "zelda";

    cin >> entrada;

    for (auto &it : entrada)
        it = tolower(it);

    for(int i = 0; i < entrada.size() - 4; i++) {
        for(int j = 0; j < zelda.size() + 1; j++) {
            if(j == zelda.size()) {
                puts("Link Bolado");

                return 0;
            }
            else if(entrada[i + j] != zelda[j])
                break;
        }
    }

    puts("Link Tranquilo");

    return 0;
}
