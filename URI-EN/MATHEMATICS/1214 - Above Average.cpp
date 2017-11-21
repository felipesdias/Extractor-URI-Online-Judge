// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Above Average
// Level: 2
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1214

#include <iostream>
#include <iomanip>
using namespace std;
 
int main ()
{
    int c, n, i, j, notas[1000];
    double media, porcento;
     
    cin >> c;
     
    for (i=0;i<c;i++) {
        media=0;
        porcento=0;
        cin >> n;
        for(j=0;j<n;j++) {
            cin >> notas[j];
            media+=notas[j];
        }
        media/=n;
        for(j=0;j<n;j++)
            if(notas[j]>media)
                porcento++;
        cout << fixed << setprecision(3) << 100*porcento/n << "%\n";
    }
     
    return 0;
}
