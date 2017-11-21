// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Getline One
// Level: 1
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1216

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main () {
	double dist, sum = 0;
	string bs;
	int i = 0;
	
	while(getline(cin, bs)) {
		if (scanf("%lf", &dist)) {
			sum += dist;
			i++;
		}
	}
	
	printf("%.1lf\n", sum/i);
	
	return 0;
}

