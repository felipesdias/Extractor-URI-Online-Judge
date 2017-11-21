// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Jogando Cartas Fora
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include <cstdio>
#include <queue>

int main() {
    int n, aux;

    scanf("%d", &n);

    while(n) {
        std::queue<int> fila;

        for(int i=1; i<=n; i++)
            fila.push(i);

        fila.pop();

        if(fila.empty()) {
            printf("Discarded cards:");
            printf("\nRemaining card: 1\n");
        }
        else {
            printf("Discarded cards: 1");

            while(fila.size() > 1) {
                aux = fila.front();
                fila.pop();
                fila.push(aux);

                printf(", %d", fila.front());
                fila.pop();
            }

            printf("\nRemaining card: %d\n", aux);
        }

        scanf("%d", &n);
    }

    return 0;
}

