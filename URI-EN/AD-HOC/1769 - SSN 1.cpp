// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: SSN 1
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1769

#include <cstdio>

int main() {
    char cpf[15];

    while(scanf("%s", &cpf)!=EOF) {
        int a=0, b=0, j=0;

        for(int i=0; i<11; i++) {
            if(i!=3 && i!=7) {
                j++;
                a+=j*(cpf[i]-'0');
                b+=(10-j)*(cpf[i]-'0');
            }
        }
        a%=11;
        if(a==10)
            a = 0;
        b%=11;
        if(b==10)
            b = 0;

        if(a==cpf[12]-'0' && b==cpf[13]-'0')
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");
    }

    return 0;
}

