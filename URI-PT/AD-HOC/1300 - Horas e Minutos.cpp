// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Horas e Minutos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1300

#include <iostream>
using namespace std;

int main () {
int angulo;

while(cin >> angulo) {
if( !(angulo%6) )
cout << "Y\n";
else
cout << "N\n";
}

return 0;
}
