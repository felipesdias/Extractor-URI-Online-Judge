// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Approximate Number of Primes
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2159

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    printf("%.1lf %.1lf\n", n*1.0/log(n), 1.25506*(n*1.0/log(n)));

    return 0;
}
