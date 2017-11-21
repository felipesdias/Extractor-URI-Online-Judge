// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Motoboy
// Level: 4
// Category: PARADIGMS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1286

#include <cstdio>

struct Pedido {
    int pizza, tempo;
};

Pedido p[21];
int delivery[21][31];

int constroiPedido(int i, int j) {
    if(delivery[i][j] >= 0)
        return delivery[i][j];

    if(p[i].tempo > j)
        return constroiPedido(i-1, j);

    int v1 = constroiPedido(i-1, j), v2 = constroiPedido(i-1, j-p[i].tempo) + p[i].pizza;

    if(v1 >= v2)
        delivery[i][j] = v1;
    else
        delivery[i][j] = v2;

    return delivery[i][j];
}

int preparaPedido(int n, int m) {
    for(int i=0; i<=n; i++)
        delivery[i][0] = 0;

    for(int i=0; i<=m; i++)
        delivery[0][i] = 0;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            delivery[i][j] = -1;

    constroiPedido(n, m);
}


int main() {
    int n_pedidos, tempo_total;

    scanf("%d", &n_pedidos);

    while(n_pedidos) {
        scanf("%d", &tempo_total);

        for(int i=0; i<n_pedidos; i++)
            scanf("%d %d", &p[i+1].pizza, &p[i+1].tempo);

        printf("%d min.\n", preparaPedido(n_pedidos, tempo_total));

        scanf("%d", &n_pedidos);
    }

    return 0;
}

