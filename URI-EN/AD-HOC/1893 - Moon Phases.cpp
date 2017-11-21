// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Moon Phases
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1893

#include <cstdio>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if(b <= 2)
        printf("nova\n");
    else if(b <= 96 && a < b)
        printf("crescente\n");
    else if(b <= 96)
        printf("minguante\n");
    else
        printf("cheia\n");

    return 0;
}

