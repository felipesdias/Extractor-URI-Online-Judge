// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Building Walls
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2650

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, string> titan;

pair<int, string> fazTitan(string entrada, int pos, int w) {
    int i, resp;

    for(i = 0; i < entrada.size(); i++)
        if(entrada[i] >= '0' && entrada[i] <= '9')
            break;

    i--;

    sscanf(entrada.c_str() + i, "%d", &resp);
    
    entrada.resize(i);

    if(resp > w)
        return {pos, entrada};
    else
        return {-1, ""};
}

int main()
{
    string nome;
    int n, w, val;
    set<titan> titans;

    cin >> n >> w;

    getline(cin, nome);

    for(int i = 0; i < n; i++)
    {
        getline(cin, nome);

        titans.insert(fazTitan(nome, i, w));
    }

    for(auto &it : titans)
        if(it.first >= 0)
            cout << it.second << "\n";

    return 0;
}
