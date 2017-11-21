// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Triangle Energy
// Level: 5
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1560

#include <cstdio>

struct Ponto {
    int x;
    int y;
};

bool pVetorial(Ponto a, Ponto b, Ponto c) {
    return ((b.x-a.x)*(c.y-a.y))-((b.y-a.y)*(c.x-a.x)) > 0 ? true : false;
}


int main() {
    Ponto preto[100];
    Ponto branco[100];
    int energia;
    int cont;

    int n, m;

    bool aux;

    while(scanf("%d%d", &n, &m) != EOF) {
        energia = 0;

        for(int i=0; i<n; i++)
            scanf("%d%d", &preto[i].x, &preto[i].y);

        for(int i=0; i<m; i++)
            scanf("%d%d", &branco[i].x, &branco[i].y);

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    cont = 0;
                    for(int l=0; l<m; l++) {
                        aux = pVetorial(preto[i], preto[j], branco[l]);
                        if(aux == pVetorial(preto[j], preto[k], branco[l]) && aux == pVetorial(preto[k], preto[i], branco[l]))
                            cont++;
                    }
                    energia += cont*cont;
                }
            }
        }
        printf("%d\n", energia);
    }

    return 0;
}

