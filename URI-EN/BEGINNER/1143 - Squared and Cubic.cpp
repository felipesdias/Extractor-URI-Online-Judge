// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Squared and Cubic
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1143

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

char s[100000000];

int main() {
	int n;
	cin >> n;

	
	for(long long int i=1; i<=n; i++) {
		printf("%lld %lld %lld\n", i, i*i, i*i*i);
	}
}
