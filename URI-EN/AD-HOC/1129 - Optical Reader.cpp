// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Optical Reader
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1129

#include <iostream>
using namespace std;
 
int main ()
{
    int n, a, b, c, d, e, cont=0;
    char x;
 
    cin >> n;
 
    while (n!=0) {
        for(int i=0;i<n;i++){
            cin >> a >> b >> c >> d >> e;
            if(a<=127) {
                cont++;
                x='A';
            }
            if(b<=127) {
                cont++;
                x='B';
            }
            if(c<=127) {
                cont++;
                x='C';
            }
            if(d<=127) {
                cont++;
                x='D';
            }
            if(e<=127) {
                cont++;
                x='E';
            }
            if (cont!=1)
                cout << "*\n";
            else
                cout << x << endl;
            cont=0;
        }
        cin >> n;
    }
 
    return 0;
}
