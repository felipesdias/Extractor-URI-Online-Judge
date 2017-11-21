// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Distance Between Two Points
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	
	printf("%.4f\n", sqrt( (c-a)*(c-a) + (d-b)*(d-b) ));
}
