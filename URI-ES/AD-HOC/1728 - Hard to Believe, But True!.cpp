// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Hard to Believe, But True!
// Nível: %d
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1728

#include <cstdio>
#include <cstring>

int main() {
    char equacao[25], par1[8], par2[8], soma[9], aux[9];

    scanf("%s", &equacao);

    while(strcmp(equacao, "0+0=0")) {
        int i=0, j=0, k;
        while(equacao[i]!='+') {
            par1[i]=equacao[i];
            i++;
        }
        for(k=i; k<7; k++)
            par1[k] = '0';
        par1[7] = '\0';
        i++;

        while(equacao[i]!='=') {
            par2[j]=equacao[i];
            j++;
            i++;
        }
        for(k=j; k<7; k++)
            par2[k] = '0';
        par2[7] = '\0';
        i++;
        j=0;

        while(equacao[i]!='\0') {
            soma[j]=equacao[i];
            j++;
            i++;
        }
        for(k=j; k<7; k++)
            soma[k] = '0';
        soma[7] = '\0';

        int x, y;
        char carry = '0';
        for(k=0; k<7; k++) {
                x = par1[k]-'0'+par2[k]-'0'+carry-'0';
                y = x/10;
                x %= 10;
                aux[k] =(char)(x+'0');
                carry = (char)(y+'0');
        }
        aux[7] = '\0';

        if(!strcmp(soma, aux))
            printf("True\n");
        else
            printf("False\n");

        scanf("%s", &equacao);
    }

    printf("True\n");

    return 0;
}

