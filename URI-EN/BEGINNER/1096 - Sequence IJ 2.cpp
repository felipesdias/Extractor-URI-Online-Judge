// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sequence IJ 2
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1096

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int i,j;
	
	for(i=1; i<=9; i+=2)
		for(j=7; j>=5; j--)
			printf("I=%d J=%d\n", i,j);
	
	return 0;
}
