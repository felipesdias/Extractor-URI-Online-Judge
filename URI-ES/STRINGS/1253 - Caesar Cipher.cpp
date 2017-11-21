// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Caesar Cipher
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1253

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
