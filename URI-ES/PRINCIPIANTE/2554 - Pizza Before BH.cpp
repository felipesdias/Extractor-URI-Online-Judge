// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Pizza Before BH
// Nível: %d
// Categoria: PRINCIPIANTE
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2554

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, pessoa;
    string data;

    while(cin >> m >> n) {
        bool foi = false;

        while(n--) {
            bool pode = true;

            cin >> data;

            for(int i = 0; i < m; i++) {
                cin >> pessoa;
                if(!pessoa) pode = false;
            }

            if(!foi && pode) {
                foi = true;
                cout << data << endl;
            }
        }

        if(!foi)
            cout << "Pizza antes de FdI" << endl;
    }
}
