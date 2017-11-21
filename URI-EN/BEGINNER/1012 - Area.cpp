// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Area
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1012

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (a*c)/2, 3.14159*c*c, ((a+b)*c)/2.0, b*b, a*b);
}
