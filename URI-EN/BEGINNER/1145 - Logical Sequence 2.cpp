// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Logical Sequence 2
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1145

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
	int x, y;
	cin >> x >> y;

	
	for(int i=1; i<=y; ) {
		printf("%d", i);
		i++;
		for(int j=0; j<x-1; j++, i++)
			printf(" %d", i);
		puts("");
	}
}
