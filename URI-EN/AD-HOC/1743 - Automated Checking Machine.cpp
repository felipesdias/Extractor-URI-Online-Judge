// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Automated Checking Machine
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1743

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	bool pri[5];
	bool seg[5];
	
	for(int i=0; i<5; i++)
		cin >> pri[i];
	
	for(int i=0; i<5; i++)
		cin >> seg[i];
	
	for(int i=0; i<5; i++)
		if(pri[i] == seg[i]) {
			puts("N");
			return 0;
		}
		
	puts("Y");
	return 0;
}
