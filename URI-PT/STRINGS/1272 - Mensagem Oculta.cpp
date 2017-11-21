// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Mensagem Oculta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1272

#include <cstring>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, n;
    char letra;
    char aux;
 
    cin >> n;
    cin.get();
    for(i=0; i<n; i++) {
        aux = ' ';
        cin.get(letra);
        while(letra != '\n') {
            if(aux == ' ' && letra != ' ')
                cout << letra;
            aux = letra;
            cin.get(letra);
        }
        cout << endl;
    }
     
    return 0;
}
