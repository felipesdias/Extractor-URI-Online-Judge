// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Salary with Bonus
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
	double a, b;
	string nome;

	cin >> nome >> a >> b;
	
	a += (15*b)/100;
	
	printf("TOTAL = R$ %.2lf\n", a);
 
    return 0;
}
