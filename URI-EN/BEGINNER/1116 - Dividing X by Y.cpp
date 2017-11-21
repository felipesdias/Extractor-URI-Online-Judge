// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Dividing X by Y
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1116

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;


int main() {
	int n;
	double a, b;
	cin >> n;
	
	while(n--) {
		scanf("%lf%lf", &a, &b);
		if(b != 0)
			printf("%.1lf\n", a/b);
		else
			puts("divisao impossivel");
	}
}

