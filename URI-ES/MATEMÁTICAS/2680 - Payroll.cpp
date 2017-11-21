// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Payroll
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2680

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int divisores(int n)
{
    int resp = 0;
    int sqrtn = sqrt(n);

    while(sqrtn * sqrtn < n)
        sqrtn++;

    for (int i = 1; i < sqrtn; i++)
        if (!(n % i))
            resp += i, resp += n / i;

    if(sqrtn * sqrtn == n)
        resp += sqrtn;

    return resp;
}

int main()
{
    int n;

    scanf("%*d");

    while(scanf("%d", &n) > 0)
        printf("%d\n", divisores(n));
}
