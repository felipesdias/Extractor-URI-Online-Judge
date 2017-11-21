// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Identifying Tea
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2006

#include <iostream>
 
using namespace std;
 
int main() {
    int r, e, resp = 0;
    
    scanf("%d", &r);
    
    while(scanf("%d", &e) > 0)
        resp += e == r;
        
    printf("%d\n", resp);
 
    return 0;
}
