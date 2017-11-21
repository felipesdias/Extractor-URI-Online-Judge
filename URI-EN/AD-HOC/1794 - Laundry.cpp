// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Laundry
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1794

#include <cstdio>

int main() {
    int n, la, lb, sa, sb;

    scanf("%d %d %d %d %d", &n, &la, &lb, &sa, &sb);

    if(n>=la && n<=lb && n>=sa && n<=sb)
        printf("possivel\n");
    else
        printf("impossivel\n");

    return 0;
}

