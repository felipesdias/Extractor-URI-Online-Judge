// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Kage Bunshin no Jutsu
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2544

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   
   while(cin >> n)
    cout << __builtin_ctz(n) << "\n";

   return 0;
}
