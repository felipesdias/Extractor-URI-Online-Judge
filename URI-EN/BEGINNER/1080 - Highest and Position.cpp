// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Highest and Position
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1080

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int maior, pos, aux;
	maior = pos = 0;
	
	for(int i=1; i<=100; i++) {
		cin >> aux;
		if(aux > maior) {
			maior = aux;
			pos = i;
		}
	}
	
	cout << maior << endl << pos << endl;
		
	return 0;
}
