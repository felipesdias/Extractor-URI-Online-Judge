// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Seven
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2590

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int t, n, val[] = {1, 7, 9, 3};

    while (scanf("%d", &t) > 0)
    {
        while (t--)
        {
            scanf("%d", &n);

            printf("%d\n", val[n % 4]);
        }
    }
}
