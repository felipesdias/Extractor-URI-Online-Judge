// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Time Room
// Level: 6
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1754

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, r;

    scanf("%*d");

    while (scanf("%lld %lld", &a, &b) > 0)
    {
        r = a / b;

        if(r == 1 || r == 0)
            puts("2");
        else if(r * b == a)
            printf("%lld\n", r);
        else
            printf("%lld\n", r + 1);
    }

    return 0;
}
