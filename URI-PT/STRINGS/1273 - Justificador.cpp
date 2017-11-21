// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Justificador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <cstring>
#include <iomanip>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, n, max, aux;
    char palavra[50][51];
 
    cin >> n;
    cin.get();
    while (n != 0) {
        max = 0;
        for(i=0; i<n; i++) {
            cin.getline(palavra[i],51);
            aux = strlen(palavra[i]);
            if(aux > max)
                max = aux;
        }
         
        for(i=0; i<n; i++)
            cout << setw(max) << palavra[i] << endl;
     
        cin >> n;
        cin.get();
        if(n != 0)
            cout << endl;
    }
     
    return 0;
}
