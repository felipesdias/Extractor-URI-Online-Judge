// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Odd Numbers
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1067

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int x;
	cin >> x;
	
	for(int i=1; i<=x; i+=2)
		printf("%d\n", i);
}
