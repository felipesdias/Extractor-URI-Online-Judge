// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Height
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1566

#include <bits/stdc++.h>
 
using namespace std;

typedef vector<int> vi;
 
int main() {
    int n, m, e, i, ultimo;
    
    scanf("%d", &n);
    
    while(n--) 
    {
        scanf("%d", &m);
        
        vi baldes(250, 0);
        ultimo = 0;
        
        while(m--)
            scanf("%d", &e), baldes[e]++;
            
        for(i = 20; i <= 230; i++)
            if(baldes[i]) {
                printf("%d", i);
                --baldes[i];
                break;
            }
            
        for(; i <= 230; i++)
            while(baldes[i]--)
                printf(" %d", i);
                
        puts("");
    }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}
