// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Pokémon!
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1836

#include <cstdio>
#include <cmath>

int HP(int iv, int bh, int ev, int lvl) {
    return (iv+bh+sqrt(ev)/8+50)*lvl/50+10;
}

int S(int iv, int bs, int ev, int lvl) {
    return (iv+bs+sqrt(ev)/8)*lvl/50+5;
}

int main() {
    int n_casos, lvl, bs, iv, ev;
    char nome[200];

    scanf("%d", &n_casos);

    for(int nC = 1; nC <= n_casos; nC++) {
        scanf("%s %d", &nome, &lvl);

        printf("Caso #%d: %s nivel %d\n", nC, nome, lvl);

        scanf("%d %d %d", &bs, &iv, &ev);
        printf("HP: %d\n", HP(iv, bs, ev, lvl));
        scanf("%d %d %d", &bs, &iv, &ev);
        printf("AT: %d\n", S(iv, bs, ev, lvl));
        scanf("%d %d %d", &bs, &iv, &ev);
        printf("DF: %d\n", S(iv, bs, ev, lvl));
        scanf("%d %d %d", &bs, &iv, &ev);
        printf("SP: %d\n", S(iv, bs, ev, lvl));
    }

    return 0;
}

