// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Rectangle Park
// Level: 4
// Category: COMPUTATIONAL GEOMETRY
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1938

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

struct Point {
	int x, y;
};

Point postes[3010];

bool cmp(Point p, Point q) {
	return p.y < q.y;
}

int main() {
	int n;
	
	cin >> n;
	
	if(n == 1) {
		cout << "0\n";
		return 0;
	}
	
	for(int i=0; i<n; i++)
		scanf("%d %d", &postes[i].x, &postes[i].y);
		
	sort(postes, postes+n, cmp);
	
	int cont = 1;
	
	for(int i=2; i<n; i++) {
		int esq = -INF, dir = INF;
		
		for(int j=i-1; j>=0; j--) {
			if(postes[j].x <= postes[i].x) {
				if(postes[j].x > esq) {
					cont++;
					esq = postes[j].x;
				}
			}
			else {
				if(postes[j].x < dir) {
					cont++;
					dir = postes[j].x;
				}
			}
		}
	}
	
	cout << cont << endl;
}

