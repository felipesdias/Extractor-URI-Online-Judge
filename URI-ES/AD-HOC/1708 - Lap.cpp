// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Lap
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1708

#include <bits/stdc++.h>

#define D(x) cout << #x << " " << x << endl

using namespace std;

int main() {
    int a, b, dif;

    scanf("%d %d", &a, &b);

    dif = b - a;

    printf("%.0lf\n", ceil(a * 1.0 / dif) + 1);
}
