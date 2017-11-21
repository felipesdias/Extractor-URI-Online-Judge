// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Problema com Mediana e Média
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1379

#include <cstdio>

int main () {
int a, b, c;

scanf("%d%d", &a, &b);

while(a!=0 && b!=0) {
c = a - (b - a);
printf("%d\n", c);
scanf("%d%d", &a, &b);
}

return 0;
}
