// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Bino's Challenge
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2060

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int vetor[1001], num[6] = {0, 0, 0, 0, 0, 0};

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &vetor[i]);

    for(int i=0; i<n; i++) {
        if(vetor[i]%2 == 0)
            num[2]++;
        if(vetor[i]%3 == 0)
            num[3]++;
        if(vetor[i]%4 == 0)
            num[4]++;
        if(vetor[i]%5 == 0)
            num[5]++;
    }

    printf("%d Multiplo(s) de 2\n", num[2]);
    printf("%d Multiplo(s) de 3\n", num[3]);
    printf("%d Multiplo(s) de 4\n", num[4]);
    printf("%d Multiplo(s) de 5\n", num[5]);

    return 0;
}

