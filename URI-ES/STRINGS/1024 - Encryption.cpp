// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Encryption
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1024

#include <iostream>
#include <cstring>
 
using namespace std;
 
int main() {
 
    int n, tam;
    char crip[1001];
    char aux[1001];
    cin >> n;
    cin.get();
    for(int i=0; i<n; i++) {
        cin.getline(crip,1000);
        tam = strlen(crip);
        for(int j=0; j<tam; j++) {
            if( (crip[j] >= 'a' && crip[j] <= 'z') || (crip[j] >= 'A' && crip[j] <= 'Z') )
                crip[j] += 3;
        }
         
        for(int j=0, k=tam-1; j<tam; j++, k--)
            aux[j] = crip[k];
        aux[tam] = '\0';
         
        for(int j=tam/2; j<tam; j++)
            aux[j]--;
             
        cout << aux << endl;
    }
 
    return 0;
}
