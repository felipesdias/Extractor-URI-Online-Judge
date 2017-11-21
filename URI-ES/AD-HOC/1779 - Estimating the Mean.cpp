// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Estimating the Mean
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1779

#include <cstdio>

int main() {
    int n, t, aux, maior, tam, tam2;

    scanf("%d", &n);

    for(int it=0; it<n; it++) {
        scanf("%d", &t);

        bool pode = false;
        maior = 0;
        tam = tam2 = 1;

        for(int i=0; i<t; i++) {
            scanf("%d", &aux);
            if(aux>maior) {
                maior = aux;
                tam = tam2 = 1;
                pode = true;
            }
            else if(aux==maior && pode) {
                tam++;
            }
            else if(aux==maior) {
                if(tam>tam2)
                    tam2 = tam;
                tam = 1;
                pode = true;
            }
            else
                pode = false;
        }
        if(tam>tam2)
            tam2 = tam;

        printf("Caso #%d: %d\n", it+1, tam2);
    }

    return 0;
}

