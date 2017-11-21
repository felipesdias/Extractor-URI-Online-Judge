// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Pascal's Triangle
// Level: 2
// Category: MATHEMATICS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2232

#include <iostream>
 
using namespace std;
 
int main() {
    int t, a, v;
    cin >> t;
    
    while(t--) {
        cin >> a;
        
        for(v = 1; a > 0; a--)
        v *= 2;
        
        cout << v-1 << endl;
    }
    return 0;
}
