// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: TDA Racional
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1022

#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int MDC(int a, int b) {
    if(b==0)
        return a;

    return MDC(b, a%b);
}

int main() {
    int n, i, aux;
    int n1, n2, d1, d2, n3, d3;
    char c;


    scanf("%d", &n);

    while(n--) {
        scanf("%d / %d %c %d / %d",&n1,&d1,&c,&n2,&d2);

        if(c == '+') {
            n3 = n1*d2 + n2*d1;
            d3 = d1*d2;
        } else if(c == '-') {
            n3 = n1*d2 - n2*d1;
            d3 = d1*d2;
        } else if(c == '*') {
            n3 = n1*n2;
            d3 = d1*d2;
        } else {
            n3 = n1*d2;
            d3 = d1*n2;
        }

        aux = MDC(abs(n3),abs(d3));
        printf("%d/%d = %d/%d\n", n3, d3, n3/aux, d3/aux);
    }

    return 0;
}

