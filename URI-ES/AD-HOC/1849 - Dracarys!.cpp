// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Dracarys!
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1849

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    e = min(min(min(min(max(a, b), max(c, d)), min(a+b, c+d)), min(a+c, b+d)), min(a+d, b+c));

    printf("%d\n", e*e);

    return 0;
}

