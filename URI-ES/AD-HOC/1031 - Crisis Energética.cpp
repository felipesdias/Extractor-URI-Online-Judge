// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Crisis Energética
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1031

#include <cstdio>

int fjp(int n, int k) {
    int pc = 0;

    for(int i=1; i<n; i++)
        pc = (pc+k)%i;

    return pc;
}

int main() {
    int n;

    scanf("%d", &n);

    while(n) {
        for(int i=1;; i++) {
            if(fjp(n, i)==11) {
                printf("%d\n", i);
                break;
            }
        }

        scanf("%d", &n);
    }

    return 0;
}

