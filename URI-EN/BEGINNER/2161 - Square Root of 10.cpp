// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Square Root of 10
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2161

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double resp = 0.0;

    scanf("%d", &n);

    while(n--) {
        resp += 6.0;
        resp = 1.0 / resp;
    }

    resp += 3.0;

    printf("%.10lf\n", resp);
}
