// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Event
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2172

#include <iostream>
 
using namespace std;
 
int main() {
    long long n, m;
    
    while(cin >> n >> m && (n || m))
        cout << n * m << "\n";
 
    return 0;
}
