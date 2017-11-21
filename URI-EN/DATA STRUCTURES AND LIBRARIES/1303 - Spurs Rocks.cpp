// Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Name: Spurs Rocks
// Level: 2
// Category: DATA STRUCTURES AND LIBRARIES
// URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1303

#include <cstdio>
#include <algorithm>

struct Time {
	int num, pontos, cestasMarcadas, cestasSofridas;
	double razao;
};

bool cmp(Time a, Time b) {
	if(a.pontos != b.pontos)
		return a.pontos > b.pontos;
	
	if(a.cestasSofridas == 0)
		a.cestasSofridas = 1;
	
	a.razao = (double)a.cestasMarcadas/(double)a.cestasSofridas;
	
	if(b.cestasSofridas == 0)
		b.cestasSofridas = 1;
	
	b.razao = (double)b.cestasMarcadas/(double)b.cestasSofridas;
	
	if(a.razao != b.razao)
		return a.razao > b.razao;
	
	return a.num > b.num;
}

int main() {
	int n, casos = 1, qt, a, pA, b, pB;
	Time times[5000];
	
	scanf("%d", &n);
	
	while(n) {
		if(casos > 1)
			printf("\n");
		
		for(int i=1; i<=n; i++) {
			times[i].num = i;
			times[i].pontos = 0;
			times[i].cestasMarcadas = 0;
			times[i].cestasSofridas = 0;
		}
		
		qt = n*(n-1)/2;
		
		for(int i=1; i<=qt; i++) {
			scanf("%d %d %d %d", &a, &pA, &b, &pB);
			
			if(pA > pB) {
				times[a].pontos += 2;
				times[b].pontos++;
			}
			else {
				times[a].pontos++;
				times[b].pontos += 2;
			}
			
			times[a].cestasMarcadas += pA;
			times[a].cestasSofridas += pB;
			times[b].cestasMarcadas += pB;
			times[b].cestasSofridas += pA;
		}
		
		std::sort(times+1, times+n+1, cmp);
		
		printf("Instancia %d\n", casos++);
		printf("%d", times[1].num);
		for(int i=2; i<=n; i++)
			printf(" %d", times[i].num);
		printf("\n");

		scanf("%d", &n);
	}
	
	return 0;
}
