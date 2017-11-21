// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Last Analógimôn
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2520

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, m, i, j, a, b, c, d, e;
    
    while(cin >> n >> m) {
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++) {
                cin >> e;
                
                if(e == 2)
                    a = i, b = j;
                else if(e == 1)
                    c = i, d = j;
            }
        
        cout << abs(a - c) + abs(b - d) << endl;
    }
 
    return 0;
}
