// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Name at Form
// Level: 1
// Category: BEGINNER
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2160

#include <bits/stdc++.h>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	cout << (line.size() <= 80 ? "YES" : "NO") << endl;
}
