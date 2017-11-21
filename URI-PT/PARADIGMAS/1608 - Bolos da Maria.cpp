// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Bolos da Maria
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1608

#include <cstdio>

int main() {
    int n_casos, dinheiro, n_ingredientes, n_bolos, bolo, ing1, ing2, aux, ingr[101];

    scanf("%d", &n_casos);

    while(n_casos--) {
        int maior = 0;

        scanf("%d %d %d", &dinheiro, &n_ingredientes, &n_bolos);

        for(int i=0; i<n_ingredientes; i++)
            scanf("%d", &ingr[i]);

        for(int i=0; i<n_bolos; i++) {
            int soma = 0;

            scanf("%d", &bolo);

            while(bolo--) {
                scanf("%d %d", &ing1, &ing2);
                soma += ingr[ing1]*ing2;
            }

            aux = dinheiro/soma;

            if(soma > 0 && aux > maior)
                maior = aux;
        }

        printf("%d\n", maior);
    }

    return 0;
}

