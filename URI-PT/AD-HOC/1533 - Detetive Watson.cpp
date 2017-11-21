// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Detetive Watson
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1533

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int suspect[1001], i;
	int num;
	int maior,  maior2, intense;
	int sus1, sus2;
	
	scanf("%d", &num);
	
	while(num > 0) {
		maior = maior2 = 0;
		for(i=0; i<num; i++) {
			scanf("%d", &intense);
			
			if(intense > maior) {
				maior2 = maior;
				maior = intense;
				sus2 = sus1;
				sus1 = i;
			}
			else if(intense > maior2) {
				maior2 = intense;
				sus2 = i;	
			}
		}
		
		printf("%d\n", sus2+1);
	
	
		scanf("%d", &num);
	}

	return 0;
}
