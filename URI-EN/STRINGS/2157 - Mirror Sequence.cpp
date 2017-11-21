// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Mirror Sequence
// Level: 1
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2157

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, i, j;
    char resp[100000];
    
    scanf("%*d");

    while(cin >> a >> b) {
        for(i = a; i <= b; i++)
            printf("%d", i);

        for(i = b; i >= a; i--) {
            j = i;
            
            while(j)
                printf("%d", j % 10), j /= 10;
        }

        puts("");
    }
}
