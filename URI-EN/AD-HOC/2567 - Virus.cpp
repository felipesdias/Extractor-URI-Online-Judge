// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Virus
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2567

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main()
{
    int n, resp, i;
    
    while(cin >> n) 
    {
        resp = 0;
        vi valores(n);

        for(auto &it : valores)
            cin >> it;

        sort(valores.begin(), valores.end());

        for(i = 0; i < n/2; i++)
            resp += valores[n - i - 1] - valores[i];

        printf("%d\n", resp);
    }
}
