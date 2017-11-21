// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Pergunte à Geógrafa
// Nível: 5
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2521

#include <bits/stdc++.h>
using namespace std;

#define M_PI 3.1415926535897932384
#define D(x) cout << #x " = " << x << endl

int cmp(double x, double y = 0.0, double tol = 1e-10) {
    return (x <= y + tol) ? (x + tol <= y) ? -1 : 0 : 1;
}

int main() {
    int r, la, lo;
    double x, y, z;

    while(scanf("%d %d %d", &r, &la, &lo) > 0) {
        x = (r * cos(la * M_PI / 180.0)) * sin(lo * M_PI / 180.0);
        z = -((r * cos(la * M_PI / 180.0)) * cos(lo * M_PI / 180.0));
        y = r * sin(la * M_PI / 180.0);

        x = cmp(x, -0.0) == 0 ? 0.0 : x;
        y = cmp(y, -0.0) == 0 ? 0.0 : y;
        z = cmp(z, -0.0) == 0 ? 0.0 : z;

        printf("%.2lf %.2lf %.2lf\n", x, y, z);
    }
}
