// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Formatação Monetária
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1309

#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int i, j, tam, cont;
    char valor[11], cent[3], aux[18];

    while(cin.getline(valor,11)) {
        tam = strlen(valor);
        cin >> cent;
        cin.get();
        if(strlen(cent)==1) {
            cent[1]=cent[0];
            cent[0]='0';
        }
        aux[16]=cent[1];
        aux[15]=cent[0];
        aux[14]='.';
        cont=1;
        for(i=tam-1, j=13; i>=0; i--, j--, cont++) {
            aux[j]=valor[i];
            if(cont%3==0 && i!=0) {
                aux[j-1]=',';
                j--;
            }
        }
        aux[j]='$';
        for(i=j; i<17;i++)
            cout << aux[i];
        cout << endl;
    }

    return 0;
}

