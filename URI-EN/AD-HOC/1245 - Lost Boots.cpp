// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Lost Boots
// Level: 2
// Category: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1245

#include <iostream>

using namespace std;

struct Bota {
	int esq;
	int dir;
};

int main() {

	int i, n;
	int tam;
	char pe;
	int pares;
	Bota bota[31];	
	while(cin >> n) {
		pares = 0;
		
		for(i=0; i<=31; i++) {
			bota[i].esq = 0;
			bota[i].dir = 0;
		}
		
		for(i=0; i<n; i++) {
			cin >> tam >> pe;
			if(pe == 'D')
				bota[tam-30].dir++;
			else
				bota[tam-30].esq++;
		}
		
		for(i=0; i<31; i++) {
			//cout << bota[i].dir << "  " << bota[i].esq << endl;
			if(bota[i].dir <= bota[i].esq)
				pares += bota[i].dir;
			else
				pares += bota[i].esq;
		}
		cout << pares << endl;
	}

	return 0;
}
