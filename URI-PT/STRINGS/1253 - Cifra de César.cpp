// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Cifra de César
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1253

#include <iostream>
#include <cstring>
using namespace std;
   
int main () {
    int i, j, n, desloca, tam;
    char msg[51];
     
    cin >> n;
    cin.get();
 
    for(i=0; i<n; i++) {
        cin.getline(msg,51);
        tam = strlen(msg);
        cin >> desloca;
        cin.get();
        for(j=0; j<tam; j++) {
            msg[j] -= desloca;
            if(msg[j] < 'A')
                msg[j] = msg[j] - 'A' + 'Z' + 1;
            cout << msg[j];
        }
        cout << endl;
    }
 
    return 0;
}
