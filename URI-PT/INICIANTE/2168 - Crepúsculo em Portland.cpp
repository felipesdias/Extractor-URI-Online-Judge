// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Crepúsculo em Portland
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2168

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mat[200][200], i, j;
    char resp[200][200];

    cin >> n;

    n++;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> mat[i][j];

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            printf("%c%s", (mat[i][j] + mat[i+1][j] + mat[i+1][j+1] + mat[i][j+1]) > 1 ? 'S' : 'U', j == n - 2 ? "\n" : "");

}
