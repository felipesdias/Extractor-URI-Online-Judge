// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Roberto e a Sala Desenfreada
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1953

#include <cstdio>
#include <cstring>

int main() {
    int n_casos, matr, epr, ehd, intr;
    char curso[100];

    while(scanf("%d", &n_casos)!=EOF) {
        epr = ehd = intr = 0;

        for(int i=0; i<n_casos; i++) {
            scanf("%d %s", &matr, &curso);

            if(strcmp(curso, "EPR")==0)
                epr++;
            else if(strcmp(curso, "EHD")==0)
                ehd++;
            else
                intr++;
        }
        printf("EPR: %d\nEHD: %d\nINTRUSOS: %d\n", epr, ehd, intr);
    }

    return 0;
}

