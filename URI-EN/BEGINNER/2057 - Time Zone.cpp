// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Time Zone
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2057

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if((a + b + c)%24 < 0)
        printf("%d\n", 24 + (a + b + c)%24);
    else
        printf("%d\n", (a + b + c)%24);

    return 0;
}

