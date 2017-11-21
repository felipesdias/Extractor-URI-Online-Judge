// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Huaauhahhuahau
// Level: 1
// Category: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2242

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s1;
	
	cin >> s1;
	string s2 = "";
	
	for(size_t i=0; i<s1.size(); i++)
		if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
			s2 += s1[i];
			
	for(size_t i=0, j=s2.size()-1; i<s2.size(); i++, j--)
		if(s2[i] != s2[j]) {
			puts("N");
			return 0;
		}
		
	puts("S");

	return 0;
}

