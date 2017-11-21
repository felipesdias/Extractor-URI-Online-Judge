// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Will's Message
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2523

#include <iostream>
 
using namespace std;
 
int main() {
    string alfabeto;
    int n, e;
    
    while(cin >> alfabeto) {
        cin >> n;
        
        while(n--)
            cin >> e, cout << alfabeto[e-1];
        
        cout << "\n";
    }
    
    return 0;
}
