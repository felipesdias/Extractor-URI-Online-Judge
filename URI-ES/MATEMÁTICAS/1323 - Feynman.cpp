// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Feynman
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1323

#include <iostream>
using namespace std;
 
int main ()
{
    int n, i, cont;
 
    cin >> n;
 
    while (n!=0) {
        cont=0;
 
        for (i=n;i>0;i--)
            cont+=i*i;
 
        cout << cont << endl;
 
        cin >> n;
    }
 
    return 0;
}
