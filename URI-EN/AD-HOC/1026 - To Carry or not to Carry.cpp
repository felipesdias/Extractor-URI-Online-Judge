// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: To Carry or not to Carry
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1026

#include <iostream>
#include <cmath>
#include <cstdio>
        
using namespace std;
   
int main() {
        
    unsigned long long int num1, num2, soma;
        
    while (cin >> num1 >> num2) {
        soma = 0;
        for(unsigned long long int i=0; num1>0 || num2>0; i++) {
            if(num1%2 != num2%2)
                soma += pow(2.0,i);
            num1 /= 2;
            num2 /= 2;
        }
        printf("%u\n",soma);
    }
        
    return 0;
}
