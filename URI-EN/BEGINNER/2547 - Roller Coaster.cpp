// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Roller Coaster
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2547

#include <iostream>
 
using namespace std;
 
int main() {
    int n, min, max, e, resp;
    
    while(cin >> n >> min >> max) {
        resp = 0;
        
        while(n--)
            cin >> e, resp += e >= min && e <= max;
            
        printf("%d\n", resp);
    }
    return 0;
}
