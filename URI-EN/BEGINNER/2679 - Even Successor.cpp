// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even Successor
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2679

#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", n & 1 ? n + 1 : n + 2);
 
    return 0;
}
