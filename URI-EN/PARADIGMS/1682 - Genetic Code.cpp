// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Genetic Code
// Level: 1
// Category: PARADIGMS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1682

#include <cstdio>

bool confere(char *v, int tam) {
    int i=tam;
    while(i!=tam/2) {
        bool igual=true;

        for(int j=tam, k=i-1; j>=i; j--, k--) {
            if(v[j]!=v[k]) {
                igual = false;
                break;
            }
        }

        i--;

        if(igual)
            return false;
    }

    return true;
}

bool backtrack(char *v, int pos, int tam) {
    if(pos==tam)
        return true;

    v[pos] = 'N';
    if(confere(v, pos) && backtrack(v, pos+1, tam))
        return true;
    v[pos] = 'O';
    if(confere(v, pos) && backtrack(v, pos+1, tam))
        return true;
    v[pos] = 'P';
    if(confere(v, pos) && backtrack(v, pos+1, tam))
        return true;

    return false;
}

int main() {
    int n;
    char vetor[5000];

    backtrack(vetor, 0, 5000);

    scanf("%d", &n);

    while(n) {
        for(int i=0; i<n; i++)
            printf("%c", vetor[i]);

        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}

