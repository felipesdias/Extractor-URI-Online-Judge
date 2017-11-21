// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Musical Loop
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1089

#include <iostream>
using namespace std;
 
int main ()
{
    int n, i, onda[10000], cont=0;
 
    cin >> n;
 
    while (n!=0) {
        for (i=0; i<n; i++)
            cin >> onda[i];
        for (i=1; i<n-1; i++)
            if ((onda[i]>onda[i-1]&&onda[i]>onda[i+1])||(onda[i]<onda[i-1]&&onda[i]<onda[i+1]))
                cont++;
        if ((onda[0]>onda[n-1]&&onda[0]>onda[1])||(onda[0]<onda[n-1]&&onda[0]<onda[1]))
            cont++;
        if ((onda[n-1]>onda[n-2]&&onda[n-1]>onda[0])||(onda[n-1]<onda[n-2]&&onda[n-1]<onda[0]))
            cont++;
        cout << cont << endl;
        cont=0;
        cin >> n;
    }
 
    return 0;
}
