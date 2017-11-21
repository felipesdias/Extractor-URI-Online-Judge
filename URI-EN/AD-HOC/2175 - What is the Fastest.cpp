// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: What is the Fastest?
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2175

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    if(a < b && a < c) 
        puts("Otavio");
    else if(b < a && b < c)
        puts("Bruno");
    else if(c < a && c < b)
        puts("Ian");
    else
        puts("Empate");
}
