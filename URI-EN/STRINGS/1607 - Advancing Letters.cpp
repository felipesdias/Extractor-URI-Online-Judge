// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Advancing Letters
// Level: 1
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1607

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <climits>

using namespace std;


int main() {
	int n, cont;
	
	string a, b;
	
	cin >> n;
	
	while(n--) {
		cont = 0;
		cin >> a >> b;
		
		for(int i=0; i<a.length(); i++) {
			while(a[i] != b[i]) {
				cont++;
				a[i]++;
				if(a[i] > 'z')
					a[i] = 'a';
			}
		}
		
		printf("%d\n", cont);
	}
}

