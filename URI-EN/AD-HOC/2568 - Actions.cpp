// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Actions
// Level: 5
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2568

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int d, i, x, f;

    scanf("%d %d %d %d", &d, &i, &x, &f);

    if (d % 2)
    {
        if (f % 2)
            printf("%d\n", i + x);
        else
            printf("%d\n", i);
    }
    else
    {
        if (f % 2)
            printf("%d\n", i - x);
        else
            printf("%d\n", i);
    }
}
