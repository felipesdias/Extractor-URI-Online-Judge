// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Coordinates of a Point
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1041

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	
	if(x == 0 && y == 0)
		puts("Origem");
	else if(x == 0)
		puts("Eixo Y");
	else if(y == 0)
		puts("Eixo X");
	else if(x > 0 && y > 0)
		puts("Q1");
	else if(x < 0 && y > 0)
		puts("Q2");
	else if(x < 0 && y < 0)
		puts("Q3");
	else
		puts("Q4");
		
	return 0;
	return 0;
}
