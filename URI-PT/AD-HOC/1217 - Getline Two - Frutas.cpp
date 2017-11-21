// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Getline Two - Frutas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1217

#include <iostream>
#include <iomanip>
using namespace std;

char frutas[1000000];


int main () {
int i, j, contFrutas, n;
float mediaKg = 0, mediaRS = 0, aux;

cin >> n;
cin.get();

for(i=1;i<=n;i++) {
j = 0; contFrutas = 1;
cin >> aux;
cin.get();
mediaRS += aux;
cin.getline(frutas, 1000000);
while(frutas[j]!='\0') {
if(frutas[j]==' ') {
contFrutas++;
}
j++;
}
mediaKg+=contFrutas;
cout << "day " << i << ": " << contFrutas << " kg\n";
}

cout << fixed << setprecision(2);
cout << mediaKg/n << " kg by day\n";
cout << "R$ " << mediaRS/n << " by day\n";

return 0;
}
