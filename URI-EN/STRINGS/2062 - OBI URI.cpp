// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: OBI URI
// Level: 1
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2062

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char palavra[20];

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++) {
        scanf("%s", palavra);

        if(strlen(palavra) == 3 && palavra[0] == 'O' && palavra[1] == 'B')
            printf("OBI");
        else if(strlen(palavra) == 3 && palavra[0] == 'U' && palavra[1] == 'R')
            printf("URI");
        else
            printf(palavra);

        if(i<n-1)
            printf(" ");
    }

    printf("\n");

    return 0;
}

