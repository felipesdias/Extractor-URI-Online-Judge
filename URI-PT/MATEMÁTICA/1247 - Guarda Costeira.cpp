// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Guarda Costeira
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1247

#include <iostream>
#include <cmath>
using namespace std;

int main () {
int d;
double vf, vg, diag;

while(cin >> d >> vf >> vg) {
diag = sqrt(d*d+144);
vf = 12/vf;
vg = diag/vg;
if(vg>vf)
cout << "N\n";
else
cout << "S\n";
}

return 0;
}
