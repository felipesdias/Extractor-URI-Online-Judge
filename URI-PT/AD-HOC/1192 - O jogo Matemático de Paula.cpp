// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: O jogo Matemático de Paula
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1192

#include <iostream>
using namespace std;
 
int main ()
{
    int i, n, x, y;
    char a;
 
    cin >> n;
 
    for (i=0; i<n; i++) {
        cin >> x >> a >> y;
        if (x==y)
            cout << x*y << endl;
        else if (a>='a')
            cout << x+y << endl;
        else
            cout << y-x << endl;
    }
 
    return 0;
}
