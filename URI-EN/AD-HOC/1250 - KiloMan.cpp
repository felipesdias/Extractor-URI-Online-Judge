// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: KiloMan
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1250

#include <iostream>
using namespace std;

int main () {
int i, j, nCasos, nTiros, tiros[50], contAcertos;
char pulo;

cin >> nCasos;

for(i=0;i<nCasos;i++) {
contAcertos = 0;
cin >> nTiros;
for(j=0;j<nTiros;j++)
cin >> tiros[j];
for(j=0;j<nTiros;j++) {
cin >> pulo;
if(tiros[j]<=2 && pulo=='S')
contAcertos++;
if(tiros[j]>2 && pulo=='J')
contAcertos++;
}
cout << contAcertos << endl;
}

return 0;
}
