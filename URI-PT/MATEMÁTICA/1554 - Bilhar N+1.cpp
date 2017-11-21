// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Bilhar N+1
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1554

#include <iostream>
#include <cmath>
using namespace std;
 
typedef struct {
    int x, y;
} posicao;
 
int main ()
{
    int c, n, i, j, aux;
    float menor=9999, pit;
    posicao bd[51];
 
    cin >> c;
 
    for (i=0; i<c; i++) {
        cin >> n;
        cin >> bd[0].x >> bd[0].y;
        for (j=1; j<=n; j++) {
            cin >> bd[j].x >> bd[j].y;
            pit = sqrt((bd[j].x-bd[0].x)*(bd[j].x-bd[0].x)+(bd[j].y-bd[0].y)*(bd[j].y-bd[0].y));
            if (pit<menor) {
                menor=pit;
                aux=j;
            }
        }
        cout << aux << endl;
        menor=9999;
    }
 
    return 0;
}
