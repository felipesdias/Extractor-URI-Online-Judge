// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Positive Numbers
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1060

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	double a;
	int cont = 0;
	for(int i=0; i<6; i++) {
		cin >> a;
		if(a > 0)
			cont++;
	}
	cout << cont << " valores positivos\n";
}
