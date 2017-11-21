// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Dividers
// Nível: %d
// Categoria: MATEMÁTICAS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2238

#include <bits/stdc++.h>
using namespace std;

vector<int> divisors;

void divisores(int n) {
	int sqrtn = sqrt(n);
	
	while(sqrtn * sqrtn < n)
		sqrtn++;
		
	for(int i = 1; i < sqrtn; i++)
		if(!(n%i))
			divisors.push_back(i), divisors.push_back(n / i);
	
	if(sqrtn * sqrtn == n)
		divisors.push_back(sqrtn);
}

int main() {
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	divisores(c);
	sort(divisors.begin(), divisors.end());
	
	for(int& it : divisors) {
		//cout << it << endl;
		if(d%it == 0 || it%a != 0 || it%b == 0)
			it = -1;
			
		if(it != -1) {
			cout << it << endl;
			goto label;
		}
	}
		
	cout << -1 << endl;
	label:;
}

