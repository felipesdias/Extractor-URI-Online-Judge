// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: The Greatest
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1013

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

 
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << max(a, max(b,c)) << " eh o maior\n";
}
