// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sequence IJ 1
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1095

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int i,j;
	
	for(i=1, j=60; j>=0; j-=5, i+=3)
		printf("I=%d J=%d\n", i,j);
	
	return 0;
}
