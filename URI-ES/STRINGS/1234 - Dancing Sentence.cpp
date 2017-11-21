// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Dancing Sentence
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1234

#include <cstring>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, j, tam;
    char msg[51];
 
    while(cin.getline(msg,51)) {
        tam=strlen(msg);
        for(i=0, j=0; i<tam; i++) {
            if( (msg[i] >= 'a' && msg[i] <= 'z') || (msg[i] >= 'A' && msg[i] <= 'Z') )
                j++;
                 
            if(j%2 && msg[i] >= 'a' && msg[i] <= 'z')
                msg[i] = msg[i]-'a'+'A';
 
            if(!(j%2) && msg[i] >= 'A' && msg[i] <= 'Z')
                msg[i] = msg[i]-'A'+'a';
        }
        cout << msg << endl;
    }
    return 0;
}
