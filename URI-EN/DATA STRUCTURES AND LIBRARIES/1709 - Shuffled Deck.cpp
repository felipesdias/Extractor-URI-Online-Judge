// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Shuffled Deck
// Level: 5
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1709

#include <bits/stdc++.h>

#define D(x) cout << #x << " " << x << endl

using namespace std;

int main() {
    int n, i, resp, pos, r = 0;

    scanf("%d", &n);

    for(i = 0; i < 28; i++) 
        if(n & (1 << i))
            resp = i;

    pos = 1 << resp;

    while(pos != 1) {
        if(pos > n / 2)
            pos = (pos - n / 2) * 2 - 1;
        else
            pos <<= 1;

        r++;
    }

    printf("%d\n", r + resp);
}
