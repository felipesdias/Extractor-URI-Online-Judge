// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Chinese Whispers
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1448

#include <iostream>
#include <cstring>
using namespace std;

int main () {
int i, j, n, tam, cont1, cont2;
char frase[101], time1[101], time2[101];
bool empate, timeVencedor;

cin >> n;
cin.get();

for(i=0; i<n; i++) {
empate = true, timeVencedor, cont1 = 0, cont2 = 0;
cin.getline(frase,101);
cin.getline(time1,101);
cin.getline(time2,101);
tam = strlen(frase);

for(j=0;j<tam;j++) {
if(empate) {
if(frase[j]==time1[j] && frase[j]!=time2[j]) {
timeVencedor = true;
empate = false;
}
if(frase[j]==time2[j] && frase[j]!=time1[j]) {
timeVencedor = false;
empate = false;
}
}
if(frase[j]==time1[j])
cont1++;
if(frase[j]==time2[j])
cont2++;
}
cout << "Instancia " << i+1 << endl;
if(cont1>cont2)
cout << "time 1\n\n";
else if(cont2>cont1)
cout << "time 2\n\n";
else if(!empate) {
if(timeVencedor)
cout << "time 1\n\n";
else
cout << "time 2\n\n";
}
else
cout << "empate\n\n";
}

return 0;
}
