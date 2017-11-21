// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Assigning Teams
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2345

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(abs((a + b) - (c + d)), min(abs((a + c) - (b + d)), abs((a + d) - (b + c)))) << endl;
}
