// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Easy Fibonacci
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1151

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
	int vet[50];
	vet[1] = 0;
	vet[2] = 1;
	int n;
	cin >> n;
	cout << vet[1] << " " << vet[2];
	for(int i=3; i<=n; i++) {
		vet[i] = vet[i-1]+vet[i-2];
		cout << " " << vet[i];
	}
	
	cout <<	endl;
}
