// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Tempestade de Corvos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2203

#include <bits/stdc++.h>
using namespace std;

int cmp(double x, double y = 0.0, double tol = 1e-10) {
    return (x <= y + tol) ? (x + tol <= y) ? -1 : 0 : 1;
}

int main() {
    int x1, y1, x2, y2, v, r1, r2;

    while(cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2) {
        double x = (x2 - x1) * (x2 - x1);
        double y = (y2 - y1) * (y2 - y1);
        double dist = sqrt(x + y) + v * 1.5;
        cout << (cmp(r1 + r2, dist) >= 0 ? 'Y' : 'N') << endl;
    }
}
