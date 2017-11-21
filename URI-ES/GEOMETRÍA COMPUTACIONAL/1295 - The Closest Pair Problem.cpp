// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: The Closest Pair Problem
// Nível: %d
// Categoria: GEOMETRÍA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1295

#include <cstdio>
#include <cmath>
#include <algorithm>

#define DIM 10001

int n;

using namespace std;

struct Ponto {
    double x, y;
};

bool compPontoX(Ponto a, Ponto b) {
    return a.x < b.x;
}

bool compPontoY(Ponto a, Ponto b) {
    return a.y < b.y;
}

double distancia(Ponto a, Ponto b) {
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

double parMaisProx(Ponto* p, int inicio, int fim) {
    if(inicio == fim - 1)
        return distancia(p[inicio], p[fim]);
    if(inicio == fim)
        return DIM;

    int meio = (inicio+fim)/2;
    double dEsq = parMaisProx(p, inicio, meio);
    double dDir = parMaisProx(p, meio+1, fim);
    double delta = min(dEsq, dDir);

    Ponto pEsq[DIM/2];
    Ponto pDir[DIM/2];

    int tamPE = 0;
    int tamPD = 0;

    for(int i=inicio; i<=meio; i++) {
        if(p[meio].x - p[i].x <= delta) {
            pEsq[tamPE].x = p[i].x;
            pEsq[tamPE].y = p[i].y;
            tamPE++;
        }
    }

    for(int i=meio+1; i<=fim; i++) {
        if(p[i].x - p[meio+1].x <= delta) {
            pDir[tamPD].x = p[i].x;
            pDir[tamPD].y = p[i].y;
            tamPD++;
        }
    }

    double menor = DIM;

    for(int i=0; i<tamPE; i++) {
        for(int j=0; j<tamPD; j++) {
            menor = distancia(pEsq[i], pDir[j]);
            if(menor < delta)
                delta = menor;
        }
    }

    return delta;
}

int main() {
    Ponto p[DIM];
    double menorDist;

    scanf("%d", &n);

    while(n) {
        for(int i=0; i<n; i++)
            scanf("%lf %lf", &p[i].x, &p[i].y);

        sort(p, p+n, compPontoX);

        menorDist = parMaisProx(p, 0, n-1);

        if(menorDist < 10000)
            printf("%.4lf\n", menorDist);
        else
            printf("INFINITY\n");

        scanf("%d", &n);
    }

    return 0;
}

