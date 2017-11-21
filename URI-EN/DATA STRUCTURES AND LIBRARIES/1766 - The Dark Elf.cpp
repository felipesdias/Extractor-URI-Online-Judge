// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Dark Elf
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1766

#include <cstdio>
#include <cstring>
#include <algorithm>

struct Rena {
    char nome[101];
    int peso, idade;
    double altura;

    bool operator < (Rena a) const {
        if(peso == a.peso) {
            if(idade == a.idade) {
                if(altura == a.altura)
                    return strcmp(nome, a.nome);

                return altura < a.altura;
            }

            return idade < a.idade;
        }

        return peso > a.peso;
    }
};

int main() {
    int nCases, n, m;
    Rena r[1001];

    scanf("%d", &nCases);

    for(int j=1; j<=nCases; j++) {
        printf("CENARIO {%d}\n", j);

        scanf("%d %d", &n, &m);

        for(int i=0; i<n; i++)
            scanf("%s %d %d %lf", &r[i].nome, &r[i].peso, &r[i].idade, &r[i].altura);

        std::sort(r, r+n);

        for(int i=1; i<=m; i++)
            printf("%d - %s\n", i, r[i-1].nome);
    }

    return 0;
}

