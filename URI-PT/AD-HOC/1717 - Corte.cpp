// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Corte
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1717

#include <bits/stdc++.h>
using namespace std;

#define D(x) cout << #x " = " << (x) << endl

typedef double Double;

struct Vec2 {
    Double x, y;

    Vec2() {}

    Vec2(Double x, Double y) : x(x), y(y) {}

    Vec2 operator-(const Vec2 &v) const {
        return Vec2(x - v.x, y - v.y);
    }

    Double norma() {
        return sqrt(x * x + y * y);
    }
};

Double dist[200][200], pd[200][200];

Double calc(int ini, int fim) {
    if(fim - ini < 4)
        return 0.0;

    if(pd[ini][fim] > -0.5)
        return pd[ini][fim];

    Double ret = 1e30;

    for(int i = ini + 1; i < fim; i += 2)
        for(int j = i + 1; j < fim; j += 2)
            ret = min(ret, calc(ini, i) + calc(i, j) + calc(j, fim) +
                    dist[ini][i] + dist[i][j] + dist[j][fim]);

    pd[ini][fim] = ret;

    return pd[ini][fim];
}

int main() {
    int n;

    scanf("%d", &n);

    n *= 2;

    vector<Vec2> pontos(n);

    for(auto &it : pontos)
        scanf("%lf %lf", &it.x, &it.y);

    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            dist[i][j] = hypot(pontos[i].x - pontos[j].x, pontos[i].y - pontos[j].y);
            pd[i][j] = -1.0;
        }

        dist[i][i + 1] = 0.0;
    }

    printf("%.4lf\n", calc(0, n - 1));
}
