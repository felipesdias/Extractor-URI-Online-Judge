// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Godofor
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2654

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int main()
{
    string nome;
    int n, poder, matado, morrido;

    cin >> n;

    map<iii, string> caras;

    while (n--)
    {
        cin >> nome >> poder >> matado >> morrido;

        if (caras.count({poder, {matado, -morrido}}))
            caras[{poder, {matado, -morrido}}] = min(caras[{poder, {matado, -morrido}}], nome);
        else
            caras[{poder, {matado, -morrido}}] = nome;
    }

    cout << caras.rbegin()->second << endl;

    return 0;
}
