// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Kage Bunshin no Jutsu
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2544

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   
   while(cin >> n)
    cout << __builtin_ctz(n) << "\n";

   return 0;
}
