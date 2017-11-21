// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Multiple Reading
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1262

#include <iostream>
#include <cstring>
using namespace std;

int main () {
int contR, cont, p, i, tam;
char sequencia[51];

while(cin.getline(sequencia,51)) {
cont = 0; contR = 0;
cin >> p;
cin.get();
tam = strlen(sequencia);
for(i=0;i<tam;i++) {
if(sequencia[i]=='W')
cont++;
if(sequencia[i]=='R') {
if(sequencia[i+1]=='W') {
cont++;
contR = 0;
}
else
contR++;
}
if(contR==p) {
contR = 0;
cont++;
}
}
if(contR!=0)
cont++;
cout << cont << endl;
}

return 0;
}
