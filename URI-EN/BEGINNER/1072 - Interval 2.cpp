// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Interval 2
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1072

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int aux;
	int cont = 0;
	
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> aux;
		if(aux >= 10 && aux <= 20)
			cont++;
	}
	
	cout << cont << " in\n";
	cout << n-cont << " out\n";

}
