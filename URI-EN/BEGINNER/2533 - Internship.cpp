// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Internship
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2533

#include <iostream>
 
using namespace std;
 
int main() {
    int n, creditos, nota, a, b;
    
    while(cin >> n) {
        creditos = nota = 0;
        
        while(n--)
            cin >> a >> b,
            creditos += b,
            nota += a * b;
            
        printf("%.4lf\n", nota / (creditos * 100.0));
    }
    return 0;
}
