// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Consumption
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a;
	double b;
	cin >> a >> b;
	
	printf("%.3lf km/l\n", (double)a/b);
}
