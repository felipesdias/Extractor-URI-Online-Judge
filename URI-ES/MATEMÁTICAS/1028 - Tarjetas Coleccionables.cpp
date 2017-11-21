// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Tarjetas Coleccionables
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1028

#include <iostream>
using namespace std;
 
int main ()
{
    int i, n, j, x, y, dvd, dvs, aux;
 
    cin >> n;
 
    for(i=0;i<n;i++) {
 
        cin >> x >> y;
 
        if(x>y) {
            dvd=x;
            dvs=y;
        } else {
            dvd=y;
            dvs=x;
        }
 
        while (dvd%dvs!=0) {
            aux=dvd%dvs;
            dvd=dvs;
            dvs=aux;
        }
 
        cout << dvs << endl;
    }
 
    return 0;
}
