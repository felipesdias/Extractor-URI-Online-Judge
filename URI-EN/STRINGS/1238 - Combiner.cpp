// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Combiner
// Level: 2
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1238

#include <iostream>
#include <cstring>
using namespace std;
 
int main () {
    int i, j, n, tam, tam2;
    char vetor[51], vetor2[51];
     
    cin >> n;
 
    for(i=0;i<n;i++) {
        cin >> vetor >> vetor2;
        tam=strlen(vetor);
        tam2=strlen(vetor2);
        if(tam<tam2) {
            for(j=0;j<tam;j++)
                cout << vetor[j] << vetor2[j];
            for(;j<tam2;j++)
                cout << vetor2[j];
        } else {
            for(j=0;j<tam2;j++)
                cout << vetor[j] << vetor2[j];
            for(;j<tam;j++)
                cout << vetor[j];
        }
        cout << endl;
    }
 
    return 0;
}
