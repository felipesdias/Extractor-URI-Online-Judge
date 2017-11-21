// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Paula's Mathematic Game
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1192

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
