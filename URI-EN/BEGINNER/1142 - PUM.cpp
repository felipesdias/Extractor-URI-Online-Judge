// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: PUM
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1142

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
	int n;
	cin >> n;
	
	int cont=1;
	
	for(int i=1; i<=n; i++) {
		printf("%d %d %d PUM\n", cont, cont+1, cont+2);
		cont+=4;
	}
}
