// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Even Square
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1073

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a;
	cin >> a;

	for(int i=2; i<=a; i+=2)
		cout << i << "^" << 2 << " = " << i*i << endl;
}
