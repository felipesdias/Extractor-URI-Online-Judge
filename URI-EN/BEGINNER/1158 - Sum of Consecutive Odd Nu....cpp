// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Sum of Consecutive Odd Nu...
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1158

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
	long long int soma;
	int x, y;
	int n;
	cin >> n;
	while(n--) {
		soma = 0;
		
		scanf("%d%d", &x, &y);
		
		if(x%2 == 0)
			x++;

		while(y--) {
			soma += x;
			x += 2;
		}
		
		printf("%lld\n", soma);
	}
	return 0;
}
