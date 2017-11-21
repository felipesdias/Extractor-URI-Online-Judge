// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Assigning Teams
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2345

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(abs((a + b) - (c + d)), min(abs((a + c) - (b + d)), abs((a + d) - (b + c)))) << endl;
}
