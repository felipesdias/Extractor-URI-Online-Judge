// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even or Odd
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, aux;
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> aux;
		if(aux != 0) {
			if(aux%2)
				cout << "ODD ";
			else
				cout << "EVEN ";
			
			if(aux > 0)
				cout << "POSITIVE\n";
			else
				cout << "NEGATIVE\n";
		} else
			puts("NULL");
	}
}
