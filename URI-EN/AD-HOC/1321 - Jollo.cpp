// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Jollo
// Level: 4
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1321

#include <bits/stdc++.h>

using namespace std;

#define D(x) //cout << #x << " = " << x << endl

#define PB push_back

int main() {
	int m[3], p[2];
	
	while(cin >> m[0] >> m[1] >> m[2] >> p[0] >> p[1]) {
		if(m[0] == 0)
			return 0;
			
		sort(m, m+3);
		sort(p, p+2);
			
		vector<bool> apareceu(53, false);
		
		apareceu[m[0]] = apareceu[m[1]] = apareceu[m[2]] = apareceu[p[0]] = apareceu[p[1]] = true; 
		
		for(int i=0; i<3; i++) {
			for(int j=1; j>=0; j--) {
				if(m[i] > p[j] && p[j] > 0) {
					m[i] = p[j] = 0;
					break;
				}
			}
		}
			
		if(p[0]+p[1] == 0) {
			puts("-1");
		}
		else if(p[0] > 0 && p[1] > 0) {
			for(int i=1; i<=52; i++) {
				if(!apareceu[i]) {
					cout << i << endl;
					break;
				}
			}
		}
		else {
			for(int i=max(max(m[0], m[1]), m[2]); i<=52; i++) {
				if(!apareceu[i]) {
					cout << i << endl;
					goto fim;
				}
			}
			puts("-1");
		}
		
		fim:;
	}
}

