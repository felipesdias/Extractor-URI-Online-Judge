// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even and Odd
// Level: 3
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1259

#include <cstdio>
#include <algorithm>

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int n, aux;
    int vImp[100000], vPar[100000], i = 0, j = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &aux);

        if(aux%2==0) {
            vPar[i] = aux;
            i++;
        }
        else {
            vImp[j] = aux;
            j++;
        }
    }

    std::sort(vPar, vPar+i);
    std::sort(vImp, vImp+j, comp);

    for(int k=0; k<i; k++)
        printf("%d\n", vPar[k]);

    for(int k=0; k<j; k++)
        printf("%d\n", vImp[k]);

    return 0;
}

