// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Hours and Minutes
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1300

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
