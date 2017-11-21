// Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
// Nome: Mergulho
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1471

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int voltaram, foram, i;
	int num;
	bool vivos;
	
	while(cin >> foram >> voltaram) {
		int pessoas[10001] = {0};
		vivos = true;
		for(i=1; i<=voltaram; i++) {
			scanf("%d", &num);
			pessoas[num]++;
		}
		
		for(i=1; i<=foram; i++) 
			if(pessoas[i] == 0) {
				printf("%d ",i);
				vivos = false;	
			}
		if(vivos)	
			printf("*");

		printf("\n");
			
	}

	return 0;
}
