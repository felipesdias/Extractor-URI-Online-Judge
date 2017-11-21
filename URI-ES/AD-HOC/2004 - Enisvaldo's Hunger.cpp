// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Enisvaldo's Hunger
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2004

#include <cstdio>

int main() {
    int n_casos, n, auxT,auxP, tipo[101] = {0};

    scanf("%d", &n_casos);

    while(n_casos--) {
        int tot = 0;

        scanf("%d", &n);

        while(n--) {
            scanf("%d %d", &auxT, &auxP);

            if(tipo[auxT]==0)
                tipo[auxT] = auxP;
            else if((tipo[auxT] < 10 || tipo[auxT] > 100) && auxP >= 10 && auxP <= 100)
                tipo[auxT] = auxP;
            else if((tipo[auxT] < 10 || tipo[auxT] > 100) && auxP > tipo[auxT])
                tipo[auxT] = auxP;
            else if((tipo[auxT] >= 10 || tipo[auxT] <= 100) && auxP >= 10 && auxP <= 100 && auxP > tipo[auxT])
                tipo[auxT] = auxP;
        }

        for(int i=0; i<101; i++) {
            tot+=tipo[i];
            tipo[i] = 0;
        }

        printf("%d\n", tot);
    }

    return 0;
}

