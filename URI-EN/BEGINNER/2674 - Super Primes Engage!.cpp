// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Super Primes: Engage!
// Level: 2
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2674

#include <bits/stdc++.h>
 
using namespace std;

char nprimo[100001] = {0}; // tamanho = sqrt(maximo)
vector<int> primos;
 
int main() {
    int n, super, primo, i, j;

    nprimo[1] = 1;
    nprimo[0] = 1;

    for (i = 2; i < 320; i++) // i [2, sqrt(sqrt(maximo))]
        if (!nprimo[i])
            for (j = i * i; j < 100001; j += i) // j [i^2, sqrt(maximo)]
                nprimo[j] = 1;

    for (i = 2; i < 100001; i++)
        if (!nprimo[i])
            primos.push_back(i);    
 
    while(scanf("%d", &n) > 0) {
        primo = 0;
        super = 0;
        
        if(binary_search(primos.begin(), primos.end(), n)) {
            primo = 1;
            super = 1;
            
            while(n) {
                if(!binary_search(primos.begin(), primos.end(), n % 10)) {
                    super = 0;
                    
                    break;
                }
                
                n /= 10;
            }
        }
        
        if(super)
            puts("Super");
        else if(primo)
            puts("Primo");
        else
            puts("Nada");
    }
 
    return 0;
}
