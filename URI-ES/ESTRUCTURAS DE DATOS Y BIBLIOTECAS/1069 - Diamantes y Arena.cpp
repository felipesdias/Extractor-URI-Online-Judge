// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Diamantes y Arena
// Nível: %d
// Categoria: ESTRUCTURAS DE DATOS Y BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1069

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
    int n, tam;
    char str[1001];

    cin >> n;
    cin.get();

    while(n--) {
        cin.getline(str, 1001);

        int cont = 0;
        stack<char> p;

        tam = strlen(str);

        for(int i=0; i<tam; i++) {
            if(str[i]=='<')
                p.push('<');
            else if(str[i]=='>') {
                if(!p.empty()) {
                    cont++;
                    p.pop();
                }
            }
        }

        cout << cont << endl;
    }

    return 0;
}

