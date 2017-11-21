// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Borboletas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1901

#include <cstdio>

int main() {
    int n, floresta[200][200], a, b, cont = 0;
    bool especie[1001] = {false};

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &floresta[i][j]);

    for(int i=0; i<2*n; i++) {
        scanf("%d %d", &a, &b);
        if(!especie[floresta[a-1][b-1]]) {
            cont++;
            especie[floresta[a-1][b-1]] = true;
        }
    }

    printf("%d\n", cont);

    return 0;
}

