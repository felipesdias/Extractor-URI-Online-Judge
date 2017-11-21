// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sunday Morning
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2003

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int hora, min;
	
	while(scanf("%d:%d", &hora, &min) != EOF) {
		min += (hora*60+60)-8*60;
		
		if(min < 0)
			min = 0;
		
		printf("Atraso maximo: %d\n", min);
	}
}
