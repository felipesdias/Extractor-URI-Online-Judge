// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Ages
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1154

#include <string>
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

	int n = 0;
	
	long long int soma = 0, cont=0;
	
	while(scanf("%d", &n) && n>=0) {
		soma += n;
		cont++;
	}

	printf("%.2lf\n", (double)soma/(double)cont);
	
	return 0;
}
