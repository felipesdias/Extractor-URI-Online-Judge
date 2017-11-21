// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Mjölnir
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1865

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;

	cin >> n;
	string s;
	int aux;


	while(n--) {
		cin >> s >> aux;
		if(s == "Thor")
			puts("Y");
		else
			puts("N");
	}

	return 0;
}
