// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: New Record
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2551

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double a, b, recorde;

    while(scanf("%d", &n) > 0) 
    {
        recorde = 0.0;
        
        for(int i = 0; i < n; i++) 
        {
            scanf("%lf %lf", &a, &b);

            if(b / a > recorde)
                recorde = b / a,
                printf("%d\n", i + 1);
        }
    }

    return 0;
}
