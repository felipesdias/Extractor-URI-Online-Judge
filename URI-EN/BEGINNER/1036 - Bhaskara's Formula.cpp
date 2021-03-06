// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Bhaskara's Formula
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, delta;
	
	cin >> a >> b >> c;
	delta = b*b - (4*a*c);
	
	if(a && delta > -1) {
			delta = sqrt(delta);
			printf("R1 = %.5f\n", (-b+delta)/(2*a));
			printf("R2 = %.5f\n", (-b-delta)/(2*a));
	} else
		cout << "Impossivel calcular\n";
	
	return 0;
}
