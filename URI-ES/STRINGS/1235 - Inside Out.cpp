// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Inside Out
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1235

#include <iostream>
#include <cstring>
using namespace std;
  
int main ()
{
    int n, i, j, tam;
    char vetor[101];
  
    cin >> n;
    cin.get();
  
    for (i=0;i<n;i++) {
        cin.getline(vetor,101);
        tam=strlen(vetor);
        for (j=tam/2-1;j>=0;j--)
            cout << vetor[j];
        for (j=tam-1;j>=tam/2;j--)
            cout << vetor[j];
        cout << endl;
    }
  
    return 0;
}
