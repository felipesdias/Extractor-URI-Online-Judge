// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Growing Sequences
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1146

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
	int x;
	
	
	scanf("%d%", &x);
	while(x != 0) {
		printf("1");
		for(int i=2; i<=x; i++) {
			printf(" %d",i);
		}
		puts("");
		scanf("%d", &x);
	}
}
