// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Encaixa ou Não II
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1241

#include <iostream>
#include <cstring>
using namespace std;
 
int main () {
    int i, j, k, n, tam, tam2;
    char vetor[1001], vetor2[1001];
    bool encaixa;
     
    cin >> n;
     
    for(i=0;i<n;i++) {
        encaixa = true;
        cin >> vetor >> vetor2;
        tam = strlen(vetor);
        tam2 = strlen(vetor2);
        if(tam2>tam)
            encaixa=false;
        else {
            for(j=tam-1, k=tam2-1; k>=0; j--, k--) {
                if(vetor[j]!=vetor2[k])
                    encaixa=false;
            }
        }
        if(encaixa)
            cout << "encaixa\n";
        else
            cout << "nao encaixa\n";
    }  
 
    return 0;
}
