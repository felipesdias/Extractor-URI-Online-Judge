// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Galopeira
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2147

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;

    cin >> n;

    while(n--) {
        cin >> str;
        cout << fixed << setprecision(2) << str.size()/100.0 << endl;
    }
}
