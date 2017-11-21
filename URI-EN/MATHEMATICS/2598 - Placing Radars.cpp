// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Placing Radars
// Level: 1
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2598

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, a, b;
    
    scanf("%d", &n);
    
    while(n--)
        scanf("%d %d", &a, &b),
        printf("%.0lf\n", ceil(a * 1.0 / b));
 
    return 0;
}
