// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Supermarket Line
// Level: 4
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2065

#include <bits/stdc++.h>
using namespace std;

struct Caixa {
    int pos, tempo, valor;

    bool operator < (Caixa a) const {
        if(valor == a.valor)
            return pos > a.pos;

        return valor > a.valor;
    }
};

priority_queue<Caixa> atendimento;
queue<int> cliente;

int main() {
    int n, m, aux;
    Caixa caixaux;
    int maior = 0;

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++) {
        scanf("%d", &caixaux.tempo);
        caixaux.pos = i;
        caixaux.valor = 0;
        atendimento.push(caixaux);
    }

    for(int i=0; i<m; i++) {
        scanf("%d", &aux);
        cliente.push(aux);
    }

    while(!cliente.empty()) {
        aux = cliente.front();
        cliente.pop();

        caixaux = atendimento.top();
        atendimento.pop();

        caixaux.valor += aux*caixaux.tempo;
        atendimento.push(caixaux);

        if(caixaux.valor > maior)
            maior = caixaux.valor;
    }

    printf("%d\n", maior);

    return 0;
}

